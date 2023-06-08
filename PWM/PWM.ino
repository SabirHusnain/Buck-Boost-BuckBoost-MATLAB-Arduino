int mypwm = 5;
int pot = A5;
int pwmValue;

void setup() {
  // put your setup code here, to run once:
  TCCR0B = TCCR0B & B11111000 | B00000001;
  pinMode(mypwm, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pwmValue = map(analogRead(pot), 0, 1023, 0, 255);
  analogWrite(mypwm, pwmValue);
}
