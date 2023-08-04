
int potPin=26;
int relayPin=14;
const int delayFactor=6000;
void setup() {
  // put your setup code here, to run once:
pinMode(relayPin,OUTPUT);
digitalWrite(relayPin,LOW);
Serial.begin(115200);
float potValue=analogRead(potPin);
float percentage=map(potValue,0,4095,0,100);
float delayTime=percentage*delayFactor/10;
Serial.print("percentage: ");
Serial.println(percentage);
Serial.println("delayTime: ");
Serial.print(delayTime/60000.0);
Serial.print("min.");
digitalWrite(relayPin,LOW);
delay(delayTime);
digitalWrite(relayPin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
 

}
