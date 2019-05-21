String input = "Eating trees is great!";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  input.toLowerCase();
  input.replace("e","3");
  input.replace("a","4");
  input.replace("i","1");

  Serial.println(input);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
/* String myString = "hello, world";

  myString.toUpperCase();

  myString.concat("lings");

  Serial.println(myString);*/
