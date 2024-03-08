@echo off
set "dir=source"
set "code=main.cpp"
set "name=c_engine"

g++ %code% %dir%\c_engine.a -o %name%