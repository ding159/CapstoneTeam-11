#include <AccelStepper.h>

AccelStepper stepper1(AccelStepper::DRIVER, 5, 4);
AccelStepper stepper2(AccelStepper::DRIVER, 7, 6);
AccelStepper stepper3(AccelStepper::DRIVER, 9, 8);
AccelStepper stepper4(AccelStepper::DRIVER, 11, 10);

int pos1 = 3600;
int pos2 = 3600;
int pos3 = 3600;
int pos4 = 3600;

void setup()
{  
  stepper1.setMaxSpeed(3000);
  stepper1.setAcceleration(1000);
  stepper2.setMaxSpeed(3000);
  stepper2.setAcceleration(1000);
  stepper3.setMaxSpeed(3000);
  stepper3.setAcceleration(1000);
  stepper4.setMaxSpeed(3000);
  stepper4.setAcceleration(1000);
}

void loop()
{
  if (stepper1.distanceToGo() == 0)
  {
     pos1 = -pos1; 
    stepper1.moveTo(pos1);   
  }
  if (stepper2.distanceToGo() == 0)
  {
    pos2 = -pos2;
    stepper2.moveTo(pos2);
  }
  if (stepper2.distanceToGo() == 0)
  {
    pos3 = -pos3;
    stepper3.moveTo(pos3);
  }
  if (stepper4.distanceToGo() == 0)
  {
    pos4 = -pos4;
    stepper4.moveTo(pos4);
  }
  stepper1.run();
  stepper2.run();
  stepper3.run();
  stepper4.run();
}





