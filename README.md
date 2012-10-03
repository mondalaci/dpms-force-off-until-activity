dpms-force-off-until-activity
=============================

This utility has solely been created to work around the much hated [Gnome Power Manager bug #447728](https://bugs.launchpad.net/ubuntu/+source/gnome-power-manager/+bug/447728) by repeatedly forcing DPMS to disable the screen until some user activity occurs.

In order to build it first `apt-get install libxss-dev libxext6-dev` as root and then type `make`.

I created this utility by taking the relevant code from https://github.com/dirjud/python-dpms and https://github.com/agravier/actmon and welding them together.

There is a [relevant thread on UbuntuForums.org](http://ubuntuforums.org/showthread.php?t=1317747) in which various workarounds have been discussed the most interesting and effective being [nxmehta's Python script](http://ubuntuforums.org/showpost.php?p=9433671&postcount=24).  His script captures every user event of the root window to work around this issue.
