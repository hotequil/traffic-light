int i = 2;
int t = 6000;

void setup(){
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  digitalWrite(i, HIGH);
  delay(t);
  
  digitalWrite(i, LOW);
  delay(0);

  switch(i){
    case 2:
      i = 4;
      t = 2000;
      break;
    case 4:
      i = 13;
      t = 8000;
      break;
    default:
      i = 2;
      t = 6000;
  }
}
