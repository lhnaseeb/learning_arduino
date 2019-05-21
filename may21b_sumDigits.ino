void setup() {
 
  Serial.begin(9600);
 
  Serial.println(sumDigits(0));     // Should be 0
  Serial.println(sumDigits(2));     // Should be 2
  Serial.println(sumDigits(28));    // Should be 10
  Serial.println(sumDigits(504));   // Should be 9
  Serial.println(sumDigits(2048));  // Should be 14
  Serial.println(sumDigits(32767)); // Should be 25
}
 
void loop() {
  // Do nothing
}
 
int sumDigits(int x) {
 
  // Define a local variable
  int sum = 0;
 
  // Find how many times 10000 goes into our number and add that
  // to our sum. Multiply the number of times 10000 goes into our
  // number by 10000 and subtract that from our number.
  sum += x / 10000;
  x -= (x / 10000) * 10000;
 
  // Repeat the same thing for 1000.
  sum += x / 1000;
  x -= (x / 1000) * 1000;
  
  // Repeat the same thing for 100.
  sum += x / 100;
  x -= (x / 100) * 100;
 
  // Repeat the same thing for 10.
  sum += x / 10;
  x -= (x / 10) * 10;
 
  // No need for any fancy math. The remaining value in our x
  // variable should be the value of the ones digit.
  sum += x;
 
  return sum;
}
