# palabrita
## A Wordle clone for an undergrad assignment for EFB1023 at Universiti Teknologi PETRONAS.

Developed by Zech [(Catridgeevantrav)](https://github.com/Catridgeevantrav) and Ander © 2022
for EFB1023 Structured Programming and Interfacing (Sep 2022) group project.

Click to watch the video below⬇️
[![Watch the gameplay](https://img.youtube.com/vi/ZWK8WeGH8AU/maxresdefault.jpg)](https://www.youtube.com/watch?v=ZWK8WeGH8AU)

Palabrita is released under the GNU General Public License Version 3.

### Disclaimer
Some of the comments in the source code are misleading because they were outdated.
Any comments claiming that X does not work should be ignored.

Known dependencies:
- libX11-devel.x86_64
- glibc.x86_64
- glibc-devel.x86_64
- libc6

All sounds used are either in the public domain, or under CC BY 3.0 or CC BY 4.0 license.
The gfx library by Douglas Thain is licensed under CC BY 4.0.
miniaudio is licensed under MIT No Attribution license. Though attribution is not necessary, this library was written by Mark Atwood.

To run the precompiled executable, run ```chmod 755 palabrita``` to make it executable. It might not run due to missing dependencies.

To compile, open terminal in the same directory and run ```make```.
Not sure if it will compile, since there might be missing dependencies.

Using ```-O2``` optimization in gcc seems to make it run slower. By default the game
will compile with no compiler optimizations on. All warnings are suppressed by default.

- Deleted the one line in ```YDrawKeyboard()``` that calls ```YSetKeyboardDimensions()```. Turns out calling ```YSetKeyboardDimensions()``` many times lags the game considerably, which is why it lags with every
click of the enter button.
- Added some more comments for clarification.
