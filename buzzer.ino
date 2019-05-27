void setup() {
  pinMode(D0, OUTPUT); // ตั้งค่าให้ขาD0 เป็น output

}

void loop() {
  digitalWrite(D0, HIGH); // ปล่อยไฟเข้าขาD0 ให้buzzer ดัง
  delay(1000); //delay 1 วิ
  digitalWrite(D0, LOW); // ปล่อยไฟออกจากขา D0 
  delay(1000); //delay 1 วิ
}
