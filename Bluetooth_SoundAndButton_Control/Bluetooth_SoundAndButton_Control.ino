//Bluetooth Ses Ve Buton İle Kontrol 
#define role1 8 
#define role2 9
 String deger = ""; 
 
void setup() {
  
pinMode(role1, OUTPUT);
pinMode(role2, OUTPUT);

Serial.begin(9600);


 }
void loop() {
delay(200);
 while (Serial.available()) { 
 char c = (char)Serial.read();
 deger += c;
 deger.toLowerCase();
 }
 if (deger == "odanın lambasını aç") {
digitalWrite(role2,HIGH);
 }
if (deger == "odanın lambasını kapat") {
digitalWrite(role2,LOW);


}
if (deger == "ara lambayı aç") {
digitalWrite(role1,HIGH);
}

   if (deger == "ara lambayı kapat") {
digitalWrite(role1,LOW);
}

   if (deger == "hepsini aç") {
digitalWrite(role1,HIGH);
digitalWrite(role2,HIGH);

 }


  if (deger == "hepsini kapat") {
digitalWrite(role1,LOW);
digitalWrite(role2,LOW);

 }

if (deger == "a") {
digitalWrite(role1,1);
}
if (deger == "b") {
digitalWrite(role1,0);
}
 if (deger == "c") {
digitalWrite(role2,1);
}
if (deger == "d") {
digitalWrite(role2,0);
}
deger = "";

 }
 //byFat1h
 
