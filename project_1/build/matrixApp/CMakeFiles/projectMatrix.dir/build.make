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
CMAKE_SOURCE_DIR = /home/michal/Projects/clion/JiPP2/project_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michal/Projects/clion/JiPP2/project_1/build

# Include any dependencies generated for this target.
include matrixApp/CMakeFiles/projectMatrix.dir/depend.make

# Include the progress variables for this target.
include matrixApp/CMakeFiles/projectMatrix.dir/progress.make

# Include the compile flags for this target's objects.
include matrixApp/CMakeFiles/projectMatrix.dir/flags.make

matrixApp/CMakeFiles/projectMatrix.dir/main.cpp.o: matrixApp/CMakeFiles/projectMatrix.dir/flags.make
matrixApp/CMakeFiles/projectMatrix.dir/main.cpp.o: ../matrixApp/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/project_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object matrixApp/CMakeFiles/projectMatrix.dir/main.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/project_1/build/matrixApp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/projectMatrix.dir/main.cpp.o -c /home/michal/Projects/clion/JiPP2/project_1/matrixApp/main.cpp

matrixApp/CMakeFiles/projectMatrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projectMatrix.dir/main.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/project_1/build/matrixApp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/project_1/matrixApp/main.cpp > CMakeFiles/projectMatrix.dir/main.cpp.i

matrixApp/CMakeFiles/projectMatrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projectMatrix.dir/main.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/project_1/build/matrixApp && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/project_1/matrixApp/main.cpp -o CMakeFiles/projectMatrix.dir/main.cpp.s

# Object files for target projectMatrix
projectMatrix_OBJECTS = \
"CMakeFiles/projectMatrix.dir/main.cpp.o"

# External object files for target projectMatrix
projectMatrix_EXTERNAL_OBJECTS =

matrixApp/projectMatrix: matrixApp/CMakeFiles/projectMatrix.dir/main.cpp.o
matrixApp/projectMatrix: matrixApp/CMakeFiles/projectMatrix.dir/build.make
matrixApp/projectMatrix: matrixLib/libmatrixLib.a
matrixApp/projectMatrix: matrixApp/CMakeFiles/projectMatrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michal/Projects/clion/JiPP2/project_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable projectMatrix"
	cd /home/michal/Projects/clion/JiPP2/project_1/build/matrixApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/projectMatrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
matrixApp/CMakeFiles/projectMatrix.dir/build: matrixApp/projectMatrix

.PHONY : matrixApp/CMakeFiles/projectMatrix.dir/build

matrixApp/CMakeFiles/projectMatrix.dir/clean:
	cd /home/michal/Projects/clion/JiPP2/project_1/build/matrixApp && $(CMAKE_COMMAND) -P CMakeFiles/projectMatrix.dir/cmake_clean.cmake
.PHONY : matrixApp/CMakeFiles/projectMatrix.dir/clean

matrixApp/CMakeFiles/projectMatrix.dir/depend:
	cd /home/michal/Projects/clion/JiPP2/project_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/clion/JiPP2/project_1 /home/michal/Projects/clion/JiPP2/project_1/matrixApp /home/michal/Projects/clion/JiPP2/project_1/build /home/michal/Projects/clion/JiPP2/project_1/build/matrixApp /home/michal/Projects/clion/JiPP2/project_1/build/matrixApp/CMakeFiles/projectMatrix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : matrixApp/CMakeFiles/projectMatrix.dir/depend
