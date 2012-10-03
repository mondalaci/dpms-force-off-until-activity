#include <stdio.h>
#include <unistd.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/extensions/scrnsaver.h>
#include <X11/extensions/dpms.h>

int main(int argc, char *argv[])
{
    time_t idle_time_old, idle_time_new = 0;
    XScreenSaverInfo *mit_info = XScreenSaverAllocInfo();
    Display *display = XOpenDisplay(NULL);

    if (display == NULL) {
        return 1;
    }

    DPMSEnable(display);
    int screen = DefaultScreen(display);

    do {
        idle_time_old = idle_time_new;
        DPMSForceLevel(display, DPMSModeOff);
        usleep(50000);  // Wait 50 ms between DPMSForceLevel calls.
        XScreenSaverQueryInfo(display, RootWindow(display, screen), mit_info);
        idle_time_new = (mit_info->idle);
    } while (idle_time_new >= idle_time_old);

    DPMSDisable(display);
    XFree(mit_info);
    XCloseDisplay(display);

    return 0;
}
