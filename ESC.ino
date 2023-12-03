#include <Servo.h>
Servo esc;

void setup(){
    esc.attach(6);//esc attached to gpio6
    
    esc.write(30);//initialize esc (compulsory)
    delay(3000);
    //delay for 3 sec (compulsory)
}
void loop(){
    esc.write(60); //speed varies from 30 to 180
}