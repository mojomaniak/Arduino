/*
  MERRY CHRISTMAS Blinkin

  International Morse Code
    1. The length of a dot is one unit.
    2. A dash is three units.
    3. The space between parts of the same letter is one unit.
    4. The space between letters is three units.
    5. The space between words is seven units.
 
*/

int led = 13;
int unit = 200; // time in milliseconds

void setup() {               
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);    
}

void loop() {
  // put your main code here, to run repeatedly:
    
  spaceWord(); 
  M(); E(); R(); R(); Y();
  spaceWord(); 
  C(); H(); R(); I(); S(); T(); M(); A(); S();
  spaceWord();
  
}

void dot() {
  switchLED(led, HIGH);   
  spaceParts();
  switchLED(led, LOW);
  spaceLetters();
}

void dash() {
  switchLED(led, HIGH);
  spaceLetters(); 
  switchLED(led, LOW);
  spaceLetters(); 
}

void space(){             
  spaceLetters();
}

// --
void M() {
  dash(); dash(); spaceLetters();
} 

// . 
void E() {
  dot(); spaceLetters();
} 

// .-.
void R() {
  dot();  dash(); dot(); spaceLetters();
}

// -.-- 
void Y() {
  dash(); dot(); dash(); dash(); spaceLetters();
} 

// -.-.
void C() {
  dash(); dot(); dash(); dot(); spaceLetters();
}

// ....
void H() {
  dot(); dot(); dot(); dot(); spaceLetters();
} 

// ..
void I() {
  dot(); dot(); spaceLetters();
} 

// ...
void S() {
  dot(); dot(); dot(); spaceLetters();
} 

// -
void T() {
  dash(); spaceLetters();
} 

// .-
void A() {
  dot(); dash(); spaceLetters();
}

// -...
void B() {
  dash(); dot(); dot(); dot(); spaceLetters();
}

void switchLED(int led, bool on) {
  digitalWrite(led, on);
}

// The space between parts of the same letter is one unit.
void spaceParts() {
  delay(unit); 
}

// The space between letters is three units.
void spaceLetters() {
  delay(3 * unit);
}

// The space between words is seven units.
void spaceWord() {
  delay(unit * 7);
}

