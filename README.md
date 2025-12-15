# ADC-Microfon-Analog-ESP32
ADC Microfon Analog dengan ESP32

Konsep dasar: Mikrofon analog menghasilkan tegangan sesuai amplitudo suara. Tegangan ini masuk ke ADC → menjadi data digital. 

Langkah-langkah di ESP32/STM32:
1. Hubungkan mikrofon analog (misalnya MAX4466) ke pin ADC.
2. Lakukan sampling cepat (misalnya 8 kHz). 
3. Simpan data ke buffer. 
4. Tampilkan di serial monitor atau grafik.
