dpms-force-off-until-activity
=============================

The `dpms-force-off-until-activity` utility has solely been created to work around the much hated [Gnome Power Manager bug #447728](https://bugs.launchpad.net/ubuntu/+source/gnome-power-manager/+bug/447728) by repeatedly forcing DPMS to disable the screen until some user activity occurs.

In order to build it first `apt-get install libxss-dev libxext6-dev` as root and then type `make`.

After having a successful build you'll be able to use the `lock-screen.sh` script too lock the screen.  You're encouraged to bind either of these executables to a hotkey of your choice.

nxmehta's Python script
-----------------------

There is a [relevant thread on UbuntuForums.org](http://ubuntuforums.org/showthread.php?t=1317747) in which various workarounds have been discussed the most interesting and effective one being [nxmehta's Python script](http://ubuntuforums.org/showpost.php?p=9433671&postcount=24).  His script captures all user events of the root window to work around this issue.  I think his approach is more elegant than mine but I couldn't make it work to lock my screen without my desktop being momentarily exposed which can be very uncomfortable privacy-wise.

Attributions
------------

I created this utility by taking the relevant code from https://github.com/dirjud/python-dpms and https://github.com/agravier/actmon and welding them together.
