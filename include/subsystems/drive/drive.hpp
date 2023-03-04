#include "main.h"

namespace GE {
    class Drive { // Class Template for 6m Drive

        public: 
            // Motor Helpers
            void setMotors(int value);
            void setLeftSide(int value);
            void setRightSide(int value);

            // Driver control tank function
            void tank();

            //Braking Utils
            void setBrakeConfig(pros::motor_brake_mode_e brakeMode);
            void brakeAll();

            /* Auton Odometry System
                Field is represented on a 144x144 coordinate plane, starting at bottom left.
                *Note to self: 1 full turn == 2250 Counts;
                Rotation is clamped from 0-360 degrees
            */

            double xPos, yPos, rotation;
            void translate(double x, double y, double rotation);





    };
}
