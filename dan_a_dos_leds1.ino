void setup(){
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
}

void loop(){
  delay(2000);
  
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
  delay(90);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  
  delay(100);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  
  delay(100);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(100);
  analogWrite(3, 25);
  analogWrite(5, 25);
  analogWrite(6, 25);
  delay(100);
  analogWrite(3, 50);
  analogWrite(5, 50);
  analogWrite(6, 50);
  delay(100);
  analogWrite(3, 75);
  analogWrite(5, 75);
  analogWrite(6, 75);
  delay(100);
  analogWrite(3, 100);
  analogWrite(5, 100);
  analogWrite(6, 100);
  delay(100);
  analogWrite(3, 125);
  analogWrite(5, 125);
  analogWrite(6, 125);
  delay(100);
  analogWrite(3, 150);
  analogWrite(5, 150);
  analogWrite(6, 150);
  delay(100);
  analogWrite(3, 175);
  analogWrite(5, 175);
  analogWrite(6, 175);
  delay(100);
  analogWrite(3, 200);
  analogWrite(5, 200);
  analogWrite(6, 200);
  delay(100);
  analogWrite(3, 225);
  analogWrite(5, 225);
  analogWrite(6, 225);
  delay(100);
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  delay(100);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  
  delay(270);
  
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(2, HIGH);
  delay(90);
  digitalWrite(4, LOW);
  digitalWrite(2, LOW);
  
  delay(100);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  
  delay(90);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  delay(100);
  analogWrite(3, 25);
  analogWrite(5, 25);
  analogWrite(6, 25);
  delay(100);
  analogWrite(3, 50);
  analogWrite(5, 50);
  analogWrite(6, 50);
  delay(100);
  analogWrite(3, 75);
  analogWrite(5, 75);
  analogWrite(6, 75);
  delay(100);
  analogWrite(3, 100);
  analogWrite(5, 100);
  analogWrite(6, 100);
  delay(100);
  analogWrite(3, 125);
  analogWrite(5, 125);
  analogWrite(6, 125);
  delay(100);
  analogWrite(3, 150);
  analogWrite(5, 150);
  analogWrite(6, 150);
  delay(100);
  analogWrite(3, 175);
  analogWrite(5, 175);
  analogWrite(6, 175);
  delay(100);
  analogWrite(3, 190);
  analogWrite(5, 190);
  analogWrite(6, 190);
  delay(100);
  analogWrite(3, 200);
  analogWrite(5, 200);
  analogWrite(6, 200);
  delay(100);
  analogWrite(3, 225);
  analogWrite(5, 225);
  analogWrite(6, 225);
  delay(100);
  analogWrite(3, 230);
  analogWrite(5, 230);
  analogWrite(6, 230);
  delay(100);
  analogWrite(3, 240);
  analogWrite(5, 240);
  analogWrite(6, 240);
  delay(100);
  analogWrite(3, 250);
  analogWrite(5, 250);
  analogWrite(6, 250);
  delay(100);
  analogWrite(3, 255);
  analogWrite(5, 255);
  analogWrite(6, 255);
  delay(400);
  analogWrite(3, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
}