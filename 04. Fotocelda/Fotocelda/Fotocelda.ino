int led = 7;
int ldr = A0;
int umbral = 900;                   //Umbral de luz
int sensor = 0;
 
void setup() {
   pinMode(led, OUTPUT);            //Salida del led en el pin 13
   pinMode(ldr, INPUT);             //Entrada del ldr en el pin A0
}
 
void loop() {
  
   sensor = analogRead(ldr);        //Tomamos la medicion del sensor
   
   if (sensor > umbral) {           //Si la medicion es superior al umbral
      digitalWrite(led, HIGH);      //Encender la luz
   }
   else {                           //Si no
      digitalWrite(led, LOW);       //Apagar la luz
   }
}
