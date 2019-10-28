# Default 104key Layout


## Main Layer
This is the default layout for fullsize QWERTY keyboards with the exception that the right GUI key (to the right of right Alt) is used as an "Fn" key to activate the second layer while hold. You can also activate the second layer while holding the numpad 0. You can still access the 0 if you tap it.


## Secondary Layer
The second layer is configured to allow media control (on Linux and Windows) and insert Unicode characters.

### Unicode characters:
Support for characters that are typically found on German keyboards: lower- and uppercase Umlauts, eszett (sharp s) and the Euro sign. These are typically used on German keyboards.  
`a` -> ä, `o` -> ö, `u` -> ü  
`A` -> Ä, `O` -> Ö, `U` -> Ü  
`s` -> ß, `e` -> €

### F keys
The F row is shifted so you can access F13 to F24.

### Quantum & keyboard settings
used to access DFU mode and change the input mode depending on the operating system. The default input mode is set to Linux. Alphabetic cycle order: Linux, MacOS, Windows (WinCompose).  
`Print Screen` -> cycle to next input mode  
`Scroll Lock` -> cycle to previous input mode  
`Pause` -> RESET: Put the keyboard into DFU mode for flashing

### Media Control with the Numpad:
This uses the universal media control keycodes. You might have to change this if you want to use it on your Mac.
```
,---------------------------.
|      |      |      |      |
|------+------+------+------|
|      | Vol+ |      |Media |
|------+------+------|Player|
| Prev | Play | Next |      |
|------+------+------+------|
| Mute | Vol- |      |  My  |
|-------------+------|  PC  |
| #HOLD_THIS# | Stop |      |
`---------------------------'
```