int state;
int var;
void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(2, INPUT);

}

void loop() {
  state=digitalRead(2);
  if(state==HIGH){
    var=1;
  }else{
    var=2;
  }
  switch (var) {
  case 1:
  
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
  
    break;
   
  case 2:
    // statements
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
   // delay(3000);
    //digitalWrite(8,LOW);
    //digitalWrite(7,LOW);
    break;
  
}
  
}
