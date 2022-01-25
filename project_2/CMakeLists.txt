cmake_minimum_required(VERSION 3.16)

project(calendarApp)
include_directories(include)

add_executable(
        calendarApp
        src/main.cpp
        src/Date.cpp
        src/Calendar.cpp
        src/Day.cpp
        src/Note.cpp
        src/TextNote.cpp
        src/ListNote.cpp
        )
