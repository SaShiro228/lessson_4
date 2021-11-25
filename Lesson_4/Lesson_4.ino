
void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);                                                                                                                         
}
int p;
void loop() {
  p = analogRead(A0);
  digitalWrite(6, 1);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
  if (p >= 10 and p <= 128){
    digitalWrite(6, 1);
  }
  if (p >= 128 and p <= 256){
    digitalWrite(6, 1);
    digitalWrite(7, 1);
  }
  if (p >= 256 and p <= 384){
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
  }
  if (p >= 384 and p <= 512){
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(9, 1);
  }
  if (p >= 512 and p <= 620){
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(9, 1);
    digitalWrite(10, 1);
  }
  if (p >= 620 and p <= 728){
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(9, 1);
    digitalWrite(10, 1);
    digitalWrite(11, 1);
  }
  if (p >= 728 and p <= 856){
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(9, 1);
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 1);
  }
  if (p >= 856 and p <= 1024){
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    digitalWrite(9, 1);
    digitalWrite(10, 1);
    digitalWrite(11, 1);
    digitalWrite(12, 1);
    digitalWrite(13, 1);
  }
 }
