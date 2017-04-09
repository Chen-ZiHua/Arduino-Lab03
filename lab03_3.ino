double sensorValue;
double sensorVoltage ;
void setup() 
{
 pinMode(A1,INPUT);
 Serial.begin(9600);
}
void loop() 
{
  double Vin=5;
  int i;
  for(i=0;i<=4;i++)
    sensorValue = 0.7* sensorValue + 0.3* analogRead(A1);
  sensorVoltage = sensorValue * 5 / 1024;
  Serial.println(sensorVoltage );
  delay(500);
}

