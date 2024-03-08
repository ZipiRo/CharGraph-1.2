@echo off
set "dir=source" :: the folder where the source code is (headers and library)
set "code=main.cpp" :: the code you want to compile
set "name=build" :: the final name of the program

g++ %code% %dir%\CharGraph++.a -o %name%
start cmd /k .\%name%