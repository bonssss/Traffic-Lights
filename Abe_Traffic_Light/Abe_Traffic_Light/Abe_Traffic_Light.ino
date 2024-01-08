
// Trafic light Abebayehu Group


// FOR ROAD 1
const int redPin = 13; 
const int yellowPin = 12;
const int greenPin = 11;


 // FOR ROAD 2
const int redPin2 = 10; 
const int yellowPin2 = 9;
const int greenPin2 = 8;


 // FOR ROAD 3
const int redPin3 = 7;     
const int yellowPin3 = 6;
const int greenPin3 = 5;

 // FOR ROAD 4
const int redPin4 = 4;   
const int yellowPin4 = 3;
const int greenPin4 = 2;

 // Green light duration in milliseconds
const int greenTime = 5000;  
// Yellow light duration in milliseconds
const int yellowTime = 1000;  

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  pinMode(redPin2, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
  pinMode(greenPin2, OUTPUT);

  pinMode(redPin3, OUTPUT);
  pinMode(yellowPin3, OUTPUT);
  pinMode(greenPin3, OUTPUT);

  pinMode(redPin4, OUTPUT);
  pinMode(yellowPin4, OUTPUT);
  pinMode(greenPin4, OUTPUT);
}

void loop() {
  // Road 1
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);

  // Road 2
  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(redPin2, HIGH);

  // Road 3
  digitalWrite(greenPin3, LOW);
  digitalWrite(yellowPin3, LOW);
  digitalWrite(redPin3, HIGH);

  // Road 4
  digitalWrite(greenPin4, LOW);
  digitalWrite(yellowPin4, LOW);
  digitalWrite(redPin4, HIGH);

  delay(greenTime);

  // Road 1
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);

  delay(yellowTime);

  // Road 1
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);

  // Road 2
  digitalWrite(greenPin2, HIGH);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(redPin2, LOW);

  delay(greenTime);

  // Road 2
  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2, HIGH);
  digitalWrite(redPin2, LOW);

  delay(yellowTime);

  // Road 2
  digitalWrite(greenPin2, LOW);
  digitalWrite(yellowPin2, LOW);
  digitalWrite(redPin2, HIGH);

  // Road 3
  digitalWrite(greenPin3, HIGH);
  digitalWrite(yellowPin3, LOW);
  digitalWrite(redPin3, LOW);

  delay(greenTime);

  // Road 3
  digitalWrite(greenPin3, LOW);
  digitalWrite(yellowPin3, HIGH);
  digitalWrite(redPin3, LOW);

  delay(yellowTime);

  // Road 3
  digitalWrite(greenPin3, LOW);
  digitalWrite(yellowPin3, LOW);
  digitalWrite(redPin3, HIGH);

  // Road 4
  digitalWrite(greenPin4, HIGH);
  digitalWrite(yellowPin4, LOW);
  digitalWrite(redPin4, LOW);

  delay(greenTime);

  // Road 4
  digitalWrite(greenPin4, LOW);
  digitalWrite(yellowPin4, HIGH);
  digitalWrite(redPin4, LOW);

  delay(yellowTime);

  // Road 4
  digitalWrite(greenPin4, LOW);
  digitalWrite(yellowPin4, LOW);
  digitalWrite(redPin4, HIGH);

  // Road 1
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);

  delay(greenTime);

  // Road 1
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);

  // Road 4
  digitalWrite(greenPin4, HIGH);
  digitalWrite(yellowPin4, LOW);
  digitalWrite(redPin4, LOW);

  delay(yellowTime);
}
