//Ses İle Bluetooth Lamba Kontrol byFat1h
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
deger = "";

 }
 //byFat1h
 
