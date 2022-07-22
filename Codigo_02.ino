const int pinSensor = 2; // Pino do sensor conectado a porta digital 2 do Arduino Nano.
const int pinLed = 12; // Pino do led está conectado a porta digital 12 do Arduino Nano.

// set variables
byte estado = 0; // Variável para leitura do sensor
byte guarda_estado = 0;  // Variável para armazenar os valores do sensor.
byte estado_anterior = LOW;
 
void setup() {
  pinMode(pinSensor, INPUT); // O pino do sensor foi definido como entrada.
  pinMode(pinLed, OUTPUT); // O pino do led foi definido como saída.
}

void loop(){
  // Leitura do estado do sensor: ativado = (HIGH) ou desativado = (LOW).
  estado = digitalRead(pinSensor);
   
  // Verifica se o sensor foi tocado (HIGH).
  if ((estado) && (!estado_anterior)) { // Se o estado for HIGH e estado_anterior for LOW.
      // Inverte o valor da variável guarda_estado.
      guarda_estado = !guarda_estado;
      delay(10);
  }
   
  if (guarda_estado == HIGH) {
      // Liga o led.
      digitalWrite(pinLed, HIGH);
  } else {
      // Desliga o led.
      digitalWrite(pinLed, LOW);
  }
   
  estado_anterior = estado; 
}