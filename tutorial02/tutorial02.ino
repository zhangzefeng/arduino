int switchState = 0;
int pin2 = 4;
int pin3 = 12;
int pin4 = 2;
int pin5 = 5;

void setup() {
  Serial.begin(115200);
  Serial.println("started3");
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin2,INPUT);
}

void loop() {
  switchState = digitalRead(pin2);

  if (switchState == LOW) {
    Serial.println("button is not pressed");
    // the button is not pressed
    digitalWrite(pin3, HIGH); // green LED
    digitalWrite(pin4, LOW); // red LED
    digitalWrite(pin5, LOW); // red LED
  } else {
    Serial.println("button is pressed");
    // the button is pressed
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, HIGH);
    delay(250); // wait for a quarter second
    // toggle the LEDs
    digitalWrite(pin4, HIGH);
    digitalWrite(pin5, LOW);
    delay(250); // wait for a quarter second
  }
}
