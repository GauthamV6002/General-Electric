#include "main.h"

// Helper functions for motor control

GE::Drive::setMotors(int value) {
    frontLeft = value;
    middleLeft = value;
    backLeft = value;
    frontRight = value;
    middleRight = value;
    backRight = value;
}

GE::Drive::setLeftSide(int value) {
    frontLeft = value;
    middleLeft = value;
    backLeft = value;
}

GE::Drive::setRightSide(int value) {
    frontRight = value;
    middleRight = value;
    backRight = value;
}

GE::Drive::setBrakeConfig(pros::motor_brake_mode_e brakeMode = pros::E_MOTOR_BRAKE_HOLD) {
    frontLeft.set_brake_mode(brakeMode);
    middleLeft.set_brake_mode(brakeMode);
    backLeft.set_brake_mode(brakeMode);
    frontRight.set_brake_mode(brakeMode);
    middleRight.set_brake_mode(brakeMode);
    backRight.set_brake_mode(brakeMode);
}

GE::Drive::brakeAll() {
    frontLeft.brake();
    middleLeft.brake();
    backLeft.brake();
    frontRight.brake();
    middleRight.brake();
    backRight.brake();
}