#include 'main.hpp'

// Tank function
GE::Drive::tank() {
    int analogLeftY =  master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_Y);
    int analogLeftX =  master.get_analog(pros::E_CONTROLLER_ANALOG_LEFT_X);

    //Standard Drive setup; send joystick y to all motors; subtract/add joystick x from left/right side, respectively
    frontLeft = analogLeftY + analogLeftX;
	middleLeft = analogLeftY + analogLeftX;
	backLeft = analogLeftY + analogLeftX;

	frontRight = analogLeftY - analogLeftX;
	middleRight = analogLeftY - analogLeftX;
	backRight = analogLeftY - analogLeftX;
}