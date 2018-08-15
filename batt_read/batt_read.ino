int analogPin = 1;     // potentiometer wiper (middle terminal) connected to analog pin 3

                       // outside leads to ground and +5V

uint8_t val = 0;           // variable to store the value read


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);          //  setup serial


}


//0.0049 x (5 volts referance)

void loop() {
  // put your main code here, to run repeatedly:

  int sensorValue = analogRead(A0);
  Serial.print(sensorValue); 
  Serial.print(" , ");
  delay (100);// 0.1 sec
  sensorValue = analogRead(A1);
  Serial.print(sensorValue*0.0049); 
  Serial.print(" , ");
  delay (100);// 0.1 sec
  sensorValue = analogRead(A2);
  Serial.print(sensorValue); 
  Serial.print(" , ");
  delay (100);// 0.1 sec
  sensorValue = analogRead(A3);
  Serial.println(sensorValue);             // debug value
  delay (500000); //10 sec
}
