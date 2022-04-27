@echo off
 setlocal EnableDelayedExpansion
 set PATH=%PATH%;D:\CodeBlocks\MinGW\bin
 doskey make=mingw32-make.exe $*
 cmd.exe /k