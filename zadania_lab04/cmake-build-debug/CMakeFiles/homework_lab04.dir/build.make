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
CMAKE_SOURCE_DIR = /home/michal/Projects/clion/JiPP2/zadania_lab04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/homework_lab04.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/homework_lab04.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/homework_lab04.dir/flags.make

CMakeFiles/homework_lab04.dir/src/main.cpp.o: CMakeFiles/homework_lab04.dir/flags.make
CMakeFiles/homework_lab04.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/homework_lab04.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/src/main.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/main.cpp

CMakeFiles/homework_lab04.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/main.cpp > CMakeFiles/homework_lab04.dir/src/main.cpp.i

CMakeFiles/homework_lab04.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/main.cpp -o CMakeFiles/homework_lab04.dir/src/main.cpp.s

CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.o: CMakeFiles/homework_lab04.dir/flags.make
CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.o: ../lib/zadanie_01.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/lib/zadanie_01.cpp

CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/lib/zadanie_01.cpp > CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.i

CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/lib/zadanie_01.cpp -o CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.s

# Object files for target homework_lab04
homework_lab04_OBJECTS = \
"CMakeFiles/homework_lab04.dir/src/main.cpp.o" \
"CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.o"

# External object files for target homework_lab04
homework_lab04_EXTERNAL_OBJECTS =

homework_lab04: CMakeFiles/homework_lab04.dir/src/main.cpp.o
homework_lab04: CMakeFiles/homework_lab04.dir/lib/zadanie_01.cpp.o
homework_lab04: CMakeFiles/homework_lab04.dir/build.make
homework_lab04: CMakeFiles/homework_lab04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable homework_lab04"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework_lab04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/homework_lab04.dir/build: homework_lab04
.PHONY : CMakeFiles/homework_lab04.dir/build

CMakeFiles/homework_lab04.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/homework_lab04.dir/cmake_clean.cmake
.PHONY : CMakeFiles/homework_lab04.dir/clean

CMakeFiles/homework_lab04.dir/depend:
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/clion/JiPP2/zadania_lab04 /home/michal/Projects/clion/JiPP2/zadania_lab04 /home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug /home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug /home/michal/Projects/clion/JiPP2/zadania_lab04/cmake-build-debug/CMakeFiles/homework_lab04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/homework_lab04.dir/depend

