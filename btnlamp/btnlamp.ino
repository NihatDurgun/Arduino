int led=4;
int btn=5;
int btndrm;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
 btndrm=digitalRead(btn);
 if(btndrm==HIGH){
 digitalWrite(led,HIGH);
 }else{
 digitalWrite(led,LOW); 
 }
}
