int led1 = 13;
int led2 = 12;
int led3 = 11;
int btn = 10;
int sira = 1;
bool btndurum = false;
bool yandi = false;

void setup() {
  // initialize the digital pin as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(btn, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  btndurum = digitalRead(btn);
  if(btndurum == HIGH){
    if(sira == 1){
        digitalWrite(led3,LOW);
      digitalWrite(led1,HIGH);
        yandi = true;
    }
    else if(sira == 2){
        digitalWrite(led1,LOW);
        digitalWrite(led2,HIGH);
        yandi = true;
    }
    else if(sira == 3){
        digitalWrite(led2,LOW);
        digitalWrite(led3,HIGH);
        yandi = true;
    }
  }else if(btndurum == LOW){
    digitalWrite(led3,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led1,LOW);
    
    if(yandi && sira == 1){
        sira = 2;
        yandi = false;
    }
    else if(yandi && sira == 2){
        sira =3;
        yandi = false;
    }
    else if(yandi && sira == 3){
        sira =1;
        yandi = false;
    }
    
  }
}
