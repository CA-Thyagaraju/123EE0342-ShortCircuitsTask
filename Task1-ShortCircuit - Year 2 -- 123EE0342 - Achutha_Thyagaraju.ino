int Red = 5;
int Yellow = 6;
int Green = 7;
void setup()
{pinMode(Red, OUTPUT);
 pinMode(Yellow, OUTPUT);
 pinMode(Green, OUTPUT);
 pinMode(A3, INPUT_PULLUP);
}

void loop()
{
 if (digitalRead(A3) == LOW)
  {pedestrian();}
 delay(2000);
 
 digitalWrite(Green, HIGH);
 digitalWrite(Yellow, LOW);
 digitalWrite(Red, LOW);
 

 if (digitalRead(A3) == LOW)
  {pedestrian();}
 delay(2000);
  
 
 digitalWrite(Green, LOW);
 digitalWrite(Yellow, HIGH);
 digitalWrite(Red, LOW);
 

 if (digitalRead(A3) == LOW)
  {pedestrian();}
 delay(2000);
  
 
 digitalWrite(Green, LOW);
 digitalWrite(Yellow, LOW);
 digitalWrite(Red, HIGH);
 
}
void pedestrian()
{digitalWrite(Green, LOW);
 digitalWrite(Yellow, HIGH);
 digitalWrite(Red, LOW);
 delay(2000);
 digitalWrite(Green, LOW);
 digitalWrite(Yellow, LOW);
 digitalWrite(Red, HIGH);
 delay(5000);}