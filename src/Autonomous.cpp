void autonomous( void ) {
  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
/*
if(autoSide == 1){
  if(autoColor == 1){
    run(INTAKE_L, 100);
    sleep(2000);
    run(INTAKE_L, 0);
  }else{
    run(INTAKE_L, -100);
    sleep(2000);
    run(INTAKE_L, 0);
  }
  
}else{
  if(autoColor == 1){
    run(INTAKE_R, 100);
    sleep(2000);
    run(INTAKE_R, 0);
  }else{
    run(INTAKE_R, -100);
    sleep(2000);
    run(INTAKE_R, 0);
}
}
*/



run(RAMP, 100);
sleep(600);

run(RAMP, 0);



run(INTAKE_L, INTAKE_R, 300);
sleep(1000);
run(INTAKE_L, INTAKE_R, 0);
run(ARM, 200);
sleep(800);
run(ARM, -200);
sleep(500);
run(ARM, 0);

run(RAMP, 0);


drive(0, 0);



run(INTAKE_L, INTAKE_R, -300);

pidDrive(2, .8, .8);

drive(0,0);

sleep(100);

pidDrive2D(2.4, 220, 3);

//pidDrive(-3.2, -1.5, 3, .75);


run(INTAKE_L, INTAKE_R, -300);

drive(0,0);

//pidDrive(.7, -.7, 1, 1);
drive(0, 0);
sleep(250);



pidDrive(2.1, 2.1, .9, .9);
drive(0,0);
sleep(250);


pidDrive(-1.25, 1.25, .5, .5);
drive(0, 0);

sleep(300);

run(INTAKE_L, INTAKE_R, 0);

pidDrive(2.58, 2.58, 1, 1);

pidRamp();

run(INTAKE_L, INTAKE_R, 30);

pidDrive(-.5, -.5, .5, .5);

run(DRIVE_RF, 0);
  run(DRIVE_LF, 0);
  run(DRIVE_LB, 0);
  run(DRIVE_RB, 0);


drive(0, 0);
}
