# Kernel IAT Manual Mapper
I use this in order to manual map my **.dll** into the game without getting detected by the anti-cheat.

## Procedure
 - It hooks **Import Address Table**.
 - Parses the imports of the game.
 - Hooks **DiscordHook64.dll**'s function **QueryPerformanceCounter** which is being called every frame.

 # Disclaimer
This repository is for research and learning purposes only, it is not meant to create any exploit within the game.

