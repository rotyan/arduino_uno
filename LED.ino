// 面包板坏了或者电阻太大？

int yellow = 13;
int green = 12;

void setup() {
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    
}

void loop() {
    digitalWrite(green, HIGH);
    delay(2000);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
}