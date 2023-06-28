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
  int num1,num2;
  char m;
  float out;
  while(Serial.available()>0)
  {
    Serial.println("Enter your choice: ");
    m = Serial.read();
    Serial.println(m);
    delay(500);
    num1 = Serial.parseInt();
    Serial.println(num1);
    delay(500);
    num2 = Serial.parseInt();
    Serial.println(num2);
    delay(500);
  }
  switch(m)
  {
    case '+':
    out = num1+num2;
    Serial.printf("Calculated Result: %0.1f\n",out);
    m = 5;
    break;
    case '-':
    out = num1-num2;
    Serial.printf("Calculated Result: %0.1f\n",out);
    m = 5;
    break;
    case '*':
    out = num1*num2;
    Serial.printf("Calculated Result: %0.1f\n",out);
    m = 5;
    break;
    case '/':
    if(num2 != 0){
    out = num1/num2;
    Serial.printf("Calculated Result: %0.1f\n",out);
    }
    else
    {
      Serial.println("Infinite");
    }
    m = 5;
    break;
    case 5:
    Serial.print(".");
    break;
    default:
    Serial.println("Enter your choice: ");
    m = 5;
    break;
  }
  delay(1000);

}

