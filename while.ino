int pinoBotao = 8;
int pinoLed = 12;

void setup()
{
  pinMode(pinoBotao, INPUT);
  pinMode(pinoLed, OUTPUT);
}

void loop()
{
  int nr = 0;
  int estadoBotao = digitalRead(pinoBotao);
  if(estadoBotao == HIGH){
    while(nr <= 4 ){
  		digitalWrite(pinoLed, HIGH);
  		delay(500); 
  		digitalWrite(pinoLed, LOW);
  		delay(500);
        nr ++;
    }
  }    
}