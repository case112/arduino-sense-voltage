int batteryMonitor = A4;
float analogDCValue;
float pinVoltage;
float batteryVoltage;
float ratio = 4; //This can vary

void setup() {
  Serial.begin(9600);
}

void loop() {
  analogDCValue = analogRead(batteryMonitor);
  pinVoltage = analogDCValue * 0.00488;
  batteryVoltage = pinVoltage * ratio; 
  Serial.println(batteryVoltage);
  delay(10000);
}