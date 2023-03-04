#include "main.h"

GE::Flywheel::FlywheelPresets {
    CLOSE = 85, 
    FLAP = 110, 
    MIDLINE = 105, 
    EDGE_HALF = 90, 
    EDGE_FULL = 127, 
    QUARTER_MIDLINE = 105;
}

GE::Flywheel::setFlywheel(bool shoot, bool indexFwd, GE::Flywheel::FlywheelPreset preset, bool accelerate) {
    
    // bool shoot = master.get_digital(pros::E_CONTROLLER_DIGITAL_R1);
    // bool indexFwd = master.get_digital(pros::E_CONTROLLER_DIGITAL_L1);

    if(accelerate) {
        if(shoot && !indexFwd) {
            GE::flywheel = preset;
        } else if (shoot && indexFwd) {
            GE::flywheel = 127;
            GE::intake = -127;
        } else if (!shoot && indexFwd) {
            GE::intake = -127;
        }
    } else {
        if(shoot) {
            GE::flywheel = preset;
        }

        if(indexFwd) {
            GE::intake = -127; //indexer is reverse intake
        }
    }
}

// Decision Function
GE::Flywheel::runFlywheel() {
    this.setFlywheel(master.get_digital(pros::E_CONTROLLER_DIGITAL_R1), 
        master.get_digital(pros::E_CONTROLLER_DIGITAL_L1), 
        GE::Flywheel::CLOSE, true);
}