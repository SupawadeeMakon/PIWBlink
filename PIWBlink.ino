//ส่วนของการประกาศตัวแปร
int myOutput = D7;
int myOutput2 = D8;

int myDelay=3000;//ค่าของเวลาจะมีหน่วยเป็น มิลลิวินาที



//ส่วนของ Setup คือ ส่วนที่กำหนดค่าคงที ที่จะใช้ในโค้ด จะทำงานครั้งแรกครั้งเดียว
void setup() {
  

//  ส่วนที่กำหนดการส่งสัญญาณ digital Out จากขาของ Node
  pinMode(myOutput, OUTPUT);
  pinMode(myOutput2, OUTPUT);


}

// ส่วนของ loop จะทำงาน วนไปมา ตามสัญญาณนาฬิกา Digital Logic ตลอดเวลา
void loop() {

//  for myOutput
  digitalWrite(myOutput, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelay);                       // wait for a second
  digitalWrite(myOutput, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelay); 

  //  for myOutput2
  digitalWrite(myOutput2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelay);                       // wait for a second
  digitalWrite(myOutput2, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelay); 
  
  
  
  
}//end of Loop
