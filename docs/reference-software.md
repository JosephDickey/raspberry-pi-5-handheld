# Reference controller software

Leandro Linares's guide links two Arduino sketches that use MHeironimus's ArduinoJoystickLibrary. Both are included unchanged under [upstream/leandro-gamepad/](../upstream/leandro-gamepad/).

These sketches handle physical gamepad input. They do not implement the Pi 5 handheld's touchscreen menu navigation.

## Sketch behavior

| Sketch | Behavior visible in the source |
| --- | --- |
| Grizzly | Reads 14 digital button inputs using internal pull-ups and reports pressed buttons |
| Kodiak | Adds four analog axes from A0–A3, centers their readings, applies a deadzone, and reports them with the buttons |

In both sketches, a LOW digital input is reported as pressed. The loop calls Joystick.sendState() and then delays for 10 milliseconds. This delay is not an end-to-end input-latency measurement.

Kodiak configures axis ranges from -511 to 511 and uses a deadzone of 20. The original source includes a comment describing 0–1023 axes, but its implemented reporting range is the signed range set in setup(). The comment is retained because the sketch is copied unchanged.

## Source versus my implementation

The current guide offers more than one controller variant. My exact controller variant and recovered firmware are unavailable, so both are provided as references rather than labeled as my device's firmware.

The imported source snapshot may postdate the 2025 build. Its revision identifies what is included in this repository, not what was necessarily installed on my device.

## Opening the sketches

Each sketch is in a matching Arduino sketch directory:

- grizzly/grizzly.ino
- kodiak/kodiak.ino

Open the desired sketch in the Arduino IDE and use the guide's instructions for the appropriate board and ArduinoJoystickLibrary dependency. The two are alternative sketches, not files to combine into one sketch.

Pin assignments must match the actual controller wiring. No Arduino upload, compilation against a pinned library version, Pi 5 execution, or hardware validation was performed for this documentation update. The original files were checked against the downloaded source.

## Dependency

[ArduinoJoystickLibrary by MHeironimus](https://github.com/MHeironimus/ArduinoJoystickLibrary) supplies Joystick.h. It is referenced as a dependency rather than bundled here, and retains its own licensing.
