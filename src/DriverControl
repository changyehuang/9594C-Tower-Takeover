////----------------------------------------------------[USER CONTROL]----------------------------------------------------

void usercontrol( void ) {

   int count = 0;
while (1) {


Led1.state(100,vex::percentUnits::pct);
count++;

//---------------------------[Displaying Temperature on screen]---------------------------

//double temp_in_percent = (INTAKE_L.temperature() - 20) / 50 * 100;
//double temp_in_percent2 = (INTAKE_R.temperature() - 20) / 50 * 100;

/*
- discovered that vexcode fixed problem where .temperature gives correct readings and we don't have to rely on equation above
- also discovered that with this constantly being updated on the controller, it causes major delay in controls so we set a alert so it will beep
  when past a threshold
*/


/*
controller1.Screen.clearScreen();
controller1.Screen.setCursor(1,1);
controller1.Screen.print(INTAKE_L.temperature(pct));
controller1.Screen.setCursor(1,10);
controller1.Screen.print(INTAKE_R.temperature(pct));
*/


//---------------------------[Drawing Spiral GIF]---------------------------

//std::string s = "Spiral1.png";
 
//std::string picString;
//picString = pic;

//s.replace(6, 1, picString); 
// s.replace(7, 4, ".png");
//const char* picture = s.c_str();

/*
if(count == 1)
  Brain.Screen.drawImageFromFile( "Spiral1.png" , 0, 0);
if(count == 2)
  Brain.Screen.drawImageFromFile( "Spiral2.png" , 0, 0);
if(count == 3)
  Brain.Screen.drawImageFromFile( "Spiral3.png" , 0, 0);
if(count == 4)
  Brain.Screen.drawImageFromFile( "Spiral4.png" , 0, 0);
if(count == 5)
  Brain.Screen.drawImageFromFile( "Spiral5.png" , 0, 0);
if(count == 6)
  Brain.Screen.drawImageFromFile( "Spiral6.png" , 0, 0);
if(count == 7)
  Brain.Screen.drawImageFromFile( "Spiral7.png" , 0, 0);
if(count == 8)
  Brain.Screen.drawImageFromFile( "Spiral8.png" , 0, 0);
if(count == 9)
  Brain.Screen.drawImageFromFile( "Spiral9.png" , 0, 0);
if(count == 10)
  Brain.Screen.drawImageFromFile( "Spiral10.png" , 0, 0);
if(count == 11)
  Brain.Screen.drawImageFromFile( "Spiral11.png" , 0, 0);
if(count == 12)
  Brain.Screen.drawImageFromFile( "Spiral12.png" , 0, 0);
*/

//---------------------------[Controller Drive]---------------------------
if(count == 13)
count = 0;

  run(DRIVE_RF, (controller1.Axis3.value() - controller1.Axis4.value() - controller1.Axis1.value()) * 1.5 * slowDrive);
  run(DRIVE_LB, (controller1.Axis3.value() - controller1.Axis4.value() + controller1.Axis1.value()) * 1.5 * slowDrive);

  run(DRIVE_LF, (controller1.Axis3.value() + controller1.Axis4.value() + controller1.Axis1.value()) * 1.5 * slowDrive);
  run(DRIVE_RB, (controller1.Axis3.value() + controller1.Axis4.value() - controller1.Axis1.value()) * 1.5 * slowDrive);

if(controller1.ButtonA.pressing())
{
  if(slowDrive == 1){
  slowDrive = 0.7;
  slowInt = 0;
  vex::task::sleep(500);
}else{
  slowDrive = 1;
  slowInt = 0;
  vex::task::sleep(500);
}
}

//---------------------------[Arm Control]---------------------------

if(controller1.ButtonR1.pressing()){
  run(ARM, 200);
}else if(controller1.ButtonR2.pressing()){
  run(ARM, -200);
}else{
  ARM.stop(hold);
}

//---------------------------[Ramp Control]---------------------------

if(controller1.ButtonX.pressing())
  vex::task ramp(pidRamp);
else if(controller1.ButtonB.pressing())
  run(RAMP, -200);
else if(controller1.ButtonY.pressing())
  run(RAMP, 100);
else
  RAMP.stop(hold);

//---------------------------[Intake Control]---------------------------

if(controller1.ButtonL1.pressing()){
    run(INTAKE_L, INTAKE_R, 100);
} else if(controller1.ButtonL2.pressing()){
    run(INTAKE_L, INTAKE_R, -300 );
} else{
    INTAKE_L.stop(hold);
    INTAKE_R.stop(hold);
}
    vex::task::sleep(20); //Sleep the task for a short amount of time to prevent wasted resources. 
  }
}

//
// Main will set up the competition functions and callbacks.
//
