/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


int LM35 = A0;  // membuat variabel LM35 untuk pin A0 Arduino
int nilaiLM35= 0;    // membuat variabel nilaiLM35 untuk menyimpan nilai sensor
int LED1= 2;         // membuat variabel LED1 untuk Pin 2 digital
int LED2= 3;        // membuat variabel LED2 untuk Pin 3 digital
int LED3= 4;        // membuat variabel LED3 untuk Pin 4 digital

void setup(){
Serial.begin(9600);       // komunikasi serial dari Arduino ke Komputer
pinMode(LED1, OUTPUT);    // mengatur LED1 menjadi OUTPUT
pinMode(LED2, OUTPUT);    // mengatur LED2 menjadi OUTPUT
pinMode(LED3, OUTPUT);    // mengatur LED3 menjadi OUTPUT
}

void loop(){
nilaiLM35 = analogRead(LM35);    // menyimpan nilai dari LM35 ke variabel nilaiLM35
nilaiLM35 = nilaiLM35 * 0.488;   // konversi nilai dari LM35 menjadi Derajat Celcius 
Serial.println(nilaiLM35);      // menampilkan nilai dari LM35 ke Serial Monitor
delay(500);                      // memberi jeda sebanyak 500 milidetik

if (nilaiLM35 == 28)        // jika nilaiLM35 sama dengan 28
{
  digitalWrite(LED1, HIGH);  // LED1 menyala
  digitalWrite(LED2, LOW);   // LED2 mati
  digitalWrite(LED3, LOW);   // LED3 mati
}
else if (nilaiLM35 == 29)    // jika nilaiLM35 sama dengan 29
{
  digitalWrite(LED1, HIGH);  // LED1 menyala
  digitalWrite(LED2, HIGH);  // LED2 menyala
  digitalWrite(LED3, LOW);   // LED3 menyala
}

else if (nilaiLM35 == 30)   // jika nilaiLM35 sama dengan 30
{
  digitalWrite(LED1, HIGH);  // LED1 menyala
  digitalWrite(LED2, HIGH);  // LED2 menyala
  digitalWrite(LED3, HIGH);  // LED3 menyala
}

else                        // jika tidak
{
  digitalWrite(LED1, LOW);   // LED1 mati
  digitalWrite(LED2, LOW);   // LED2 mati
  digitalWrite(LED3, LOW);   // LED3 mati
}

}

