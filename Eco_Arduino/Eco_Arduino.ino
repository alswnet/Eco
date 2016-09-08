//Nombre defininos para los puertos Seriales
//Tx2 10 Rx2 9
//Tx3 7 Rx3 8
#define BTSerial Serial2
#define PresionSerial Serial3

void setup() {
  //Iniciando los pueros Seriales
  Serial.begin(9600);
  BTSerial.begin(9600);
  PresionSerial.begin(...);
}

void loop() {
 
}
