int sensor = 0;

int btn_one = 0;

int btn_to = 0;

int LOW2 = 0;

int push_one = 0;

int i = 0;

int push_to = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(9, HIGH);

  sensor = digitalRead(2);
  btn_one = digitalRead(10);
  btn_to = digitalRead(11);

  if (btn_one == LOW) {
    push_one = 0;
  }

  if (btn_to == LOW) {
    push_to = 0;
  }
  delay(10); // Delay a little bit to improve simulation performance
}