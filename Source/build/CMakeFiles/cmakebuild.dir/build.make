# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 4.0

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\build

# Include any dependencies generated for this target.
include CMakeFiles/cmakebuild.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cmakebuild.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cmakebuild.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmakebuild.dir/flags.make

CMakeFiles/cmakebuild.dir/codegen:
.PHONY : CMakeFiles/cmakebuild.dir/codegen

CMakeFiles/cmakebuild.dir/main.c.obj: CMakeFiles/cmakebuild.dir/flags.make
CMakeFiles/cmakebuild.dir/main.c.obj: C:/Users/duc5.le/Downloads/Study/FundamentalCProgramming/Source/main.c
CMakeFiles/cmakebuild.dir/main.c.obj: CMakeFiles/cmakebuild.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmakebuild.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/cmakebuild.dir/main.c.obj -MF CMakeFiles\cmakebuild.dir\main.c.obj.d -o CMakeFiles\cmakebuild.dir\main.c.obj -c C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\main.c

CMakeFiles/cmakebuild.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cmakebuild.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\main.c > CMakeFiles\cmakebuild.dir\main.c.i

CMakeFiles/cmakebuild.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cmakebuild.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\main.c -o CMakeFiles\cmakebuild.dir\main.c.s

# Object files for target cmakebuild
cmakebuild_OBJECTS = \
"CMakeFiles/cmakebuild.dir/main.c.obj"

# External object files for target cmakebuild
cmakebuild_EXTERNAL_OBJECTS =

cmakebuild.exe: CMakeFiles/cmakebuild.dir/main.c.obj
cmakebuild.exe: CMakeFiles/cmakebuild.dir/build.make
cmakebuild.exe: CMakeFiles/cmakebuild.dir/linkLibs.rsp
cmakebuild.exe: CMakeFiles/cmakebuild.dir/objects1.rsp
cmakebuild.exe: CMakeFiles/cmakebuild.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmakebuild.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cmakebuild.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmakebuild.dir/build: cmakebuild.exe
.PHONY : CMakeFiles/cmakebuild.dir/build

CMakeFiles/cmakebuild.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cmakebuild.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cmakebuild.dir/clean

CMakeFiles/cmakebuild.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\build C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\build C:\Users\duc5.le\Downloads\Study\FundamentalCProgramming\Source\build\CMakeFiles\cmakebuild.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cmakebuild.dir/depend

