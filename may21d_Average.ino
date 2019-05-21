const int len = 10;
int a[len] = {0, 2, -4, 12, -52, 42, -96, 7, -23, 99};
 
void setup() {
 
  // Declare a local variable to store our average
  float avg = 0;
 
  // Use a for loop to step through each element, adding it to avg
  for ( int i = 0; i < len; i++ ) {
    avg += a[i];
  }
 
  // Divide by the length of the array to determine the average
  avg /= len;
 
  // Initialize the serial port and print the answer
  Serial.begin(9600);
  Serial.println(avg, 4);
}
 
void loop() {
  // put your main code here, to run repeatedly:
}
