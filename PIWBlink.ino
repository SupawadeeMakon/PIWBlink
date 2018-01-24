//ส่วนของการประกาศตัวแปร
int myOutput = D0;
int myDelay=2000;



//ส่วนของ Setup คือ ส่วนที่กำหนดค่าคงที ที่จะใช้ในโค้ด จะทำงานครั้งแรกครั้งเดียว
void setup() {
  

//  ส่วนที่กำหนดการส่งสัญญาณ digital Out จากขาของ Node
  pinMode(myOutput, OUTPUT);



}

// ส่วนของ loop จะทำงาน วนไปมา ตามสัญญาณนาฬิกา Digital Logic ตลอดเวลา
void loop() {
  digitalWrite(myOutput, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelay);                       // wait for a second
  digitalWrite(myOutput, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelay);                       // wait for a second
}
