# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/b_val4/Study/OOP/HW/class time hw7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/b_val4/Study/OOP/HW/class time hw7/build"

# Include any dependencies generated for this target.
include CMakeFiles/TimeProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TimeProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TimeProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TimeProject.dir/flags.make

CMakeFiles/TimeProject.dir/main.cpp.o: CMakeFiles/TimeProject.dir/flags.make
CMakeFiles/TimeProject.dir/main.cpp.o: ../main.cpp
CMakeFiles/TimeProject.dir/main.cpp.o: CMakeFiles/TimeProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/b_val4/Study/OOP/HW/class time hw7/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TimeProject.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TimeProject.dir/main.cpp.o -MF CMakeFiles/TimeProject.dir/main.cpp.o.d -o CMakeFiles/TimeProject.dir/main.cpp.o -c "/home/b_val4/Study/OOP/HW/class time hw7/main.cpp"

CMakeFiles/TimeProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TimeProject.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/b_val4/Study/OOP/HW/class time hw7/main.cpp" > CMakeFiles/TimeProject.dir/main.cpp.i

CMakeFiles/TimeProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TimeProject.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/b_val4/Study/OOP/HW/class time hw7/main.cpp" -o CMakeFiles/TimeProject.dir/main.cpp.s

# Object files for target TimeProject
TimeProject_OBJECTS = \
"CMakeFiles/TimeProject.dir/main.cpp.o"

# External object files for target TimeProject
TimeProject_EXTERNAL_OBJECTS =

TimeProject: CMakeFiles/TimeProject.dir/main.cpp.o
TimeProject: CMakeFiles/TimeProject.dir/build.make
TimeProject: libTimeLib.a
TimeProject: CMakeFiles/TimeProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/b_val4/Study/OOP/HW/class time hw7/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TimeProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TimeProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TimeProject.dir/build: TimeProject
.PHONY : CMakeFiles/TimeProject.dir/build

CMakeFiles/TimeProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TimeProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TimeProject.dir/clean

CMakeFiles/TimeProject.dir/depend:
	cd "/home/b_val4/Study/OOP/HW/class time hw7/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/b_val4/Study/OOP/HW/class time hw7" "/home/b_val4/Study/OOP/HW/class time hw7" "/home/b_val4/Study/OOP/HW/class time hw7/build" "/home/b_val4/Study/OOP/HW/class time hw7/build" "/home/b_val4/Study/OOP/HW/class time hw7/build/CMakeFiles/TimeProject.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TimeProject.dir/depend

