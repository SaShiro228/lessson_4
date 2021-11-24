void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT); 
}

int ip;
int i;
int p;
int leds[] = {6, 7, 8, 9, 10, 11, 12, 13};
void loop() {
  p = analogRead(A0);
  for(i = 0;i < 8; i++){
    digitalWrite(leds[i], 1);
  }
  ip = map(p, 0, 1023, 0, 8);
}
