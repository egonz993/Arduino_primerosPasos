int led = 3;

void setup() {
  pinMode(led, OUTPUT);     //salida del led en el pin 3
}
void loop() {
  analogWrite(led, 10);     //dimeriado a 10/255 (5%)
  delay(100);
  analogWrite(led, 25);     //dimeriado a 25/255 (10%)
  delay(100);
  analogWrite(led, 50);     //dimeriado a 50/255 (20%)
  delay(100);
  analogWrite(led, 100);    //dimeriado a 100/255 (40%)
  delay(100);
  analogWrite(led, 150);    //dimeriado a 150/255 (60%)
  delay(100);
  analogWrite(led, 200);    //dimeriado a 200/255 (80%)
  delay(100);
  analogWrite(led, 255);    //dimeriado a 255/255 (100%)
  delay(100);
  
}
