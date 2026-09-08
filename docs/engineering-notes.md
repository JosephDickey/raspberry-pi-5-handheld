# Engineering notes

## Development context

I built this upgrade during May–December 2025. The main external reference was Leandro Linares's handheld guide; the practical starting point was what I had learned building and using my own Pi 4 handheld.

## Lessons carried into the upgrade

| Earlier experience | Change in this project |
| --- | --- |
| Pi 4 enclosure overheated and lacked dedicated vents | Added enclosure vents and copper heatsinks |
| Earlier handheld used a 5-inch screen | Integrated a larger 6-inch touchscreen |
| Mini TV introduced touchscreen interaction | Applied that experience to handheld menu navigation |
| Earlier handheld's emulation use extended through PS1 | Upgraded the computer and explored additional systems |
| Pi and screen changed | Revised the power supply alongside them |

The touchscreen experience carried over between projects, but no recovered code establishes whether specific scripts were reused.

## Observed results

- Menu navigation worked through the touchscreen.
- The upgraded handheld ran cooler than the previous one during my use.
- I ran PSP games and some PS2 and Wii games in addition to older systems.

These are retrospective observations. The record does not contain individual game names, emulator versions, graphics backends, resolutions, frame rates, or temperature logs. I cannot separate the effects of the board upgrade, cooling, and software configuration using the retained evidence.

## Engineering scope

My work centered on integrating the upgraded computer, larger touchscreen, revised power hardware, and cooling changes into the handheld. The project demonstrates iteration across builds: identify a limitation in a working device, change the next design, and evaluate the result during use.

No fan, overclock, particular power-board model, screen interface, touch driver, or measured battery runtime is specified because those details have not been confirmed.

## Retained materials

This repository contains the project account and attributed reference controller sketches. It does not contain recovered build photos, enclosure geometry, original device configuration, or my touchscreen code. The linked Pi 4 project provides the first-generation build record; it is not a visual record of this upgrade.

## Useful additions if the device record is recovered

1. Identify the screen, power supply, input controller, and software versions.
2. Export the touchscreen and startup configuration.
3. Record game-specific emulator settings and observed behavior.
4. Compare temperature readings under a defined workload.
5. Add photographs and enclosure files from this actual build.

These are future documentation steps, not tests already completed.
