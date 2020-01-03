/*
  Blink

  Enciende los dos LED integrados en la placa NodeMCU alternativamente.

  Las placas NodeMCU 1.0 basadas en el ESP-12E cuentan con dos Leds integrados.
  Cada uno de ellos está asociados a los pines D0 (GPIO16) y D4 (GPIO2).
  El led conectado al D4 pertenece al módulo ESP-12E y el conectado al D0 pertenece
  a la propia placa NodeMCU.

  Estos leds tienen la polaridad invertida, lo que significa que si se ponen en
  estado LOW (0V), el led se enciende. Mientras que si se pone en estado HIGH (3,3V)
  el led se apaga.

  Basado en el ejemplo "Blink" original de Arduino, de dominio público.
  http://www.arduino.cc/en/Tutorial/Blink

  modificado el 3 de enero de 2020
  por Juan F. Bermejo (@juanfbermejo - https://github.com/jfbermejo)
  
*/

// Define la constante para el segundo LED integrado conectado a GPIO16 (D0)
#define LED_BUILTIN_2 16

// la función setup se ejecuta una vez en el arranque o reinicio de la placa
void setup() {
  // inicializa los los pines de los led como output
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_BUILTIN_2, OUTPUT);
}

// la función loop se ejecuta continuamente hasta el infinito y más allá
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // apaga el LED D2 y enciende el D0
  digitalWrite(LED_BUILTIN_2, LOW);
  delay(1000);                       // espera un segundo
  digitalWrite(LED_BUILTIN, LOW);    // enciende el LED D2 y apaga el D0
  digitalWrite(LED_BUILTIN_2, HIGH);
  delay(1000);                       // espera un segundo
}
