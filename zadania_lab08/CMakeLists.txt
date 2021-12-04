cmake_minimum_required(VERSION 3.16)

project(homework_lab08)
include_directories(include)

add_executable(homework_lab08
        src/main.cpp
        src/Note.cpp
        src/TextNote.cpp
        src/ListNote.cpp
        src/NoteDirector.cpp
)