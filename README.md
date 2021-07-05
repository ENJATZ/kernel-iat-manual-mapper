# Kernel IAT Manual Mapper
I use this in order to manual map my **.dll** into the game without getting detected by the anti-cheat.

## Procedure
 - Loads the dynamic library into memory as raw data.
 - Allocates memory within the process by using a kernel driver (**ZwAllocateVirtualMemory**) for a **stub**:
   - Injects a stub and later replaces headers with the dll's headers along with entry point.
 - It hooks **Import Address Table**.
 - Parses the imports of the game.
 - Hooks **DiscordHook64.dll**'s function **QueryPerformanceCounter** which is being called every frame.

 # Disclaimer
This repository is for research and learning purposes only, it is not meant to create any exploit within the game.

