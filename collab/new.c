#pragma config(Sensor, S3,     light,          sensorLightActive)
#pragma config(Sensor, S4,     sonar,          sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//2550 for one square

void action(char* direction, int speed, int del, bool angle){
	if (direction == "r"){
		motor[motorB] = -speed;
		motor[motorC] = speed;
	}
	else if (direction == "l"){
		motor[motorB] = speed;
		motor[motorC] = -speed;
	}
	else if (direction == "s"){
		motor[motorB] = speed;
		motor[motorC] = speed;
	}
	else if (direction == "b"){
		motor[motorB] = -speed;
		motor[motorC] = -speed;
	}

	if (angle == true){
		delay(del * 3.55); // placeholder
	}
	else if (angle == false){
		delay(del);
	}

	motor[motorB] = 0;
	motor[motorC] = 0;
	delay(200);
}

task main(){
	action("s", 50, 7500, false);
	action("r", 50, 90, true);
	action("s", 50, 2500, false);
	action("l", 50, 90, true);
	action("s", 50, 2500, false);
}
