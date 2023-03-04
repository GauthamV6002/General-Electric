#include "main.h"

GE::master = pros::Controller(pros::E_CONTROLLER_MASTER);

// Drive
GE::frontLeft = pros::Motor(10, pros::E_MOTOR_GEAR_BLUE, true, pros::E_MOTOR_ENCODER_COUNTS);
GE::middleLeft = pros::Motor(11, pros::E_MOTOR_GEAR_BLUE, true, pros::E_MOTOR_ENCODER_COUNTS);
GE::backLeft = pros::Motor(12, pros::E_MOTOR_GEAR_BLUE, true, pros::E_MOTOR_ENCODER_COUNTS);
GE::frontRight = pros::Motor(13, pros::E_MOTOR_GEAR_BLUE, false, pros::E_MOTOR_ENCODER_COUNTS);
GE::middleRight = pros::Motor(14, pros::E_MOTOR_GEAR_BLUE, false, pros::E_MOTOR_ENCODER_COUNTS);
GE::backRight = pros::Motor(15, pros::E_MOTOR_GEAR_BLUE, false, pros::E_MOTOR_ENCODER_COUNTS);

// Intake & Flywheel
GE::intake = pros::Motor(3, pros::E_MOTOR_GEAR_GREEN, false, pros::E_MOTOR_ENCODER_COUNTS);
GE::flywheel = pros::Motor(2, pros::E_MOTOR_GEAR_BLUE, false, pros::E_MOTOR_ENCODER_COUNTS);

// Pneumatics
GE::flap = pros::ADIAnalogOut('A', LOW);
GE::highExpansion = pros::ADIAnalogOut('B', LOW);
// Not implemented yet; commented to avoid port issues
// GE::lowExpansion = pros::ADIAnalogOut('C', LOW);
// GE::expansionBlocker = pros::ADIAnalogOut('D', LOW);

//Sensors
GE::IMU = pros::imu('A');


