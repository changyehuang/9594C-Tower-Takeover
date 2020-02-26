//---------------------------[Displaying Temperature on screen]---------------------------

//double temp_in_percent = (INTAKE_L.temperature() - 20) / 50 * 100;
//double temp_in_percent2 = (INTAKE_R.temperature() - 20) / 50 * 100;

/*
- discovered that vexcode fixed problem where .temperature gives correct readings and we don't have to rely on equation above

- also discovered that with this constantly being updated on the controller, it causes major delay in controls so we set a alert so it will beep
  when past a threshold

*/


controller1.Screen.clearScreen();
controller1.Screen.setCursor(1,1);
controller1.Screen.print(INTAKE_L.temperature(pct));

controller1.Screen.setCursor(1,10);
controller1.Screen.print(INTAKE_R.temperature(pct));
