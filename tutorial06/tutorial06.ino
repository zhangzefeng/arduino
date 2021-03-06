int buttons[6] = {2,2,2,2,2,2};
int notes[] = {262,294,330,349};
int pin8 = 16;
void setup() {
Serial.begin(115200);
}

void loop() {
Serial.println("Program Started");
int keyVal = analogRead(A0);
Serial.println(keyVal);
if(keyVal == 1023){
tone(pin8, notes[0]);
}
else if(keyVal >= 990 && keyVal <= 1010){
tone(pin8,notes[2]);
}
else if(keyVal >= 505 && keyVal <= 515){
tone(pin8, notes[3]);
}
else{
noTone(pin8);
}
}
