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
include project_1/matrixApp/CMakeFiles/matrixApp.dir/depend.make
# Include the progress variables for this target.
include project_1/matrixApp/CMakeFiles/matrixApp.dir/progress.make

# Include the compile flags for this target's objects.
include project_1/matrixApp/CMakeFiles/matrixApp.dir/flags.make

project_1/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o: project_1/matrixApp/CMakeFiles/matrixApp.dir/flags.make
project_1/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o: ../project_1/matrixApp/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object project_1/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/project_1/matrixApp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrixApp.dir/main.cpp.o -c /home/michal/Projects/clion/JiPP2/project_1/matrixApp/main.cpp

project_1/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrixApp.dir/main.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/project_1/matrixApp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/project_1/matrixApp/main.cpp > CMakeFiles/matrixApp.dir/main.cpp.i

project_1/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrixApp.dir/main.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/project_1/matrixApp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/project_1/matrixApp/main.cpp -o CMakeFiles/matrixApp.dir/main.cpp.s

# Object files for target matrixApp
matrixApp_OBJECTS = \
"CMakeFiles/matrixApp.dir/main.cpp.o"

# External object files for target matrixApp
matrixApp_EXTERNAL_OBJECTS =

project_1/matrixApp/matrixApp: project_1/matrixApp/CMakeFiles/matrixApp.dir/main.cpp.o
project_1/matrixApp/matrixApp: project_1/matrixApp/CMakeFiles/matrixApp.dir/build.make
project_1/matrixApp/matrixApp: project_1/matrixLib/libmatrixLib.a
project_1/matrixApp/matrixApp: project_1/matrixApp/CMakeFiles/matrixApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michal/Projects/clion/JiPP2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable matrixApp"
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/project_1/matrixApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrixApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
project_1/matrixApp/CMakeFiles/matrixApp.dir/build: project_1/matrixApp/matrixApp
.PHONY : project_1/matrixApp/CMakeFiles/matrixApp.dir/build

project_1/matrixApp/CMakeFiles/matrixApp.dir/clean:
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug/project_1/matrixApp && $(CMAKE_COMMAND) -P CMakeFiles/matrixApp.dir/cmake_clean.cmake
.PHONY : project_1/matrixApp/CMakeFiles/matrixApp.dir/clean

project_1/matrixApp/CMakeFiles/matrixApp.dir/depend:
	cd /home/michal/Projects/clion/JiPP2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/clion/JiPP2 /home/michal/Projects/clion/JiPP2/project_1/matrixApp /home/michal/Projects/clion/JiPP2/cmake-build-debug /home/michal/Projects/clion/JiPP2/cmake-build-debug/project_1/matrixApp /home/michal/Projects/clion/JiPP2/cmake-build-debug/project_1/matrixApp/CMakeFiles/matrixApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : project_1/matrixApp/CMakeFiles/matrixApp.dir/depend

