int led= 7;                               // Pin de salida del led
int PIR = 2;                              // Pin de entrada del sensor
int alarma = 3;                           // Pin de salida de alarma

int sensor = 0;                           // Variable que marca el estado del sensor
 
void setup() {
  pinMode(led, OUTPUT);                   // Declaramos pin 13 como pin salida del led
  pinMode(alarma, OUTPUT);                // Declaramos pin 3 como pin salida del buzzer
  pinMode(PIR, INPUT);                    // Declaramos pin 2 como pin entrada del sensor
}
 
void loop(){
  
  sensor = digitalRead(PIR);              // Tomamos la lectura del sensor
  
  if (sensor == HIGH) {                   // Si el valor es uno (1)
    digitalWrite(led, HIGH);              // Encender el LED y la alarma
    digitalWrite(alarma, HIGH);
  }

  else {                                  // Sino, el valor es cero (0)
    digitalWrite(led, LOW);               // Apagar el LED y la alarma
    digitalWrite(alarma, LOW);
  }
}
