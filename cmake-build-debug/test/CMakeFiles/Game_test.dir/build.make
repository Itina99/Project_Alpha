# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/waris/CLionProjects/Project_Alpha

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/waris/CLionProjects/Project_Alpha/cmake-build-debug

# Include any dependencies generated for this target.
include test/CMakeFiles/Game_test.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/Game_test.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/Game_test.dir/flags.make

test/CMakeFiles/Game_test.dir/RunAllTest.cpp.o: test/CMakeFiles/Game_test.dir/flags.make
test/CMakeFiles/Game_test.dir/RunAllTest.cpp.o: ../test/RunAllTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/waris/CLionProjects/Project_Alpha/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/Game_test.dir/RunAllTest.cpp.o"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game_test.dir/RunAllTest.cpp.o -c /home/waris/CLionProjects/Project_Alpha/test/RunAllTest.cpp

test/CMakeFiles/Game_test.dir/RunAllTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game_test.dir/RunAllTest.cpp.i"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/waris/CLionProjects/Project_Alpha/test/RunAllTest.cpp > CMakeFiles/Game_test.dir/RunAllTest.cpp.i

test/CMakeFiles/Game_test.dir/RunAllTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game_test.dir/RunAllTest.cpp.s"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/waris/CLionProjects/Project_Alpha/test/RunAllTest.cpp -o CMakeFiles/Game_test.dir/RunAllTest.cpp.s

test/CMakeFiles/Game_test.dir/CollisionTest.cpp.o: test/CMakeFiles/Game_test.dir/flags.make
test/CMakeFiles/Game_test.dir/CollisionTest.cpp.o: ../test/CollisionTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/waris/CLionProjects/Project_Alpha/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/Game_test.dir/CollisionTest.cpp.o"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game_test.dir/CollisionTest.cpp.o -c /home/waris/CLionProjects/Project_Alpha/test/CollisionTest.cpp

test/CMakeFiles/Game_test.dir/CollisionTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game_test.dir/CollisionTest.cpp.i"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/waris/CLionProjects/Project_Alpha/test/CollisionTest.cpp > CMakeFiles/Game_test.dir/CollisionTest.cpp.i

test/CMakeFiles/Game_test.dir/CollisionTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game_test.dir/CollisionTest.cpp.s"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/waris/CLionProjects/Project_Alpha/test/CollisionTest.cpp -o CMakeFiles/Game_test.dir/CollisionTest.cpp.s

test/CMakeFiles/Game_test.dir/HeroTest.cpp.o: test/CMakeFiles/Game_test.dir/flags.make
test/CMakeFiles/Game_test.dir/HeroTest.cpp.o: ../test/HeroTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/waris/CLionProjects/Project_Alpha/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object test/CMakeFiles/Game_test.dir/HeroTest.cpp.o"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game_test.dir/HeroTest.cpp.o -c /home/waris/CLionProjects/Project_Alpha/test/HeroTest.cpp

test/CMakeFiles/Game_test.dir/HeroTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game_test.dir/HeroTest.cpp.i"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/waris/CLionProjects/Project_Alpha/test/HeroTest.cpp > CMakeFiles/Game_test.dir/HeroTest.cpp.i

test/CMakeFiles/Game_test.dir/HeroTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game_test.dir/HeroTest.cpp.s"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/waris/CLionProjects/Project_Alpha/test/HeroTest.cpp -o CMakeFiles/Game_test.dir/HeroTest.cpp.s

test/CMakeFiles/Game_test.dir/EnemyTest.cpp.o: test/CMakeFiles/Game_test.dir/flags.make
test/CMakeFiles/Game_test.dir/EnemyTest.cpp.o: ../test/EnemyTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/waris/CLionProjects/Project_Alpha/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object test/CMakeFiles/Game_test.dir/EnemyTest.cpp.o"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Game_test.dir/EnemyTest.cpp.o -c /home/waris/CLionProjects/Project_Alpha/test/EnemyTest.cpp

test/CMakeFiles/Game_test.dir/EnemyTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game_test.dir/EnemyTest.cpp.i"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/waris/CLionProjects/Project_Alpha/test/EnemyTest.cpp > CMakeFiles/Game_test.dir/EnemyTest.cpp.i

test/CMakeFiles/Game_test.dir/EnemyTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game_test.dir/EnemyTest.cpp.s"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/waris/CLionProjects/Project_Alpha/test/EnemyTest.cpp -o CMakeFiles/Game_test.dir/EnemyTest.cpp.s

# Object files for target Game_test
Game_test_OBJECTS = \
"CMakeFiles/Game_test.dir/RunAllTest.cpp.o" \
"CMakeFiles/Game_test.dir/CollisionTest.cpp.o" \
"CMakeFiles/Game_test.dir/HeroTest.cpp.o" \
"CMakeFiles/Game_test.dir/EnemyTest.cpp.o"

# External object files for target Game_test
Game_test_EXTERNAL_OBJECTS =

test/Game_test: test/CMakeFiles/Game_test.dir/RunAllTest.cpp.o
test/Game_test: test/CMakeFiles/Game_test.dir/CollisionTest.cpp.o
test/Game_test: test/CMakeFiles/Game_test.dir/HeroTest.cpp.o
test/Game_test: test/CMakeFiles/Game_test.dir/EnemyTest.cpp.o
test/Game_test: test/CMakeFiles/Game_test.dir/build.make
test/Game_test: lib/libgtestd.a
test/Game_test: lib/libgtest_maind.a
test/Game_test: libcore.a
test/Game_test: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
test/Game_test: /usr/lib/x86_64-linux-gnu/libsfml-audio.so.2.5.1
test/Game_test: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
test/Game_test: lib/libgtestd.a
test/Game_test: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
test/Game_test: test/CMakeFiles/Game_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/waris/CLionProjects/Project_Alpha/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Game_test"
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Game_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/Game_test.dir/build: test/Game_test

.PHONY : test/CMakeFiles/Game_test.dir/build

test/CMakeFiles/Game_test.dir/clean:
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/Game_test.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/Game_test.dir/clean

test/CMakeFiles/Game_test.dir/depend:
	cd /home/waris/CLionProjects/Project_Alpha/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/waris/CLionProjects/Project_Alpha /home/waris/CLionProjects/Project_Alpha/test /home/waris/CLionProjects/Project_Alpha/cmake-build-debug /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test /home/waris/CLionProjects/Project_Alpha/cmake-build-debug/test/CMakeFiles/Game_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/Game_test.dir/depend

