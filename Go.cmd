@echo off

if .%USERDOMAIN% == .LAPTOP-HKU88AF2 goto :savasPC
Rem MIF kompiuteris
path C:\PROGRA~2\Dev-Cpp\MinGW64\bin\;%path%
mingw32-make.exe
goto :toliau

:savasPC
mingw32-make

:toliau
Queen.exe duomenys.txt > rez.txt
type rez.txt