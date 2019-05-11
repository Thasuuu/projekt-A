
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}


const int LOCKED = 1;
const int WAIT_FOR_ONE = 2;
const int WAIT_FOR_TO = 3;
const int CHEKING = 4;
const int UNLOCKED = 5;
int state = 0;

int push_one = 0;
int push_to = 0;

void loop()
{
 

 int sensor = digitalRead(2);
 int btn_one = digitalRead(10);
 int btn_to = digitalRead(11);

  if (btn_one == LOW) {
    push_one = 0;
  }

  if (btn_to == LOW) {
    push_to = 0;
  }
  
  switch (state) {
      
    case LOCKED:
        digitalWrite(13, HIGH);
      
      if(sensor == HIGH) {
        digitalWrite(7, LOW);
        state = WAIT_FOR_ONE;
      }
      break;
      
    case WAIT_FOR_ONE:
      digitalWrite(12,HIGH);
      if ((btn_one == HIGH) && (!push_one)) {
        push_one = 1;
        digitalWrite(12, LOW)
     delay(200); // Delay a little bit to improve simulation performance
        state = WAIT_FOR_TO;
}
      
      
        if ((btn_to == HIGH) && (!push_to)) {
        push_to = 1;
        digitalWrite(12, LOW)
     delay(200); // Delay a little bit to improve simulation performance
        state = WAIT_FOR_TO;
          
        }
      
      break;
      
      
  }
}

     
          
          
