# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/michal/Projects/clion/JiPP2/lab_03/firstLib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build

# Include any dependencies generated for this target.
include firstLibCall/CMakeFiles/firstLibCall.dir/depend.make

# Include the progress variables for this target.
include firstLibCall/CMakeFiles/firstLibCall.dir/progress.make

# Include the compile flags for this target's objects.
include firstLibCall/CMakeFiles/firstLibCall.dir/flags.make

firstLibCall/CMakeFiles/firstLibCall.dir/main.cpp.o: firstLibCall/CMakeFiles/firstLibCall.dir/flags.make
firstLibCall/CMakeFiles/firstLibCall.dir/main.cpp.o: ../firstLibCall/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object firstLibCall/CMakeFiles/firstLibCall.dir/main.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/firstLibCall && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firstLibCall.dir/main.cpp.o -c /home/michal/Projects/clion/JiPP2/lab_03/firstLib/firstLibCall/main.cpp

firstLibCall/CMakeFiles/firstLibCall.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firstLibCall.dir/main.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/firstLibCall && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/lab_03/firstLib/firstLibCall/main.cpp > CMakeFiles/firstLibCall.dir/main.cpp.i

firstLibCall/CMakeFiles/firstLibCall.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firstLibCall.dir/main.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/firstLibCall && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/lab_03/firstLib/firstLibCall/main.cpp -o CMakeFiles/firstLibCall.dir/main.cpp.s

# Object files for target firstLibCall
firstLibCall_OBJECTS = \
"CMakeFiles/firstLibCall.dir/main.cpp.o"

# External object files for target firstLibCall
firstLibCall_EXTERNAL_OBJECTS =

firstLibCall/firstLibCall: firstLibCall/CMakeFiles/firstLibCall.dir/main.cpp.o
firstLibCall/firstLibCall: firstLibCall/CMakeFiles/firstLibCall.dir/build.make
firstLibCall/firstLibCall: Library/libfirstLib.a
firstLibCall/firstLibCall: firstLibCall/CMakeFiles/firstLibCall.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable firstLibCall"
	cd /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/firstLibCall && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/firstLibCall.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
firstLibCall/CMakeFiles/firstLibCall.dir/build: firstLibCall/firstLibCall

.PHONY : firstLibCall/CMakeFiles/firstLibCall.dir/build

firstLibCall/CMakeFiles/firstLibCall.dir/clean:
	cd /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/firstLibCall && $(CMAKE_COMMAND) -P CMakeFiles/firstLibCall.dir/cmake_clean.cmake
.PHONY : firstLibCall/CMakeFiles/firstLibCall.dir/clean

firstLibCall/CMakeFiles/firstLibCall.dir/depend:
	cd /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/clion/JiPP2/lab_03/firstLib /home/michal/Projects/clion/JiPP2/lab_03/firstLib/firstLibCall /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/firstLibCall /home/michal/Projects/clion/JiPP2/lab_03/firstLib/build/firstLibCall/CMakeFiles/firstLibCall.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : firstLibCall/CMakeFiles/firstLibCall.dir/depend

