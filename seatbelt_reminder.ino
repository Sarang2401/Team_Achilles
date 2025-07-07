#define Sensor 8
const int led_pin =13;
int fsrAnalogPin = 0;
int ledbrightness;
int fsrReading;


void setup(){
  pinMode(led_pin, OUTPUT);
  pinMode(fsrAnalogPin, INPUT);
  pinMode(Sensor, INPUT);
  Serial.begin(9600);

}
void loop(){

  fsrReading = analogRead(fsrAnalogPin);
  Serial.print("Analog reading = ");
  Serial.print(fsrReading);     // print the raw analog reading
  bool value = digitalRead(Sensor);
  Serial.println(value);
 if (analogRead(fsrAnalogPin)==1 && value == 1)
{
 digitalWrite(led_pin, HIGH);
 Serial.println("OFF");
 delay(100);
 }
 
 else
{
  (digitalWrite(led_pin, LOW));
  Serial.println("ON");
  delay(100);
 }
}
