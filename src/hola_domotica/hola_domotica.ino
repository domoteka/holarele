/*
  Hola Mundo domotica.
  
  Primer programa para el blog domoteka.es. Primera introduccion al
  mundo domotico mediante un simple programa para encender y apagar un rele.
  
  Santi Herraiz - http://www.domoteka.es
 */
//Constantes
const int switch_enc = 2;     // valor del pin de entrada
const int rele =  13;      // valor del pin de salida al rele

//Variable
int estadoRele = LOW; //variable para almacenar el estado del rele

void setup() {
  //Iniciamos el pin de rele como salida
  pinMode(rele, OUTPUT);
  //Iniciamos el pin del switch como entrada
  pinMode(switch_enc,INPUT);

}

void loop() {
  //leemos el valor del pin del switch
  estadoRele = digitalRead(switch_enc);
  Serial.println(estadoRele);


  if (estadoRele == HIGH) {
    // encendemos el rele
    digitalWrite(rele, HIGH);

  }
  else {
    // apagamos el rele
    digitalWrite(rele, LOW);
  }
}
