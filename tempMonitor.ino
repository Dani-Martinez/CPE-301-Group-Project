#define thermistorPin 0

void setup () 
{
  Serial.begin(9600);
}

void loop () 
{
  int signal = analogRead (thermistorPin);
  float thermistor = 10000 * (1023.0 / (float) signal - 1.0);
  float temperature = (((((1.0 / (1.009249522e-03 + 2.378405444e-04 * log (thermistor) + 2.019202697e-07 * log (thermistor)*log (thermistor) *log (thermistor))) - 273.15) * 9.0) / 5.0) + 32.0);

  Serial.print("Temperature: "); 
  Serial.print(temperature);
  Serial.println(" degrees"); 

  delay(500); // need to create delay function from scratch
}
