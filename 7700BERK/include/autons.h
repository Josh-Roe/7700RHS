#pragma once
#include "JAR-Template/drive.h"

class Drive;

extern Drive chassis;

void default_constants();

void intakeSpin(int speed);
void intakeTog();
void openWings();
void hangTog();
void rapid();
void openBackWings();
int fastWings();
int drive_distance_thread();
void raiseInt();
int deployThread();
void toggle();