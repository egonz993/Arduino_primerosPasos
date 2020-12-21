#include <Ultrasonic.h>                 //Incluimos la librería  del sensor
Ultrasonic ultrasonic(2,3);             //Configuramos sensor (Trigger,Echo)

int distancia = 0;                      //Declaramos la variable que almacena distancia

void setup() {
  pinMode(8, OUTPUT);                   //luz verde
  pinMode(9, OUTPUT);                   //luz amarilla
  pinMode(10, OUTPUT);                  //luz roja
}
void loop(){
   distancia = ultrasonic.Ranging(CM);  //Tomamos la lectura del sensor

   if (distancia < 10) {                 //Si la distancia es menor a 10cm, encendemos luz rojo
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
   }  else  if (distancia < 20) {       //Si la distancia es menor a 15cm, encendemos amarilla
      digitalWrite(10, LOW);
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
   }  else if (distancia < 30) {        //Si la distancia es menor a 25cm, encendemos luz verde
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
   }
   delay(100);                          //Esperamos 100ms entre cada medicion
}
