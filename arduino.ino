
/*    K3KDW OpenPTT
 *    Arduino Push To Talk USB Serial controller
 *    Translates serial commands "1" and "0" from Direwolf, FLDigi, JS8Call, and others to trigger PTT
 *    
 *    Roe Gammon
 *    Oct 01 2021
 *    
 *    Special thanks to Andrew Rohne, AC8JO, for his code "Arduino PTT Rig Interface" which inspired this project
 */   

char Cmd = 0; // for incoming serial data command - Will be "1" for PTT ON or "0" for PTT OFF
int LED=2;    //Set LED indicator pin
int PTT=3;    //Set PTT pin

void setup() {
  Serial.begin(115200); // opens serial port, sets data rate to 9600 bps
  pinMode (LED,OUTPUT);
  pinMode (PTT,OUTPUT);
}

void loop() {
  while (Serial.available() > 0) {
    Cmd = Serial.read();
    Serial.println(Cmd);
     
    if (String(Cmd) == "1"){
      digitalWrite(LED,HIGH);
      digitalWrite(PTT,HIGH);
      }
      
      if (String(Cmd) == "0"){
        digitalWrite(LED,LOW);
        digitalWrite(PTT,LOW);
      }
 }
}
