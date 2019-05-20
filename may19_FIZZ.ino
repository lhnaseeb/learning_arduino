int fizzler = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if ( (fizzler % 3) == 0 ){
    Serial.println("FIZZ");
  }
  else {
        Serial.println(fizzler);
  }
  fizzler++;
  delay(500);
  

}
