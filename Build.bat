@echo off
rem Set the path to your compiler (assuming GCC or G++)
set COMPILER=g++

rem Set the name/path of your library file (change this to your library file name)
set LIBRARY_FILE=C:\Users\ionut\Documents\C++\CharGraph++\SourceCode\CharGraph++.a

rem Check if a file was dragged and dropped onto the script
if "%~1"=="" (
    echo Drag and drop a C/C++ source file onto this script to compile.
    pause
    exit /b
)

rem Get the full path of the dropped file
set SOURCE_FILE=%~f1

rem Extract the filename without extension
for %%I in ("%SOURCE_FILE%") do set SOURCE_NAME=%%~nI

rem Set the name of your output executable based on the source filename
set OUTPUT_FILE=%SOURCE_NAME%.exe

rem Compile the source file with the library
"%COMPILER%" -o "%OUTPUT_FILE%" "%SOURCE_FILE%" "%LIBRARY_FILE%"

rem Check if compilation was successful
if %ERRORLEVEL% neq 0 (
    echo Compilation failed
    pause
) else (
    echo Compilation successful
)