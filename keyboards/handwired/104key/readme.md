# 104key

![104key](https://i.imgur.com/W6aBvEQ.jpg)

A handwired fullsize ANSI keyboard with 104 keys.

Keyboard Maintainer: [floookay](https://github.com/floookay)  
Hardware Supported: Teensy++ 2.0

Make example for this keyboard (after setting up your build environment):

    make handwired/104key:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Supported keymaps are:
* QWERTY (US)
* Colemak
* Dvorak

The QWERTY keymap has a second layer with media control on the numpad and some unicode characters used for German words. If you want to add other unicode characters you can edit the `unicode_map` in the keymap file/files. The standard input mode for unicode characters is set to Linux. You can change this to MacOS or Windows (WinCompose) with the cycle buttons.