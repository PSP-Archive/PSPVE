
    Welcome to Portable Vectrex Emulator

Original Author of VecX 

  Valavan Manohararajah

Author of the PSP port version 

  Ludovic Jacomme alias Zx-81 zx81.zx81(at)gmail.com

  Homepage: http://zx81.zx81.free.fr


1. INTRODUCTION
   ------------

  VecX emulates the Vectrex game console on systems such as Linux and Windows.

  PSP-VE is a port on PSP of one latest version of VecX.

  Special thanks to Raven's for his eboot icons (that i've modified a bit) 
  and to all PSPSDK developpers.

  This package is under GPL Copyright, read COPYING file for
  more information about it.


2. INSTALLATION
   ------------

  Unzip the zip file, and copy the content of the directory fw3.x or fw1.5
  (depending of the version of your firmware) on the psp/game, psp/game150,
  or psp/game3xx if you use custom firmware 3.xx-M33.

  It has been developped on linux for Firmware 3.91-m33 and i hope it works
  also for other firmwares (but i do support only m33 or OE firmwares)

  For any comments or questions on this version, please visit 
  http://zx81.zx81.free.fr or http://zx81.dcemu.co.uk


3. CONTROL
   ------------

3.1 - Virtual keyboard

  In the VECTREX emulator window, there are three different mapping 
  (standard, left trigger, and right Trigger mappings). 
  You can toggle between while playing inside the emulator using 
  the two PSP trigger keys.

    -------------------------------------
    PSP        VECTREX            (standard)
  
    Square     1
    Triangle   2
    Circle     3
    Cross      4
    Left       1 
    Down       2
    Right      3
    Up         4

    Analog     Joystick

    -------------------------------------
    PSP        VECTREX   (left trigger)
  
    Square     FPS  
    Triangle   LOAD Snapshot
    Circle     Swap digital / Analog
    Cross      SAVE Snapshot
    Up         Up
    Down       Down
    Left       Render mode
    Right      Render mode

    -------------------------------------
    PSP        VECTREX   (right trigger)
  
    Square     1
    Triangle   2
    Circle     3
    Cross      Auto-fire
    Up         Up
    Down       Down
    Left       Dec fire
    Right      Inc fire
  
    Analog     Joystick
    
    Press Start  + L + R   to exit and return to eloader.
    Press Select           to enter in emulator main menu.
    Press Start            open/close the On-Screen keyboard

  In the main menu

    RTrigger   Reset the emulator

    Triangle   Go Up directory
    Cross      Valid
    Circle     Valid
    Square     Go Back to the emulator window

  The On-Screen Keyboard of "Danzel" and "Jeff Chen"

    Use Analog stick to choose one of the 9 squares, and
    use Triangle, Square, Cross and Circle to choose one
    of the 4 letters of the highlighted square.

    Use LTrigger and RTrigger to see other 9 squares 
    figures.

3.2 - IR keyboard

  You can also use IR keyboard. Edit the pspirkeyb.ini file
  to specify your IR keyboard model, and modify eventually
  layout keyboard files in the keymap directory.

  The following mapping is done :

  IR-keyboard   PSP

  Cursor        Digital Pad

  Tab           Start
  Ctrl-W        Start

  Escape        Select
  Ctrl-Q        Select

  Ctrl-E        Triangle
  Ctrl-X        Cross
  Ctrl-S        Square
  Ctrl-F        Circle
  Ctrl-Z        L-trigger
  Ctrl-C        R-trigger

  In the emulator window you can use the IR keyboard to
  enter letters, special characters and digits.

4. LOADING ROM FILES (.rom or .bin)

  If you want to load rom image in your emulator, you have to put 
  your rom file (with .rom or .bin file extension) on your PSP
  memory stick in the 'roms' directory. 

  Then, while inside emulator, just press SELECT to enter in the emulator 
  main menu, choose "Load Rom", and then using the file selector choose one 
  rom image  file to load in your emulator.


5. LOADING KEY MAPPING FILES

  For given games, the default keyboard mapping between PSP Keys and VECTREX keys,
  is not suitable, and the game can't be played on PSPVECTREX.

  To overcome the issue, you can write your own mapping file. Using notepad for
  example you can edit a file with the .kbd extension and put it in the kbd 
  directory.

  For the exact syntax of those mapping files, have a look on sample files already
  presents in the kbd directory (default.kbd etc ...).

  After writting such keyboard mapping file, you can load them using 
  the main menu inside the emulator.

  If the keyboard filename is the same as the rom file then when you load 
  this file, the corresponding keyboard file is automatically loaded !

  You can now use the Keyboard menu and edit, load and save your
  keyboard mapping files inside the emulator. The Save option save the .kbd
  file in the kbd directory using the "Game Name" as filename. The game name
  is displayed on the right corner in the emulator menu.

  If you have saved the state of a game, then a thumbnail image will be
  displayed in the file requester while selecting any file (roms, keyboard,
  settings) with game name, to help you to recognize that game later.
  
  You can use the virtual keyboard in the file requester menu to choose the
  first letter of the game you search (it might be useful when you have tons of
  games in the same folder)
  
6. COMPILATION
   ------------

  It has been developped under Linux using gcc with PSPSDK. 
  To rebuild the homebrew run the Makefile in the src archive.

