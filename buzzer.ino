void setup() {
  pinMode(5, OUTPUT); // ตั้งค่าให้ขาD0 เป็น output

}

void loop() {
  digitalWrite(5, HIGH); // ปล่อยไฟเข้าขาD0 ให้buzzer ดัง
  delay(1000); //delay 1 วิ
  digitalWrite(5, LOW); // ปล่อยไฟออกจากขา D0 
  delay(1000); //delay 1 วิ
}
