# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\Bailey\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.4886.39\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Bailey\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.4886.39\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Task_13.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Task_13.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Task_13.dir\flags.make

CMakeFiles\Task_13.dir\main.c.obj: CMakeFiles\Task_13.dir\flags.make
CMakeFiles\Task_13.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Task_13.dir/main.c.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\Task_13.dir\main.c.obj /FdCMakeFiles\Task_13.dir\ /FS -c "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\main.c"
<<

CMakeFiles\Task_13.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Task_13.dir/main.c.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\Task_13.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\main.c"
<<

CMakeFiles\Task_13.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Task_13.dir/main.c.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\Task_13.dir\main.c.s /c "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\main.c"
<<

# Object files for target Task_13
Task_13_OBJECTS = \
"CMakeFiles\Task_13.dir\main.c.obj"

# External object files for target Task_13
Task_13_EXTERNAL_OBJECTS =

Task_13.exe: CMakeFiles\Task_13.dir\main.c.obj
Task_13.exe: CMakeFiles\Task_13.dir\build.make
Task_13.exe: CMakeFiles\Task_13.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Task_13.exe"
	C:\Users\Bailey\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\183.4886.39\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\Task_13.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Task_13.dir\objects1.rsp @<<
 /out:Task_13.exe /implib:Task_13.lib /pdb:"C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\cmake-build-debug\Task_13.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Task_13.dir\build: Task_13.exe

.PHONY : CMakeFiles\Task_13.dir\build

CMakeFiles\Task_13.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Task_13.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Task_13.dir\clean

CMakeFiles\Task_13.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13" "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13" "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\cmake-build-debug" "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\cmake-build-debug" "C:\Users\Bailey\OneDrive - Fareham College\Year 2\Programming\C Tutorials\Tutorial 7\Task 13\cmake-build-debug\CMakeFiles\Task_13.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Task_13.dir\depend

