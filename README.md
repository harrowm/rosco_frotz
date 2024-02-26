# rosco_frotz

An interpreter for all Infocom and other Z-machine games. This is a modified version of the code for the rosco_m68k SBC.  The original project can be found here:

https://gitlab.com/DavidGriffith/frotz

## Installation
Clone the repository and compile using 'make'.  Yes, it should be that simple ... copy the rosco_frotz.bin and your game file (see below) to your SD Card.  The game file must be called 'game.z3'.  The game.z3 file included in this repository is for Anchorhead (see below for details).

## Issues / limitations
The code had been tested with Planetfall and Anchorhead.  It needs some more testing ..

The code assumes a 'raw' terminal - it crudely sorts out \n, \r and \b.  See dump_input.c line 115 onwards.

Game save, load and restore aren't yet working. The save/load filename probably needs a '/' appended to the filename, e.g. '/game.qzl' rather than 'game.qzl', see dumb_init.c line 172 onwards.

Things that involved timing have been commented out .. it should be very possible to fix these using the countdown timer available:
- Timed input is commented out. I'm not sure of game that uses this feature.
- A random game seed isn't set from the clock.

No command line options.  The rosco doesnt have a real shell, so there is no command line.  A default command line is hardcoded in main.c at line 167.  This explains why the game file is '/game.z3' by default ...

## Copyright of game files
The original game files are owned by Microsoft (Infocomm->Activision->Microsoft) with the exception of Shogun and Hitchhikers Guide to the Galaxy which have reverted to the estates of the original book authors.  It is possible to legally buy some of the games (e.g. https://www.gog.com/en/game/the_zork_anthology). 

A great source of new interactive fiction can be found here: https://www.ifarchive.org/indexes/if-archive/games/zcode/

The game file provided in this repository is for Anchorhead, which you can read about here: https://ifdb.org/viewgame?id=op0uw1gn1tjqmjt7.  Anchorhead is free to play.

