# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/build

# Include any dependencies generated for this target.
include CMakeFiles/IWannaMakeATree.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/IWannaMakeATree.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/IWannaMakeATree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IWannaMakeATree.dir/flags.make

CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o: CMakeFiles/IWannaMakeATree.dir/flags.make
CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o: CMakeFiles/IWannaMakeATree.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o -MF CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o.d -o CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o -c /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/src/main.cpp

CMakeFiles/IWannaMakeATree.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IWannaMakeATree.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/src/main.cpp > CMakeFiles/IWannaMakeATree.dir/src/main.cpp.i

CMakeFiles/IWannaMakeATree.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IWannaMakeATree.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/src/main.cpp -o CMakeFiles/IWannaMakeATree.dir/src/main.cpp.s

# Object files for target IWannaMakeATree
IWannaMakeATree_OBJECTS = \
"CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o"

# External object files for target IWannaMakeATree
IWannaMakeATree_EXTERNAL_OBJECTS =

IWannaMakeATree: CMakeFiles/IWannaMakeATree.dir/src/main.cpp.o
IWannaMakeATree: CMakeFiles/IWannaMakeATree.dir/build.make
IWannaMakeATree: CMakeFiles/IWannaMakeATree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IWannaMakeATree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IWannaMakeATree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IWannaMakeATree.dir/build: IWannaMakeATree
.PHONY : CMakeFiles/IWannaMakeATree.dir/build

CMakeFiles/IWannaMakeATree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/IWannaMakeATree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/IWannaMakeATree.dir/clean

CMakeFiles/IWannaMakeATree.dir/depend:
	cd /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/build /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/build /Users/avaidy15/AllCPPTestProjects/IWannaMakeATree/build/CMakeFiles/IWannaMakeATree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IWannaMakeATree.dir/depend

