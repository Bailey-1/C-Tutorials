#include <stdio.h>

int main() {
    /* I think that the program will crash because of the semicolon's placement and that "false" is undeclared.
     * and because if statements do not use semicolons.
     * */
    if(false)
        ;
    {
        printf("This text won't be shown.\n");
    }

    /*After running the program, I recieve this message:
     * ============================================================================
     *  C:\Users\Bailey\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\182.5107.21\bin\cmake\win\bin\cmake.exe --build "C:\Users\Bailey\Desktop\C Tutorials\Tutorial 3\Task 5\cmake-build-debug" --target Task_5 --
        Scanning dependencies of target Task_5
        [ 50%] Building C object CMakeFiles/Task_5.dir/main.c.obj
        main.c
        C:\Users\Bailey\Desktop\C Tutorials\Tutorial 3\Task 5\main.c(4): error C2065: 'true': undeclared identifier
        NMAKE : fatal error U1077: 'C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe' : return code '0x2'
        Stop.
        NMAKE : fatal error U1077: '"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\nmake.exe"' : return code '0x2'
        Stop.
        NMAKE : fatal error U1077: '"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\nmake.exe"' : return code '0x2'
        Stop.
        NMAKE : fatal error U1077: '"C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\nmake.exe"' : return code '0x2'
        Stop.
       ============================================================================

        The reason for the failed build is because of "Error C2065 (https://docs.microsoft.com/en-us/cpp/error-messages/compiler-errors-1/compiler-error-c2065?view=vs-2017)"
        This error means that the variable "failed" doesnt have an identifier.

        C doesnt have a bool data type or identifier, so the word "false" doesnt exist but can be used as a
        variable. In this case, C thinks that it is a name of a variable.

        Languages that use a bool data type such as Python or C# already use the words "false" and "true" and so
        similar code recreated in them would work.

     */
}