@echo off
set "dir=source" :: The path where your source code is
set "toCompile=c_engine.cpp" :: The code you want to compile
set "buildName=c_engine" :: The final name of the program

g++ %toCompile% %dir%\c_engine.a -o %buildName%