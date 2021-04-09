
int yellow = 13;
int green = 12;
int red = 11;

void setup() {
    pinMode(green, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(red, OUTPUT);
    Serial.begin(9600);
    Serial.print("test1\n");
    delay(2000);
    Serial.println("test2;");
    delay(2000);
}

void loop() {

    Serial.print("test3\n");
    delay(2000);
    Serial.println(yellow);
    delay(2000);
    

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