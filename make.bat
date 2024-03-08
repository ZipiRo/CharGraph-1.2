@echo off
set "dir=source"
set "code=main.cpp"
set "name=CharGraph++"

g++ %code% %dir%\CharGraph++.a -o %name%
start cmd /k .\%name%