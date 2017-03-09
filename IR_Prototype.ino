/*I'm using this code to measure ambient IR readings
in the environment. It's main purpose is to
check if an IR emitter is working.
*/


const int analogInPin = A0;

int sensorValue = 0;        //Analog readings from pin A0
int bacRead = 0;            //Background readings of the IR
int button = 10;            //I will put a button on this pin
int led = 13;

void setup()
{
  Serial.begin(9600);
  pinMode (led, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{


  if(digitalRead(button, HIGH);                   //When I press the button
  {
    int bacRead = analogRead(analogInPin);        //Trying to write a value to bacRead (not sure if its right)
  }
else(analogRead(analogInPin) > (bacRead + 5));    //Attempting to make LED flash when it picks up IR readings higher than bacRead
{
  Serial.print("sensor = ");                      //Printing to serial
  Serial.print(sensorValue);
  Serial.println();

//I'm not sure if this actually works but either way is there a more elegant way of doing this and any suggestions

  delay(12);
}
