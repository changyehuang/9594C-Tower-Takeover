
//----------------------------------------------------[Alerting Systems]----------------------------------------------------

//battery
int batteryAlert(){
    while(1){
        if (Brain.Battery.capacity(percentUnits::pct) <= 20){
            Brain.Screen.clearScreen(color::orange);
            controller1.Screen.clearScreen();
            vex::task::sleep(250);
            Brain.Screen.printAt(90, 135, ">> RECHARGE BATTERY <<");
            controller1.rumble("-");
            controller1.Screen.setCursor(1, 7);
            controller1.Screen.print("RECHARGE");
            controller1.Screen.setCursor(2, 8);
            controller1.Screen.print("BATTERY");
            vex::task::sleep(500);
        }
    vex::task::sleep(500);
    }
}

//intake
int intakeTempAlert(){
    while(1){
        if (INTAKE_L.temperature(pct) >= 70.00){ //psat 70 it can only pickup 5 and wont be able to stack alot
            Brain.Screen.clearScreen(color::red);
            controller1.Screen.clearScreen();
            vex::task::sleep(250);
            Brain.Screen.printAt(90, 135, ">> SWAP INTAKE MOTORS <<");
            controller1.rumble("-");
            controller1.Screen.setCursor(1, 9);
            controller1.Screen.print("SWAP");
            controller1.Screen.setCursor(2, 8);
            controller1.Screen.print("MOTOR");
            vex::task::sleep(500);
        }
    vex::task::sleep(500);
    }
}

