#include <ESP8266WiFi.h>

// ==========================================================
//     Credenciales para la conexión por WiFi
// ==========================================================
	const char* WIFI_SSID = "Computaex-Invitados";
	const char* WIFI_PASS = "LUS1T4N14";
// ----------------------------------------------------------

// Define la constante para el segundo LED integrado conectado a GPIO16 (D0)
#define LED_BUILTIN_2 16

// --------------------------------------------------------------
// 	Método de configuración e inicialización de dispositivos
// --------------------------------------------------------------
void setup() {

	Serial.begin(9600);
	pinMode(LED_BUILTIN_2, OUTPUT);

	WiFi.begin( WIFI_SSID , WIFI_PASS );

	Serial.print("Conectando");

	while( WiFi.status() != WL_CONNECTED ){
		digitalWrite(LED_BUILTIN_2, LOW);
		delay(500);
		Serial.print(".");
		digitalWrite(LED_BUILTIN_2, HIGH);
		delay(500);
	}

	Serial.println();
	Serial.print( "Conectado, dirección IP: ");
	Serial.println(WiFi.localIP());

	// Muestra el led fijo durante 1 segundo para indicar que ha conectado
	digitalWrite(LED_BUILTIN_2, LOW);
	delay(3000);
  digitalWrite(LED_BUILTIN_2, HIGH);

}


// --------------------------------------------------------------
//	Bucle de operación de la placa
// --------------------------------------------------------------
void loop(){}
