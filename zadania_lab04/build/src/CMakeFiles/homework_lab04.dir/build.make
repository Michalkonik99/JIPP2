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
CMAKE_SOURCE_DIR = /home/michal/Projects/clion/JiPP2/zadania_lab04

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michal/Projects/clion/JiPP2/zadania_lab04/build

# Include any dependencies generated for this target.
include src/CMakeFiles/homework_lab04.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/homework_lab04.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/homework_lab04.dir/flags.make

src/CMakeFiles/homework_lab04.dir/main.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/homework_lab04.dir/main.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/main.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/main.cpp

src/CMakeFiles/homework_lab04.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/main.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/main.cpp > CMakeFiles/homework_lab04.dir/main.cpp.i

src/CMakeFiles/homework_lab04.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/main.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/main.cpp -o CMakeFiles/homework_lab04.dir/main.cpp.s

src/CMakeFiles/homework_lab04.dir/Cuboid.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/Cuboid.cpp.o: ../src/Cuboid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/homework_lab04.dir/Cuboid.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/Cuboid.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Cuboid.cpp

src/CMakeFiles/homework_lab04.dir/Cuboid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/Cuboid.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Cuboid.cpp > CMakeFiles/homework_lab04.dir/Cuboid.cpp.i

src/CMakeFiles/homework_lab04.dir/Cuboid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/Cuboid.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Cuboid.cpp -o CMakeFiles/homework_lab04.dir/Cuboid.cpp.s

src/CMakeFiles/homework_lab04.dir/Ball.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/Ball.cpp.o: ../src/Ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/homework_lab04.dir/Ball.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/Ball.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Ball.cpp

src/CMakeFiles/homework_lab04.dir/Ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/Ball.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Ball.cpp > CMakeFiles/homework_lab04.dir/Ball.cpp.i

src/CMakeFiles/homework_lab04.dir/Ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/Ball.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Ball.cpp -o CMakeFiles/homework_lab04.dir/Ball.cpp.s

src/CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.o: ../src/QuadraticFunction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/QuadraticFunction.cpp

src/CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/QuadraticFunction.cpp > CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.i

src/CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/QuadraticFunction.cpp -o CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.s

src/CMakeFiles/homework_lab04.dir/Student.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/Student.cpp.o: ../src/Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/homework_lab04.dir/Student.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/Student.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Student.cpp

src/CMakeFiles/homework_lab04.dir/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/Student.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Student.cpp > CMakeFiles/homework_lab04.dir/Student.cpp.i

src/CMakeFiles/homework_lab04.dir/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/Student.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Student.cpp -o CMakeFiles/homework_lab04.dir/Student.cpp.s

src/CMakeFiles/homework_lab04.dir/Point.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/Point.cpp.o: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/homework_lab04.dir/Point.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/Point.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Point.cpp

src/CMakeFiles/homework_lab04.dir/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/Point.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Point.cpp > CMakeFiles/homework_lab04.dir/Point.cpp.i

src/CMakeFiles/homework_lab04.dir/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/Point.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Point.cpp -o CMakeFiles/homework_lab04.dir/Point.cpp.s

src/CMakeFiles/homework_lab04.dir/Figure.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/Figure.cpp.o: ../src/Figure.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/homework_lab04.dir/Figure.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/Figure.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Figure.cpp

src/CMakeFiles/homework_lab04.dir/Figure.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/Figure.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Figure.cpp > CMakeFiles/homework_lab04.dir/Figure.cpp.i

src/CMakeFiles/homework_lab04.dir/Figure.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/Figure.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/Figure.cpp -o CMakeFiles/homework_lab04.dir/Figure.cpp.s

src/CMakeFiles/homework_lab04.dir/TestMemory.cpp.o: src/CMakeFiles/homework_lab04.dir/flags.make
src/CMakeFiles/homework_lab04.dir/TestMemory.cpp.o: ../src/TestMemory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/homework_lab04.dir/TestMemory.cpp.o"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework_lab04.dir/TestMemory.cpp.o -c /home/michal/Projects/clion/JiPP2/zadania_lab04/src/TestMemory.cpp

src/CMakeFiles/homework_lab04.dir/TestMemory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework_lab04.dir/TestMemory.cpp.i"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/Projects/clion/JiPP2/zadania_lab04/src/TestMemory.cpp > CMakeFiles/homework_lab04.dir/TestMemory.cpp.i

src/CMakeFiles/homework_lab04.dir/TestMemory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework_lab04.dir/TestMemory.cpp.s"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/Projects/clion/JiPP2/zadania_lab04/src/TestMemory.cpp -o CMakeFiles/homework_lab04.dir/TestMemory.cpp.s

# Object files for target homework_lab04
homework_lab04_OBJECTS = \
"CMakeFiles/homework_lab04.dir/main.cpp.o" \
"CMakeFiles/homework_lab04.dir/Cuboid.cpp.o" \
"CMakeFiles/homework_lab04.dir/Ball.cpp.o" \
"CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.o" \
"CMakeFiles/homework_lab04.dir/Student.cpp.o" \
"CMakeFiles/homework_lab04.dir/Point.cpp.o" \
"CMakeFiles/homework_lab04.dir/Figure.cpp.o" \
"CMakeFiles/homework_lab04.dir/TestMemory.cpp.o"

# External object files for target homework_lab04
homework_lab04_EXTERNAL_OBJECTS =

src/homework_lab04: src/CMakeFiles/homework_lab04.dir/main.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/Cuboid.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/Ball.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/QuadraticFunction.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/Student.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/Point.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/Figure.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/TestMemory.cpp.o
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/build.make
src/homework_lab04: lib/libzadanie01_lib.a
src/homework_lab04: src/CMakeFiles/homework_lab04.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/michal/Projects/clion/JiPP2/zadania_lab04/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable homework_lab04"
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework_lab04.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/homework_lab04.dir/build: src/homework_lab04

.PHONY : src/CMakeFiles/homework_lab04.dir/build

src/CMakeFiles/homework_lab04.dir/clean:
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src && $(CMAKE_COMMAND) -P CMakeFiles/homework_lab04.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/homework_lab04.dir/clean

src/CMakeFiles/homework_lab04.dir/depend:
	cd /home/michal/Projects/clion/JiPP2/zadania_lab04/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/Projects/clion/JiPP2/zadania_lab04 /home/michal/Projects/clion/JiPP2/zadania_lab04/src /home/michal/Projects/clion/JiPP2/zadania_lab04/build /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src /home/michal/Projects/clion/JiPP2/zadania_lab04/build/src/CMakeFiles/homework_lab04.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/homework_lab04.dir/depend

