//！高电平和低电平之前设置delay，不然看不见灯亮

int yellow = 13;
int green = 12;
int red = 11;

void setup() {
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
}

void loop() {
    digitalWrite(yellow, HIGH);
    delay(2000);
    digitalWrite(yellow, LOW);
    
    digitalWrite(green, HIGH);
    delay(2000);
    digitalWrite(green, LOW);
    
    digitalWrite(red, HIGH);
    delay(2000);
    digitalWrite(red, LOW);
    
}