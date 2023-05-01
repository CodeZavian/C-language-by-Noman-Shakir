@echo off
color 57
echo HEY,do u love me(only answer in yes or no)
set /p love=
if %love%==yes goto love
if %love%==no goto hate
:love
echo I love uhh to...
echo Meet uhh soon:)
pause
exit
:hate
echo But i love uhh ... 
echo you are hacked your all data will be transfered
echo Your PC will crash in 10 seconds
timeout 10
shutdown -s-t 100

note:10 and 20 written here indicates no.of seconds...
you can change them to any value you want...
now save the file as love.bat
and tell your love to execute it...