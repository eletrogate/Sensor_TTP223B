const int pinSensor = 2; // Pino do sensor conectado a porta digital 2 do Arduino Nano.

const int pinLed = 12; // Pino do led está conectado a porta digital 12 do Arduino Nano.


void setup() {

  pinMode(pinSensor, INPUT); // O pino do sensor foi definido como entrada.

  pinMode(pinLed, OUTPUT); // O pino do led foi definido como saída.

}


void loop() {

  if (digitalRead(pinSensor) == HIGH){ //Quando o sensor for tocado, a leitura é HIGH.

    digitalWrite(pinLed, HIGH); // O led acende enquanto estamos tocando o sensor.

  }

  else{

    digitalWrite(pinLed,LOW); // O led é desligado

  } 

}