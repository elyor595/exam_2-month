@ECHO OFF
@color 3F
title Sergei Strelec
@echo Выполняется установка Microsoft Visual C++
cd /d "%~dp0" && ( if exist "%temp%\getadmin.vbs" del "%temp%\getadmin.vbs" ) && fsutil dirty query %systemdrive% 1>nul 2>nul || (  echo Set UAC = CreateObject^("Shell.Application"^) : UAC.ShellExecute "cmd.exe", "/k cd ""%~sdp0"" && %~s0 %params%", "", "runas", 1 >> "%temp%\getadmin.vbs" && "%temp%\getadmin.vbs" && exit /B )
start /w vcredist2005_x64.exe /q
start /w vcredist2005_x86.exe /q
start /w vcredist2008_x64.exe /qb
start /w vcredist2008_x86.exe /qb
start /w vcredist2010_x64.exe /passive /norestart
start /w vcredist2010_x86.exe /passive /norestart
start /w vcredist2012_x64.exe /passive /norestart
start /w vcredist2012_x86.exe /passive /norestart
start /w vcredist2013_x64.exe /passive /norestart
start /w vcredist2013_x86.exe /passive /norestart
start /w vcredist_2015_2022_x64.exe /passive /norestart
start /w vcredist_2015_2022_x86.exe /passive /norestart
exit
