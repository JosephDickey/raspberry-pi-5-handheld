# Build notes

I worked on this upgrade from May to December 2025. Leandro Linares's guide was the main reference, but several changes came directly from problems I had run into on my own earlier projects.

## Carrying lessons forward

The Pi 4 handheld had a 5-inch screen and an enclosure that overheated. For this version, I used a Pi 5 and a 6-inch touchscreen, changed the power supply, and added copper heatsinks and vents.

I had already worked through adding touchscreen controls on the mini TV. I applied that experience here to menu navigation. I haven't recovered the code, so I can't say which parts of the earlier implementation were reused.

## What I noticed in use

- Touchscreen menu navigation worked.
- The enclosure ran cooler than the previous handheld.
- I could run PSP games and some PS2/Wii games, in addition to the older systems I used on the Pi 4 build.

These are observations from using the device. I didn't keep temperature logs, game-specific settings, or frame rates. The notes therefore can't separate the effects of the board, cooling, and software changes.

## Missing details

I don't currently have photos, enclosure files, or device configurations from this build. The earlier Pi 4 repository has its own photos and design files, but they show that version, not this one.

If I recover the device files, the most useful additions will be the screen and power-supply details, touch configuration, controller firmware, and emulator settings. A temperature comparison and game-by-game test record would also make the results easier to assess.
