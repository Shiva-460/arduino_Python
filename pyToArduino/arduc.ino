int con=1;;
String str;
void setup() {
  Serial.begin(9600);
}
void loop() {
  if(con==1){
    
    
    Serial.println("arduino,hi");
    delay(1000);
    con++;
    
  }
   delay(1000);
  while(Serial.available()){
    delay(30);
    if(con==2){
      String c=Serial.readStringUntil('\n');
      Serial.println(c);
      delay(1000);
      con++;
    }
  }
}
