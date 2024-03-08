@echo off
set "dir=source" :: The path where your source code is
set "toCompile=c_engine.cpp" :: The code you want to compile
set "buildName=c_engine" :: The final name of the program

g++ %toCompile% %dir%\Elipse.o %dir%\FilledElipse.o %dir%\FilledRectangle.o %dir%\FilledSquere.o %dir%\Input.o %dir%\Line.o %dir%\Point.o %dir%\Poligon.o %dir%\Rectangle.o %dir%\Scene.o %dir%\Squere.o %dir%\Text.o -o %buildName%