Android Kernel Howto
--------------------

BEWARE: This kernel tree is made to be built in an android repo tree !

You MUST not use "make" in kernel/ directory but use the defined targets in the android repo root :

---

First you need to prepare the environment to tell we are building for the i9103

In gingerbread :

  . build/envsetup.sh

  lunch cyanogen_i9103-eng     # or "bib i9103"

In ICS :

  . build/envsetup.sh

  lunch cm_i9103-userdebug     # or "bib i9103"

---

Then still in repo root folder, not kernel one, use one of these commands :

Available targets:

  make kernel_clean            # clean output

  make kernel_config           # create the final .config with repo features (ext_config)

  make kernel                  # build the zImage

  make kernel_modules          # build the kernel modules

  make wlan_dhd                # build wlan module

  make wlan_dhd_clean          # clean the wlan temporary build files

  make device_modules          # build the modules present in device project under modules/

  make kernel_modules_install  # copy the kernel modules to output folder root/lib/modules

  make kernel_install          # copy external kernel modules to root/lib/modules and kernel to device tree


  then, you can use 'bib galaxyr && mka bootimage' to create the flashable boot.img

---

  Stock ROM compatibility:

  This kernel is made for CM/AOSP, that mean some drivers are more open to userspace than the stock one
  I try to keep the compatibility with the stock rom, but its not easy.

  Actually the biggest issue is about the KXTF9 sensor, which require to be opened to CM7 libsensors direct control
  instead of the normal MPU slave config.

  So, if you want to test this kernel on stock rom, disable the CONFIG_SENSORS_KXTF9, else you will have regular tempory "locks"

  There is also a ext_config (user_bld) to do that automatically, check Android.mk rules

---

'Tanguy Pruvot, August 2012'
