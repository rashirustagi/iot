int led=2;
int led1=3;
int led2=4;
int led3=5;

int ldr=A5;
int ir=A0;
int ir1=A1;
int ir2=A2;
int ir3=A3;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

  pinMode(ldr,INPUT);
  pinMode(ir,INPUT);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(ir3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println(analogRead(A5));
int ldrStatus=analogRead(ldr);
if(ldrStatus<=200)
{
  analogWrite(led,255/100);
  analogWrite(led1,255/100);
  analogWrite(led2,255/100);
  analogWrite(led3,255/100);
   Serial.println(analogRead(A0));
   int val=analogRead(A0);
   int val1=analogRead(A1);
   int val2=analogRead(A2);
   int val3=analogRead(A3);
   if(val>50)
  {Serial.println("hello");
    digitalWrite(led,HIGH);
  delay(200);
  analogWrite(led,255/100);
  }
   if(val1>50)
  {digitalWrite(led1,HIGH);
  delay(500);
  analogWrite(led1,255/100);
  }
   if(val2>50)
  {digitalWrite(led2,HIGH);
  delay(500);
  analogWrite(led2,255/100);
  }
   if(val3>50)
  {digitalWrite(led3,HIGH);
  delay(500);
  analogWrite(led3,255/100);
  }
}
else
{
  digitalWrite(led,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
}
}


