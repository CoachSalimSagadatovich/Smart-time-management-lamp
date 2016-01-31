long a,cm;
int d=12;
int s; 
void setup() {
  pinMode(4,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
  pinMode(d,OUTPUT); 
}
void loop() {
 digitalWrite(3,LOW);
 delayMicroseconds(2);
 digitalWrite(3,HIGH);
 delayMicroseconds(10);
 digitalWrite(3,LOW);
 a=pulseIn(4,HIGH);
 cm=a/29/2;
 Serial.print(cm);
 Serial.print("CM");
 Serial.println();
 delay(500);   
 if (cm<40) { delay(4000);
 if (cm<40) {digitalWrite(d,HIGH);
 delay(1800000);
 digitalWrite(d,LOW); delay(600000);}}
 else if (cm<20) digitalWrite(d,LOW);
 if(cm>20) digitalWrite (d,LOW);   
    }
