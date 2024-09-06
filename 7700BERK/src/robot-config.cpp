#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor Int = motor(PORT8, ratio6_1, true);
motor LBD = motor(PORT3, ratio6_1, true);
motor LMD = motor(PORT2, ratio6_1, true);
motor LFD = motor(PORT1, ratio6_1, true);
motor RBD = motor(PORT6, ratio6_1, false);
motor RMD = motor(PORT5, ratio6_1, false);
motor RFD = motor(PORT4, ratio6_1, false);
inertial Gyro = inertial(PORT21);
digital_out Claw = digital_out(Brain.ThreeWirePort.A);
digital_out hang = digital_out(Brain.ThreeWirePort.C);
digital_out IntPistons = digital_out(Brain.ThreeWirePort.B);
motor Int2 = motor(PORT7, ratio18_1, false);
motor FrontInt = motor(PORT11, ratio18_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}