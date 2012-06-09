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

  make kernel                  # build the zImage

  make kernel_modules          # build the kernel modules

  make wlan_dhd                # build wlan module

  make device_modules          # build the modules present in device project under modules/

  make kernel_modules_install  # copy the kernel modules to output folder system/lib/modules


---

'Tanguy Pruvot, June 2012'
