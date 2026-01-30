/*
===================================================================
Lesson 1: Hello robot!
===================================================================
Description:
First C++ script. 
Compilation test.
Execution test.
===================================================================
*/

#include <iostream> // Import of the input/output library for cpp

int main() {
    // << write operator
    std::cout << "Hello, I am your first C++ robot in ROS2 Jazzy" <<
    // endl is to go to new line and also forces flush of the buffer. Immediatly writes.
    std::endl;

    // 0 exit code for success
    return 0;
}