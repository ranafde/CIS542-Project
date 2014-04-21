#include "boebot.h"
#include "mbed.h"
PwmOut servoRIGHT(p23);
PwmOut servoLEFT(p24);
Steer :: Steer(){}

Steer :: ~Steer()
{
}
void Steer :: forward() {
     servoLEFT.write(0.076);
     servoRIGHT.write(0.074);

    }

void Steer :: stop() {
     servoLEFT.write(0.075);
     servoRIGHT.write(0.075);

}

void Steer :: right() {
     servoLEFT.write(0.076);
     servoRIGHT.write(0.075);
    
}
void Steer::left() {
     servoLEFT.write(0.075); 
     servoRIGHT.write(0.074); //move right wheel clockwise.
    
} 
