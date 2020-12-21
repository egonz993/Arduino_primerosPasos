int verde = 2;
int amarillo = 3;
int rojo = 4; 

void setup() {
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);

}

void loop() {
  digitalWrite(verde, HIGH);    //luz verde encendida
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, LOW);
  delay(5000);

  digitalWrite(verde, LOW);     //luz amarailla encendida
  digitalWrite(amarillo, HIGH);
  digitalWrite(rojo, LOW);
  delay(1000);

  digitalWrite(verde, LOW);     // luz roja encendida
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, HIGH);
  delay(5000);
}
