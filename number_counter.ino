void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
 
}

void loop() {
  int n,p,q,r,s;
  for(n=0; n<=9; n++){
    p=n%2;
    q=(n/2)%2;
    r=(n/4)%2;
    s=(n/8)%2;
    digitalWrite(5,s);
    digitalWrite(4,r);
    digitalWrite(3,q);
    digitalWrite(2,p);
    delay(1000);
  }
}