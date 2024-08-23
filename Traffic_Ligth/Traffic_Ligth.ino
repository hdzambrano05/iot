
const int pinRojo = 13;
const int pinAmarillo = 12;
const int pinVerde = 11;

void setup() {
  // Configurar los pines de los LEDs como salidas
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  
  digitalWrite(pinRojo, HIGH);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, LOW);
  delay(5000); 
  

  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, HIGH);
  digitalWrite(pinVerde, LOW);
  delay(2000); 
  
 
  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, HIGH);
  delay(5000); 
  

  digitalWrite(pinRojo, LOW);
  digitalWrite(pinAmarillo, HIGH);
  digitalWrite(pinVerde, LOW);
  delay(2000); gi
}
