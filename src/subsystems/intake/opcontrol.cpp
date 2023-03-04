#include "main.h"
GE::Intake::runIntake() {
    if(master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
        GE::intake = 127;
    }
}

// GE::Intake::escapeJam() {

// }
