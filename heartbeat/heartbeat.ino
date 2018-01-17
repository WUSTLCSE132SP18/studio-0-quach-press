void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
int n=0;
void loop() {
  digitalWrite(13, HIGH);
  //Serial.println( String(n) + " sec have elapsed");
  //n++;
  delay(200);
  digitalWrite(13, LOW);
  delay(800);
  Serial.println("Current time: " + String(millis()));
}
