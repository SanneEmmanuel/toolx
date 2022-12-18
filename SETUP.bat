@echo off
title Sanne Karibo toolx installer
echo Hang on while we install your program
cd files
copy toolx.exe C:\Users\PC\AppData\Local\Microsoft\WindowsApps\toolx.exe
choice /c yn /m "Do you want to install previous apps, type 'Y' for yes, 'N' for no"
if %errorlevel% == 2 exit
echo                                          .  
echo                                          .
echo ...*******************************************************************************...
.bat
pause