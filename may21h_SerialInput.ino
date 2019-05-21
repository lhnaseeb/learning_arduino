void setup(){
  Serial.begin(9600);
  Serial.setTimeout(200);
}

void loop(){
  String firstName = "";
  String lastName = "";

  Serial.println("First Name?");
  
  while (firstName.equals("")){
    firstName=Serial.readString();
  }
  
  Serial.println("Last Name?");
  
  while (lastName.equals("")){
    lastName=Serial.readString();
  }

  String fullName = String(firstName + lastName);
  
  Serial.print("Full Name: ");
  Serial.print(fullName);



}
//Lesson
/*void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(200);
}

void loop() {
  // put your main code here, to run repeatedly:
  String myString = "";
  long int my_int;

  while( myString.equals("") ){
    myString = Serial.readString();
  }

  my_int = myString.toInt();

  Serial.println(my_int * 2);

}*/
