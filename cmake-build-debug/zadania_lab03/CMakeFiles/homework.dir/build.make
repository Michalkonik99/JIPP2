# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/michal/Projects/clion/JiPP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michal/Projects/clion/JiPP2/cmake-build-debug

# Include any dependencies generated for this target.
include zadania_lab03/CMakeFiles/homework.dir/depend.make
# Include the progress variables for this target.
include zadania_lab03/CMakeFiles/homework.dir/progress.make

# Include the compile flags for this target's objects.
include zadania_lab03/CMakeFiles/homework.dir/flags.make

zadania_lab03/CMakeFiles/homework.dir/src/main.cpp.o: zadania_lab03/CMakeFiles/homework.dir/flags.make
zadania_lab03/CMakeFiles/homework.dir/src/main.cpp.o: ../zadania_lab03/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object zadania_lab03/CMakeFiles/homework.dir/src/main.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework.dir/src/main.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab03/src/main.cpp

zadania_lab03/CMakeFiles/homework.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework.dir/src/main.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab03/src/main.cpp > CMakeFiles/homework.dir/src/main.cpp.i

zadania_lab03/CMakeFiles/homework.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework.dir/src/main.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab03/src/main.cpp -o CMakeFiles/homework.dir/src/main.cpp.s

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_1.cpp.o: zadania_lab03/CMakeFiles/homework.dir/flags.make
zadania_lab03/CMakeFiles/homework.dir/src/zadanie_1.cpp.o: ../zadania_lab03/src/zadanie_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object zadania_lab03/CMakeFiles/homework.dir/src/zadanie_1.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework.dir/src/zadanie_1.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_1.cpp

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework.dir/src/zadanie_1.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_1.cpp > CMakeFiles/homework.dir/src/zadanie_1.cpp.i

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework.dir/src/zadanie_1.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_1.cpp -o CMakeFiles/homework.dir/src/zadanie_1.cpp.s

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_2.cpp.o: zadania_lab03/CMakeFiles/homework.dir/flags.make
zadania_lab03/CMakeFiles/homework.dir/src/zadanie_2.cpp.o: ../zadania_lab03/src/zadanie_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object zadania_lab03/CMakeFiles/homework.dir/src/zadanie_2.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework.dir/src/zadanie_2.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_2.cpp

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework.dir/src/zadanie_2.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_2.cpp > CMakeFiles/homework.dir/src/zadanie_2.cpp.i

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework.dir/src/zadanie_2.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_2.cpp -o CMakeFiles/homework.dir/src/zadanie_2.cpp.s

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_3.cpp.o: zadania_lab03/CMakeFiles/homework.dir/flags.make
zadania_lab03/CMakeFiles/homework.dir/src/zadanie_3.cpp.o: ../zadania_lab03/src/zadanie_3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object zadania_lab03/CMakeFiles/homework.dir/src/zadanie_3.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework.dir/src/zadanie_3.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_3.cpp

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework.dir/src/zadanie_3.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_3.cpp > CMakeFiles/homework.dir/src/zadanie_3.cpp.i

zadania_lab03/CMakeFiles/homework.dir/src/zadanie_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework.dir/src/zadanie_3.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab03/src/zadanie_3.cpp -o CMakeFiles/homework.dir/src/zadanie_3.cpp.s

# Object files for target homework
homework_OBJECTS = \
"CMakeFiles/homework.dir/src/main.cpp.o" \
"CMakeFiles/homework.dir/src/zadanie_1.cpp.o" \
"CMakeFiles/homework.dir/src/zadanie_2.cpp.o" \
"CMakeFiles/homework.dir/src/zadanie_3.cpp.o"

# External object files for target homework
homework_EXTERNAL_OBJECTS =

zadania_lab03/homework: zadania_lab03/CMakeFiles/homework.dir/src/main.cpp.o
zadania_lab03/homework: zadania_lab03/CMakeFiles/homework.dir/src/zadanie_1.cpp.o
zadania_lab03/homework: zadania_lab03/CMakeFiles/homework.dir/src/zadanie_2.cpp.o
zadania_lab03/homework: zadania_lab03/CMakeFiles/homework.dir/src/zadanie_3.cpp.o
zadania_lab03/homework: zadania_lab03/CMakeFiles/homework.dir/build.make
zadania_lab03/homework: zadania_lab03/CMakeFiles/homework.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michal/Projects/clion/JiPP2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable homework"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
zadania_lab03/CMakeFiles/homework.dir/build: zadania_lab03/homework
.PHONY : zadania_lab03/CMakeFiles/homework.dir/build

zadania_lab03/CMakeFiles/homework.dir/clean:
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 && $(CMAKE_COMMAND) -P CMakeFiles/homework.dir/cmake_clean.cmake
.PHONY : zadania_lab03/CMakeFiles/homework.dir/clean

zadania_lab03/CMakeFiles/homework.dir/depend:
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/clion/JiPP2 /home/michal/Projects/clion/JiPP2/zadania_lab03 /home/michal/Projects/clion/JiPP2/cmake-build-debug /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03 /home/michal/Projects/clion/JiPP2/cmake-build-debug/zadania_lab03/CMakeFiles/homework.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : zadania_lab03/CMakeFiles/homework.dir/depend

