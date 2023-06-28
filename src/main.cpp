#include <Arduino.h>


void setup() 
{
  Serial.begin(115200);
  Serial.println("CALCULATOR");
  Serial.println("Input the choice: ");
  Serial.print("In order of calculation choice, first number and seconf number.");
}

void loop() 
{
  int n,num1,num2;
  float out;
  while(Serial.available()>0)
  {
    n = Serial.parseInt();
    Serial.println(n);
    delay(500);
    num1 = Serial.parseInt();
    Serial.println(num1);
    delay(500);
    num2 = Serial.parseInt();
    Serial.println(num2);
    delay(500);
  }
  switch(n)
  {
    case 1:
    out = num1+num2;
    Serial.printf("Calculated Result: %f\n",out);
    break;
    case 2:
    out = num1-num2;
    Serial.printf("Calculated Result: %f\n",out);
    break;
    case 3:
    out = num1*num2;
    Serial.printf("Calculated Result: %f\n",out);
    break;
    case 4:
    if(num2 != 0){
    out = num1/num2;
    Serial.printf("Calculated Result: %f\n",out);
    }
    else
    {
      Serial.println("Infinite");
    }
    break;
    case 5:
    Serial.print(".");
    break;
    default:
    Serial.println("Input a valid choice");
    break;
  }
  n = 5;

}

