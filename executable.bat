@ECHO off

ECHO.


G++ -std=c++11 *.cpp *.cxx -o main

IF %errorlevel% == 0 GOTO continue
IF %errorlevel% == 1 GOTO exit

:continue
	main.exe