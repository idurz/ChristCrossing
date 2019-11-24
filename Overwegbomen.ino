/*
  railroad crossing
  modified 21 Dec 2017
  by Rudi Zengers

  AHOB knipperfrequentie is 45 x per minuut
  Dus 90 perioden. 60.000 / 90 = 666
 */
#define A_Pole_Left_Side   3
#define A_Pole_Right_Side  4
#define B_Pole_Left_Side   5 
#define B_Pole_Right_Side  2
#define Led_Internal       13

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(A_Pole_Left_Side, OUTPUT);
  pinMode(A_Pole_Right_Side, OUTPUT);
  pinMode(B_Pole_Left_Side, OUTPUT);
  pinMode(B_Pole_Right_Side, OUTPUT);
  pinMode(Led_Internal, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  for (int i=0; i <= 30; i++){
  digitalWrite(A_Pole_Left_Side, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_Pole_Left_Side, HIGH);
  digitalWrite(A_Pole_Right_Side, LOW);
  digitalWrite(B_Pole_Right_Side, LOW);
  
  delay(666);              // wait for a second

  digitalWrite(A_Pole_Left_Side, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(B_Pole_Left_Side, LOW);    // turn the LED off by making the voltage LOW 
  digitalWrite(A_Pole_Right_Side, HIGH);
  digitalWrite(B_Pole_Right_Side, HIGH);

  delay(666);              // wait for a second


  }
  digitalWrite(A_Pole_Left_Side, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(B_Pole_Left_Side, LOW);    // turn the LED off by making the voltage LOW 
  digitalWrite(A_Pole_Right_Side, LOW);
  digitalWrite(B_Pole_Right_Side, LOW);

  for (int i=0; i <= 90; i++){
    digitalWrite(Led_Internal, HIGH);
    delay(500);
    digitalWrite(Led_Internal, LOW);
    delay(500);
  }     
}
