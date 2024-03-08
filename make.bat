@echo off
set "dir=source" :: the path to the directory where the source code is (headers and library)
set "code=template.cpp" :: the code you want to compile
set "name=build" :: the final name of the program

g++ %code% %dir%\CharGraph++.a -o %name%
.\%name%