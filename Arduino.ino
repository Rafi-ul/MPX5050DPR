#define SENSOR_PIN A0

void setup() {
  Serial.begin(9600);
  Serial.println("mpx5050dp Library");
}

void loop() {
  int adc_value = analogRead(SENSOR_PIN);
  float pressure = adc_value/100.0;
  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.println(" kPa");
  delay(100);
}
