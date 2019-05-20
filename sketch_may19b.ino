int a = 11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  if(a<5){

    Serial.println("It is less than 5.");
    
    }
    else if (a==5){

                Serial.println("It is equal to  5.");

      
      }
    else{
          Serial.println("It is greater than or equal to  5.");

      }

}

void loop() {
  // put your main code here, to run repeatedly:

}
