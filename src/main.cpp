#include "main.h"

GE::Flywheel _flywheel = GE::Flywheel(); //_name convention to represent objects
GE::Intake _intake = GE::Intake();
GE::Drive _drive = GE::Drive();

void initialize() {}

void disabled() {}

void competition_initialize() {} //Auton Selector

void autonomous() {}

void opcontrol() {
    while(true) {

        _drive.tank();
        _intake.runIntake();
        _flywheel.runFlywheel();



        pros::delay(20);
    }
}
