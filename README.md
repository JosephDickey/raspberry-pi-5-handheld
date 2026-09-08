# Raspberry Pi 5 Touchscreen Handheld

**May–December 2025 · Embedded Linux · Hardware integration · Touch input · Thermal design**

A second-generation handheld emulation system built around a Raspberry Pi 5 and a 6-inch touchscreen. I revised the power hardware, added copper heatsinks and enclosure vents, and brought touchscreen menu navigation into the handheld using experience from my earlier mini TV project.

This upgrade combined lessons from my [Pi 4 handheld](https://github.com/JosephDickey/raspberry-pi-4-handheld) and [touchscreen mini TV](https://github.com/JosephDickey/raspberry-pi-touchscreen-tv), with Leandro Linares's handheld guide as the main external reference.

## My contributions

- **Platform upgrade:** Moved from the Raspberry Pi 4B to the Pi 5 to expand the range of games I could run.
- **Display and interface integration:** Increased the screen from 5 to 6 inches and added touch input for menu navigation.
- **Power-system revision:** Used a different power supply to support the more powerful Pi and larger screen.
- **Cooling improvements:** Added copper heatsinks and enclosure vents after encountering overheating in the previous handheld. In use, this version ran cooler than my earlier build.
- **Cross-project development:** Applied touchscreen experience from the mini TV to a different interface: navigating handheld menus.

## What changed between generations

| Area | First handheld: Pi 4B | Upgrade: Pi 5 |
| --- | --- | --- |
| Display | 5-inch screen | 6-inch touchscreen |
| Menu interaction | Physical controls | Added touchscreen menu navigation |
| Power | Previous handheld's power hardware | Revised supply for the Pi and screen |
| Enclosure cooling | No dedicated vents; overheating encountered | Vents and copper heatsinks; cooler operation observed |
| Emulation experience | Games through PS1 in my setup | PSP games and some PS2/Wii games in my setup |

The emulation row describes my experience with these two builds, not a general limit of either board. Specific titles, emulator versions, settings, and frame-rate records were not retained. PS2/Wii observations should not be read as broad compatibility or full-speed performance claims.

## Engineering decisions

### Address the previous enclosure's heat buildup

My Pi 4 enclosure lacked dedicated ventilation. For the upgrade, I included vents and copper heatsinks as part of the hardware changes. I observed cooler operation, although I did not retain temperature measurements or run a controlled comparison between the builds.

### Integrate a larger screen and touch input

The 6-inch screen increased the display size, while touch input added a way to navigate menus. This drew on the touchscreen integration work from my mini TV. The handheld's touch function was menu navigation; I am not claiming touch-based game controls or the TV's pause/display-toggle behavior here.

### Revise power alongside the compute and display changes

I changed the power supply for the Pi 5 and larger screen. Exact supply ratings, screen model, battery details, and electrical measurements are not available in the retained project record.

## Explore the repository

| Resource | Contents |
| --- | --- |
| [Engineering notes](docs/engineering-notes.md) | Design progression, observations, and the remaining documentation gaps |
| [Reference software notes](docs/reference-software.md) | How the guide's gamepad sketches work |
| [Grizzly controller sketch](upstream/leandro-gamepad/grizzly/grizzly.ino) | Leandro's reference for a controller without analog thumbsticks |
| [Kodiak controller sketch](upstream/leandro-gamepad/kodiak/kodiak.ino) | Leandro's reference with analog thumbsticks |
| [Source provenance](upstream/leandro-gamepad/UPSTREAM.md) | Original author, source revision, attribution, and license information |

The included sketches are unchanged reference code from the guide. They are not recovered device files or my touchscreen implementation, and neither controller variant has been confirmed as the exact one used in my build.

## Project record

This is a retrospective write-up based on my build experience. Photos, enclosure files, device configurations, and modified source files are not currently available for this version. No substitute build images are used. The earlier projects retain photos and, for the Pi 4 handheld, Meshmixer files.

## Credits

Main external reference: [How to build a handheld game console](https://leandrolinares.com/blog/diy-handheld-game-console) by **Leandro Linares**.

Reference sketches: [Leandro's Grizzly and Kodiak gamepad code](https://gist.github.com/lean8086/4cb525eae8061a3e8af11a29c369fec2), using [ArduinoJoystickLibrary](https://github.com/MHeironimus/ArduinoJoystickLibrary) by MHeironimus.

Leandro's guide states [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/). Source attribution and reuse terms are recorded alongside the reference sketches. No game ROMs, BIOS files, or operating-system images are included.
