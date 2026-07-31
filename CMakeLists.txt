cmake_minimum_required(VERSION 3.26)

set(CMAKE_PS_COMMAND "powershell.exe" CACHE STRING "PowerShell command")

project(Spectra VERSION 1.0 LANGUAGES CXX)

add_subdirectory(src)

