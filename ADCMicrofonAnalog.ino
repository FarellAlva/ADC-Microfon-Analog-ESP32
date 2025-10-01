const int micPin = 34;   // Pin ADC mikrofon
const int sampleRate = 8000; // 8 kHz
const int bufferSize = 512;  // sampel per batch

int buffer[bufferSize];

void setup() {
  Serial.begin(115200);
}

void loop() {
 
  unsigned long startMicros = micros();
  for (int i = 0; i < bufferSize; i++) {
    buffer[i] = analogRead(micPin); // baca ADC
    
    while(micros() - startMicros < (1000000UL / sampleRate) * (i + 1)) {

    }
  }

  // serial monitor
  for (int i = 0; i < bufferSize; i++) {
    Serial.println(buffer[i]);
  }

  Serial.println("----- Batch selesai -----");
  delay(500); // delay per batch
}
