int btna,btndrma;// burda göz kırpcak
int btnb,btndrmb;// burda random göz tıklaması yapıcak
int btnc,btndrmc;//burda kara şimsek gibi yanıp sönecek
int rled,bled,gled;
int numbers;
void tanimla(){
 btna=1;
 btnb=2;
 btnc=3;

 rled=9;
 bled=8;
 gled=10; 
  
}

void setup() {
 tanimla();
 pinMode(btna,INPUT);
 pinMode(btnb,INPUT);
 pinMode(btnc,INPUT);
 pinMode(rled,OUTPUT);
 pinMode(bled,OUTPUT);
 pinMode(gled,OUTPUT);
}

void loop() {
  btndrma=digitalRead(btna);
  btndrmb=digitalRead(btnb);
  btndrmc=digitalRead(btnc);
  if(btndrma == HIGH && btndrmb != HIGH && btndrmc != HIGH){
  digitalWrite(rled,HIGH);
  digitalWrite(bled,HIGH);
  digitalWrite(gled,HIGH);
  delay(1000);
  digitalWrite(rled,LOW);
  digitalWrite(gled,LOW);
  digitalWrite(bled,LOW);  
  delay(1000);
  }else if(btndrmb== HIGH  && btndrma != HIGH && btndrmc != HIGH){
  numbers = random(7,11);  
  digitalWrite(numbers,HIGH);
  delay(1000);
  digitalWrite(numbers,LOW);
  }else if(btndrmc== HIGH && btndrma !=HIGH && btndrmb != HIGH){
  digitalWrite(rled,HIGH);
  digitalWrite(bled,HIGH);
  digitalWrite(gled,HIGH);  
  }  
  else{
  digitalWrite(rled,LOW);
  digitalWrite(bled,LOW);
  digitalWrite(gled,LOW); 
  }
}
