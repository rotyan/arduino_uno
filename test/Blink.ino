//Blink
// Ctrl+Alt+U 编译并上传(运行)
// Ctrl+Alt+R 进行编译验证
// 烧录：简单的说就是让微型计算机开机能执行你的程序的过程就是程序烧录。
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
