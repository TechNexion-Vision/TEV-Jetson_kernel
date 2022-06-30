### Folder location(created by TEV-Jetson_Jetpack_script)
```
<nvidia_folder>/Linux_for_Tegra/sources/kernel/kernel-4.9
```

&nbsp;

### Compile script
``` coffeescript
$ ./compile_kernel.sh
```
It will create files : 
```
# kernel image
<nvidia_folder>/Linux_for_Tegra/sources/kernel/kernel-4.9/arch/arm64/boot/Image
# kernel modules
<nvidia_folder>/Linux_for_Tegra/sources/kernel/modules/
# device tree
<nvidia_folder>/Linux_for_Tegra/sources/kernel/kernel-4.9/arch/arm64/boot/dts/\<device-tree>.dtb
```

### Take effect
* kernel Image

Copy from:
```
<nvidia_folder>/Linux_for_Tegra/sources/kernel/kernel-4.9/arch/arm64/boot/Image
```
to device here
```
/boot/
```
<br />
 
* Kernel Modules:

Copy from
```
<nvidia_folder>/Linux_for_Tegra/sources/kernel/modules/lib/
```
to device here
```
/
```

<br />

* device-tree:

Copy from
```
<nvidia_folder>/Linux_for_Tegra/sources/kernel/kernel-4.9/arch/arm64/boot/dts/\<device-tree>.dtb
```
to device here
```
/boot/
```
