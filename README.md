# Raspberry Pi 5 Touchscreen Handheld

**May–December 2025**  
Raspberry Pi 5 · Linux · Touchscreen menus · Cooling and power upgrades

This was the follow-up to my Pi 4 handheld. I moved to a Pi 5, used a larger 6-inch screen, changed the power supply, and added touchscreen menu navigation. I also addressed the heat problem from the previous build by adding vents and copper heatsinks.

## My engineering changes

| Part of the build | Pi 4 handheld | Pi 5 upgrade |
| --- | --- | --- |
| Computer | Pi 4B | Pi 5 |
| Screen | 5 inches | 6-inch touchscreen |
| Menus | Physical controls | Added touch navigation |
| Power | Previous supply | Different supply for the Pi and larger screen |
| Cooling | No dedicated vents; overheated | Vents and copper heatsinks; ran cooler in use |
| Games I ran | Systems through PS1 | PSP and some PS2/Wii games as well |

The game comparison describes my experience with these setups. I didn't keep game names, emulator settings, or frame-rate measurements, so it isn't a compatibility list or a claim that every game ran at full speed.

## Cooling

Heat was one of the problems I wanted to address after the Pi 4 build. That enclosure had no dedicated vents. For this version, I added ventilation and copper heatsinks, and it ran cooler during use. I didn't record temperatures for a direct comparison.

## Touchscreen and power

I used what I learned from adding touch controls to the mini TV to add menu navigation on the handheld. On the TV, touches paused playback or toggled the display; here, the touchscreen was used to move through menus.

The Pi 5 and larger display also needed a different power supply. I don't have the exact supply or screen model recorded.

## Software and project files

The controller sketches can be browsed directly in this repository. They are unchanged reference code by Leandro Linares for physical gamepad inputs. My touchscreen configuration is not included.

| Resource | Contents |
| --- | --- |
| [Build notes](docs/engineering-notes.md) | How this project followed the earlier builds |
| [Software notes](docs/reference-software.md) | Explanation of the reference sketches |
| [Grizzly sketch](upstream/leandro-gamepad/grizzly/grizzly.ino) | Controller without analog thumbsticks |
| [Kodiak sketch](upstream/leandro-gamepad/kodiak/kodiak.ino) | Controller with analog thumbsticks |

I don't currently have photos, enclosure files, or my device configuration for this version. Neither reference sketch is confirmed as the exact firmware I used. I'll add my own files if I recover them.

## Credits

Main reference: [Leandro Linares's handheld build guide](https://leandrolinares.com/blog/diy-handheld-game-console). His included Grizzly and Kodiak sketches use MHeironimus's ArduinoJoystickLibrary. [Source details and reuse terms](upstream/leandro-gamepad/UPSTREAM.md), including the guide's CC BY-NC-SA 4.0 notice, are kept with the code.

No ROMs, BIOS files, or operating-system images are included.

## Earlier builds

- [Pi 4 handheld](https://github.com/JosephDickey/raspberry-pi-4-handheld)
- [Touchscreen mini TV](https://github.com/JosephDickey/raspberry-pi-touchscreen-tv)
