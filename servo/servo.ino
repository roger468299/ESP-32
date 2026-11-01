#include <ESP32Servo.h>
Servo myservo;

void setup(){

  myservo.attach(18);//connect pin 18 with the control line(the middle line of Servo) 
  myservo.write(90);// move servos to center position -> 90°
} 
void loop(){
  myservo.write(90);// move servos to center position -> 90°
  delay(1000);
  myservo.write(60);// move servos to center position -> 60°
  delay(1000);
  myservo.write(90);// move servos to center position -> 90°
  delay(1000);
  myservo.write(150);// move servos to center position -> 150°
  delay(1000);
}
