#define velMotor 3
#define mla 4
#define mlb 5
#define tmp 3000
int vel = 0;

void setup() {
  pinMode (velMotor,OUTPUT);
  pinMode (mla,OUTPUT);
  pinMode (mlb,OUTPUT);
  digitalWrite (mla,LOW);
  digitalWrite (mlb,LOW);
  analogWrite (velMotor,vel);
}

void loop() {
  vel=225;
  analogWrite (velMotor,vel);

  digitalWrite(mla, LOW);
  digitalWrite(mlb, HIGH);
  delay(tmp);

  digitalWrite(mla, LOW);
  digitalWrite(mlb, LOW);
  delay(tmp);

  digitalWrite(mla, HIGH);
  digitalWrite(mlb, LOW);
  delay(tmp);
}