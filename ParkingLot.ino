
#define echoPin1 42 // Echo1 Pin
#define trigPin1 43 // Trigger1 Pin
#define echoPin2 40 // Echo2 Pin
#define trigPin2 41 // Trigger2 Pin
#define echoPin3 38 // Echo3 Pin
#define trigPin3 39 // Trigger3 Pin
#define echoPin4 36 // Echo4 Pin
#define trigPin4 37 // Trigger4 Pin
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int LDR1_Pin = A8;
int LDR2_Pin = A9;
int LDR3_Pin = A10;
const int ledPin1 = 52;
const int ledPin2 = 53;
const int ledPin3 = 51;
const int ledPin4 = 50;
const int ledPin5 = 49;
const int ledPin6 = 48;
const int ledPin7 = 47;
const int ledPin8 = 46;
const int ledPin9 = 45;
const int ledPin10 = 44;
int maximumRange = 10; 
int minimumRange = 0;
int kalan=0; 
long duration1,duration2,duration3,duration4,distance1,distance2,distance3,distance4; 

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);

}

void loop() {
  kalan=0;
  int val=Serial.read()-'0'; 
  lcd.setCursor(0, 0);
  ldroku();
  mesafeoku();
  lcd.setCursor(7,0);
  lcd.print(val);
  Serial.println("-------------------------------------");
}
void ldroku(){
  int LDRReading1 = analogRead(LDR1_Pin);
  //Serial.print("ldr1= ");
  //Serial.println(LDRReading1);
  int LDRReading2 = analogRead(LDR2_Pin);
 // Serial.print("ldr2= ");
  //Serial.println(LDRReading2);
  int LDRReading3 = analogRead(LDR3_Pin);
  //Serial.print("ldr3= ");
  //Serial.println(LDRReading3);
 if ((LDRReading1 < 500) ||  (LDRReading2 < 500) ||(LDRReading3 < 500) ){
    digitalWrite(ledPin9, LOW);
    digitalWrite(ledPin10, LOW);
    Serial.println("Gunduz");
    lcd.print("Gunduz");
  } else {
    digitalWrite(ledPin9, HIGH);
    digitalWrite(ledPin10, HIGH);
    //lcd.print("                 ");
    Serial.println("Gece");
    lcd.print("Gece        ");
  }
  
  //delay(2000);
}

void mesafeoku(){
   snsr1oku();
   snsr2oku();
   snsr3oku();
   //snsr4oku();
   lcd.setCursor(0, 1);
   lcd.print("Kalan Park = ");
   lcd.print(kalan);
   //Serial.println(kalan);
    //delay(2000); 
}
void snsr1oku(){
  digitalWrite(trigPin1, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1/58.2; 
  if (distance1 >= maximumRange || distance1 <= minimumRange)
    {
      Serial.println("1.Park Yeri Bos");
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      kalan=kalan+1;
      //Serial.println(kalan);
    }
    else 
    {
      
      Serial.println("1.Park Yeri Dolu");
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      
      //Serial.println(kalan);
    }
}
void snsr2oku(){
  digitalWrite(trigPin2, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2/58.2; 
  if (distance2 >= maximumRange || distance2 <= minimumRange)
    {
      Serial.println("2.Park Yeri Bos");
       digitalWrite(ledPin3, HIGH);
      digitalWrite(ledPin4, LOW);
      kalan=kalan+1;
      //Serial.println(kalan);
    }
    else 
    {
      Serial.println("2.Park Yeri Dolu");
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, HIGH);
      
      //Serial.println(kalan);
    }
}
void snsr3oku(){
  digitalWrite(trigPin3, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
  distance3 = duration3/58.2; 
  if (distance3 >= maximumRange || distance3 <= minimumRange)
    {
      Serial.println("3.Park Yeri Bos");
      digitalWrite(ledPin5, HIGH);
      digitalWrite(ledPin6, LOW);
      kalan=kalan+1;
      //Serial.println(kalan);
    }
    else 
    {
     Serial.println("3.Park Yeri Dolu");
      digitalWrite(ledPin5, LOW);
      digitalWrite(ledPin6, HIGH);
      
      //Serial.println(kalan);
    }
}
void snsr4oku(){
  digitalWrite(trigPin4, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin4, LOW);
  duration4 = pulseIn(echoPin4, HIGH);
  distance4 = duration4/58.2; 
  if (distance4 >= maximumRange || distance4 <= minimumRange)
    {      
      Serial.println("4.Park Yeri Bos");
      digitalWrite(ledPin7, HIGH);
      digitalWrite(ledPin8, LOW);
      kalan=kalan+1;
     // Serial.println(kalan);
    }
    else 
    {
      Serial.println("4.Park Yeri Dolu");
      digitalWrite(ledPin7, LOW);
      digitalWrite(ledPin8, HIGH);
      
      //Serial.println(kalan);
    }
}

