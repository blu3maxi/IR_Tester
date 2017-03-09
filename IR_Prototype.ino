/*I'm using this code to measure ambient IR readings
in the environment. It's main purpose is to
check if an IR emitter is working.
*/


const int analogInPin = A0;

int sensorValue = 0;
int initialValue = 0;
int led = 13;

void setup()
{
  Serial.begin(9600);
  pinMode (led, OUTPUT);
}

void loop()
{
  initialValue = analogRead(analogInPin);
  delay(10);
  sensorValue = analogRead(analogInPin);

  if(sensorValue > (initialValue + 10))
  {
    digitalWrite(led, HIGH);
  }

  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.println();

  if(sensorValue < (initialValue + 9))
  {
    digitalWrite(led, LOW);
  }

  delay(20);

}
