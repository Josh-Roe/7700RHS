using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor Int;
extern motor LBD;
extern motor LMD;
extern motor LFD;
extern motor RBD;
extern motor RMD;
extern motor RFD;
extern inertial Gyro;
extern digital_out Claw;
extern digital_out hang;
extern digital_out IntPistons;
extern motor Int2;
extern motor FrontInt;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );