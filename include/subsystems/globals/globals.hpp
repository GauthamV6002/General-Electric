#include "main.h"

namespace GE {

    extern pros::Controller master;

    // Drive
    extern pros::Motor frontLeft;
    extern pros::Motor middleLeft;
    extern pros::Motor backLeft;
    
    extern pros::Motor frontRight;
    extern pros::Motor middleRight;
    extern pros::Motor backRight;

    // Flywheel/Intake
    extern pros::Motor flywheel;
    extern pros::Motor intake;

    // Pneumatics
    extern pros::ADIAnalogOut flap;
    extern pros::ADIAnalogOut highExpansion;
    extern pros::ADIAnalogOut lowExpansion;
    extern pros::ADIAnalogOut expansionBlocker;

    // Sensors
    extern pros::Imu IMU;
}