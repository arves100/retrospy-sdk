# RetroSpy Software Development Kit
RetroSpy is a project that aim to create a fully working SDK and Server for GameSpy Services

This SDK is a fork of GameSpy 2007 SDK, upgraded to newer compiler and maybe try to add the same stuff that GameSpy had in the end of 2014

Status
===

Windows: Currently all the projects are compiled with Visual Studio 2017 (v141_xp) and Windows 10.

MacOSX: None yet

Linux: Linux tests will start after i've successfully compiled all the project on Windows

Nitro: It's missing NitroWifi.h. If you find that, please contact me.

Revolution: I will start it after i finish Linux projects

PS3: None yet

PS2: I will start it after i finish Linux projects

PSP: None yet

XBox: None yet

XBox360: None yet

Contribution
===

Feel free to contribute (maybe with that platform that i could not test)

I'd like to have full Platforms and Compilers supported for this project.

Notes
===

- Brigates SDK won't compile because are missing some headers from common.

- NitroWifi should be a package included with Nintendo DS SDK, this header is responsable for socket implementation and pretty much all the test in DS Networking. Because some Dev Units were made without Wifi, i guess Nintendo added Wifi connectivity later to the DS. That could be the reason why it's a separate package.

- I've made a commit that aim to fix CRT_SECURE deprecation for MSVC >= 1300. It needs testing that i can't directly do. I will try to move it to another branch later. See commit [69f488153d149a545324bc4360010ed072391531](https://github.com/arves100/retrospy-sdk/commit/69f488153d149a545324bc4360010ed072391531) and [25cb19f3bb4d890ea8f7826c550a514e6b64e7eb](https://github.com/arves100/retrospy-sdk/commit/25cb19f3bb4d890ea8f7826c550a514e6b64e7eb).

