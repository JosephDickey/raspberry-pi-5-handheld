# Reference controller code

Leandro Linares's guide provides two Arduino sketches using MHeironimus's ArduinoJoystickLibrary. Both are copied unchanged in [upstream/leandro-gamepad/](../upstream/leandro-gamepad/).

| Sketch | What it reads |
| --- | --- |
| Grizzly | 14 digital buttons using internal pull-ups |
| Kodiak | The same buttons, plus four analog axes on A0–A3 |

Both report a LOW input as a pressed button, call `Joystick.sendState()`, and wait 10 milliseconds before repeating. Kodiak centers the analog readings, applies a deadzone of 20, and uses an output range of -511 to 511. A comment in the original code says 0–1023, but the configured output range is signed.

## Relationship to my build

These sketches handle physical controls, not touchscreen menus. I haven't recovered my controller firmware or confirmed which variant I used. The imported version may also be newer than my 2025 build; [UPSTREAM.md](../upstream/leandro-gamepad/UPSTREAM.md) records its source.

## Opening the code

Each sketch has its own Arduino IDE folder:

- `grizzly/grizzly.ino`
- `kodiak/kodiak.ino`

Choose one sketch and follow the guide for the board and [ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary) dependency. The sketches are alternatives and should not be combined.

Check the pin mapping against the controller wiring before uploading. These copies were checked against the source download but have not been compiled or tested on my handheld.
