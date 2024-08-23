
const int luzVerde = 11;
const int luzRoja = 13;
const int luzAmarilla = 12;

void setup() {
  // Configurar los pines como salida
  pinMode(luzVerde, OUTPUT);
  pinMode(luzRoja, OUTPUT);
  pinMode(luzAmarilla, OUTPUT);

  // Inicializar el monitor serial
  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    char comando = Serial.read();  

    switch (comando) {
      case '1':
        encenderLuz(luzVerde);
        break;
      case '2':
        apagarLuz(luzVerde);
        break;
      case '3':
        encenderLuz(luzRoja);
        break;
      case '4':
        apagarLuz(luzRoja);
        break;
      case '5':
        encenderLuz(luzAmarilla);
        break;
      case '6':
        apagarLuz(luzAmarilla);
        break;
      case '7':
        encenderTodasLasLuces();
        break;
      case '8':
        apagarTodasLasLuces();
        break;
      case '9':
        modoIntermitente();
        break;
      default:
        Serial.println("Comando no válido. Introduzca un número del 1 al 9.");
        break;
    }
  }
}


void encenderLuz(int luz) {
  digitalWrite(luz, HIGH);
  Serial.println("Luz encendida.");
}

void apagarLuz(int luz) {
  digitalWrite(luz, LOW);
  Serial.println("Luz apagada.");
}


void encenderTodasLasLuces() {
  encenderLuz(luzVerde);
  encenderLuz(luzRoja);
  encenderLuz(luzAmarilla);
  Serial.println("Todas las luces encendidas.");
}

void apagarTodasLasLuces() {
  apagarLuz(luzVerde);
  apagarLuz(luzRoja);
  apagarLuz(luzAmarilla);
  Serial.println("Todas las luces apagadas.");
}


void modoIntermitente() {
  for (int i = 0; i < 5; i++) {  
    encenderTodasLasLuces();
    delay(500);  
    apagarTodasLasLuces();
    delay(500);  
  }
  Serial.println("Modo intermitente completado.");
}
