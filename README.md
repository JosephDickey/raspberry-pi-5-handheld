# Raspberry Pi 5 Touchscreen Handheld

**May–December 2025 · Hardware integration · Embedded Linux · Touch input · Thermal design**

A second-generation handheld emulation system built around a Raspberry Pi 5 and a 6-inch touchscreen. I revised the power hardware, added copper heatsinks and enclosure vents, and applied touchscreen experience from my mini TV to handheld menu navigation.

## My contributions

- **Platform upgrade:** Moved from the Pi 4B to the Pi 5 to expand the range of games I could run.
- **Display and interface integration:** Increased the display from 5 to 6 inches and added touchscreen menu navigation.
- **Power-system revision:** Changed the power supply to support the upgraded computer and larger screen.
- **Cooling improvements:** Added copper heatsinks and vents in response to overheating in the previous enclosure.
- **Cross-project development:** Combined lessons from the Pi 4 handheld with touch-input experience from the mini TV.

## Hardware and software

| Subsystem | My build |
| --- | --- |
| Computer | Raspberry Pi 5 |
| Display and input | 6-inch touchscreen with menu navigation |
| Power | Revised supply for the upgraded Pi and screen |
| Cooling | Copper heatsinks and enclosure vents |
| Software | Linux-based emulation environment |

## Development and results

| Area | First generation: Pi 4B | Upgrade: Pi 5 |
| --- | --- | --- |
| Display | 5-inch screen | 6-inch touchscreen |
| Menu interaction | Physical controls | Added touch navigation |
| Power | Previous handheld's supply | Revised power hardware |
| Cooling | No dedicated vents; overheating encountered | Vents and copper heatsinks; cooler operation observed |
| Emulation in my use | Games through PS1 | PSP games and selected PS2/Wii games |

### Apply the thermal lesson from the first build

The previous enclosure lacked dedicated ventilation. Adding vents and copper heatsinks made cooling part of the revised design, and I observed cooler operation during use.

### Carry touch-input experience into a new interface

My TV used touch regions for playback and display control. The handheld applied that experience to menu navigation, alongside the larger screen.

### Upgrade the supporting hardware together

Changing the computer and screen also prompted a power-supply change. This made the project a system-integration revision involving compute, display, input, power, and cooling.

## Explore the project

The included sketches are Leandro Linares's unchanged reference gamepad code.

| Resource | Contents |
| --- | --- |
| [Engineering notes](docs/engineering-notes.md) | Design progression and build observations |
| [Reference software notes](docs/reference-software.md) | How the guide's controller sketches work |
| [Grizzly sketch](upstream/leandro-gamepad/grizzly/grizzly.ino) | Reference controller without analog thumbsticks |
| [Kodiak sketch](upstream/leandro-gamepad/kodiak/kodiak.ino) | Reference controller with analog thumbsticks |
| [Source provenance](upstream/leandro-gamepad/UPSTREAM.md) | Attribution, revision, and reuse terms |

## Documentation status

This retrospective record currently contains documentation and reference code; photos, enclosure files, and my device configurations are unavailable. Exact hardware models, emulator settings, game titles, frame rates, and temperature measurements were not retained. Cooler operation and expanded emulation describe my experience, not controlled benchmarks or general PS2/Wii compatibility. Neither included controller variant is confirmed as my device's firmware, and the sketches do not implement touchscreen navigation.

## Credits

Main external reference: [How to build a handheld game console](https://leandrolinares.com/blog/diy-handheld-game-console) by **Leandro Linares**.

Reference sketches: [Grizzly and Kodiak gamepad code](https://gist.github.com/lean8086/4cb525eae8061a3e8af11a29c369fec2), using [ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary) by MHeironimus.

Leandro's guide states [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/); attribution and reuse terms accompany the sketches. No game ROMs, BIOS files, or operating-system images are included.

## Related projects

- [Pi 4 handheld — first-generation build](https://github.com/JosephDickey/raspberry-pi-4-handheld)
- [Touchscreen mini TV — touch-input experience](https://github.com/JosephDickey/raspberry-pi-touchscreen-tv)
