# barnacle

![barnacle](imgur.com image replace me!)

unibody ortho keyboard with an Boardrun-like split

* Keyboard Maintainer: [floookay](https://github.com/floookay)
* Hardware Supported: barnacle shell+core PCBs and 0xCB Helios controller
* Hardware Availability: [keyboard](https://github.com/floookay/barnacle) and [controller](https://keeb.supply/products/0xcb-helios)

Make example for this keyboard (after setting up your build environment):

    make barnacle:default

Flashing example for this keyboard:

    make barnacle:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the Escape key and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
