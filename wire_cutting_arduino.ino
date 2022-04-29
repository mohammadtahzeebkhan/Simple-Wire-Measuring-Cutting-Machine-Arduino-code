const int stepPin=5;//pull
const int dirPin=3;
const enPin=8;
float numstep=110//set value for 1cm   in my case 110 pluse give me 1cm wire 
float i=0;
int length=10; // 1cmxlength=> 1cmx10=> 10cm wire as OUTPUT 
void setup(){
    Serial.begin(9600);
    pinMode(stepPin,OUTPUT);
    pinMode(dirPin,OUTPUT);
    pinMode(enPin,OUTPUT);

    digitalWrite(dirPin,LOW);
    digitalWrite(enPin,HIGH);

}

void loop(){
    if(i<numstep*length){
        for(int x=0;x<numstep;x++){

            digitalWrite(stepPin,LOW);
            delayMicroseconds(400);
             digitalWrite(stepPin,HIGH);
            delayMicroseconds(400);

            i++;
        }
    }
}
