int relay = 5;
char message;
void setup() {
 Serial.begin(9600);
 pinMode(relay,OUTPUT);


}

void loop() {
if (Serial.available()>0){
  message= Serial.read();
}
if (message=="E"){
   digitalWrite(relay,HIGH);
   }else if(message== "A"){
  digitalWrite(relay,LOW);
}
}
