int my_array[10];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for(int i = 0 ; i<10 ; i++){
    my_array[i] = i*5 ;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(my_array[3] + 3);
    for(int i = 0 ; i<10 ; i++){
    Serial.print(my_array[i]);
    Serial.print(" ");
  }
  Serial.println();
  delay(1000);
}
