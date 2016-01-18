void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int flex1 = analogRead(A4);
  int flex2 = analogRead(A5);
  int flex3 = analogRead(A0);
  int mappedFlex2 = map(flex2, 625, 800, 0, 100);
  int mappedFlex1 = map(flex1, 940, 1000, 0, 100);
  
  if(mappedFlex1 > 40) {
    Serial.write(1);
    Serial.flush();
    delay(20);
  }
  if(mappedFlex2 > 40) {
    Serial.write(2);
    Serial.flush();
    delay(20);
  }
  Serial.println(mappedFlex1);
  delay(500);
}
