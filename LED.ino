// 面包板坏了或者电阻太大？

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
    digitalWrite(yellow, LOW);
    delay(2000);
    digitalWrite(green, HIGH);
    digitalWrite(green, LOW);
    delay(2000);
    digitalWrite(red, HIGH);
    digitalWrite(red, LOW);
    delay(2000);
}