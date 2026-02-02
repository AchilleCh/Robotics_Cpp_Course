/*
===================================================================
Lesson 1: Simple controller
===================================================================
Description:
First input output interaction. 
===================================================================
*/

#include <iostream>

int main() {

    double distance;

    // constants defining distance thresholds
    const double stop_distance = 0.3;
    const double slow_down_distance = 1.0;
    const double vel_max = 0.4;

    // First prompt to terminal. Then in the same stream, so no << again and no endl
    std::cout << "Insert obstacle distance (m): ";
    std::cin >> distance;

    while (distance >= stop_distance) {
        if (distance < slow_down_distance) {
        std::cout << "ACTION: Robot slowing down (0.1 m/s)." << std::endl;
        } else if (distance >= slow_down_distance){
        // concatenation of strings
        std::cout << "ACTION: Robot moving at full speed (" << vel_max << " m/s)" << std::endl;
        }
        std::cout << "Insert obstacle distance (m): ";
        std::cin >> distance;
    }


    std::cout << "ACTION: Robot stopped immediately!" << std::endl;


    return 0;
}