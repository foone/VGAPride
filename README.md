# VGAPride
 An MS-DOS application for showing Pride Flags

Usage: ```VGAPRIDE <FLAGNAME>```

Type ```VGAPRIDE LIST | MORE``` to see a list of included flags

# Building

This project uses Borland Turbo C++ 3.0 and Borland Turbo Assembler 5.0. 

1. First, you need to create the EGAVGA.OBJ file. Use the BGIOBJ.EXE file in TC\BGI to compile it with ```BGIOBJ EGAVGA```
2. Copy the resulting OBJ file into the main project directory
3. switch to that directory (I used C:\VGAPRIDE)
4. Open the project with "tc vgapride.prj"
5. Select Compile->Build All from the menus to build the EXE.
6. Run UPX (I used 3.96) to compresse the EXE

# License

The code is licensed under the terms of the GPL, version 3.

It uses Jim Leonard's [lz4_8088](http://www.oldskool.org/pc/lz4_8088), which is under the the Demoscene License.  