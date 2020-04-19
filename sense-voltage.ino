
// ADCVal = analogRead(batMonPin); // read the voltage on the divider on pin A4
// pinVoltage = ADCVal * 0.00488; // Calculate the voltage on the A/D pin
// A reading of 1 for the A/D = 0.00488mV
// if we multiply the A/D reading by 0.00488 then
// we get the voltage on the pin.

// batteryVoltage = pinVoltage * Ratio; // Use the Ratio calculated for the voltage divider
// to calculate the battery voltage, Ratio = Vin / Vout

int batMonPin = A4;
float ADCVal;
float pinVoltage;
float batteryVoltage;
float Ratio = 4.00;

void setup() {
  // Initialize a serial connection for reporting values to the host
  Serial.begin(9600);
}

void loop() {
  ADCVal = analogRead(batMonPin);
  pinVoltage = ADCVal * 0.00488;
  batteryVoltage = pinVoltage * Ratio; 
  Serial.println(batteryVoltage);

  // Sense every 10 seconds
  delay(10000);
}