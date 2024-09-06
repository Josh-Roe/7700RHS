#include "vex.h"

bool Intakeis = false;
bool hanging = false;
bool opened = false;
bool backOpened = false;
bool blocking = false;
bool firing = false;
bool intakePos = false;

void default_constants(){
  chassis.set_drive_constants(10, 1.5, 0, 10, 0);
  chassis.set_heading_constants(6, .4, 0, 1, 0);
  chassis.set_turn_constants(12, .4, .03, 3.2, 15);
  chassis.set_swing_constants(4, .3, .001, 2, 15);
  chassis.set_drive_exit_conditions(1.5, 50, 1100);
  chassis.set_turn_exit_conditions(1, 50, 700);
  chassis.set_swing_exit_conditions(1, 100, 700);
}

void odom_constants(){
  default_constants();
  chassis.drive_max_voltage = 8;
  chassis.drive_settle_error = 3;
}

void intakeSpin(int speed) {
  speed = speed * 127;
  Int.spin(fwd, speed, voltageUnits::mV);
  Int2.spin(fwd, speed, voltageUnits::mV);
  FrontInt.spin(fwd, speed, voltageUnits::mV);
}


bool tog = false;
void toggle(){
 tog = !tog;
}

void intakeTog() {
  Intakeis = !Intakeis;
  if (!Intakeis) {
    intakeSpin(100);
  } else {
    intakeSpin(0);
  }
}

// void openBackWings() {
//   backOpened = !backOpened;
//   if (backOpened == true) {
//     backWings.set(true);
//   }
//   if (backOpened == false) {
//     backWings.set(false);
//   }
// }

void hangTog() {
  hanging = !hanging;
  if (hanging == true) {
    Claw.set(true);
    hang.set(true);
  }
  if (hanging == false) {
    Claw.set(false);
  }
}

void raiseInt(){
intakePos=!intakePos;
if(intakePos==true){
  IntPistons.set(true);
}else if (intakePos == false){
  IntPistons.set(false);
}
}

int deployThread(){
  intakeSpin(-100);
  wait(300, msec);
  intakeSpin(100);
  return 0;
}