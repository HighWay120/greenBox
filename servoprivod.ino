#include <Servo.h> //используем библиотеку для работы с сервоприводом

Servo servo; //объявляем переменную servo типа Servo

void setup() //процедура setup
{
Serial.begin(9600);
pinMode(2, OUTPUT);
servo.attach(2); //привязываем привод к порту 10
}

void loop() //процедура loop
{
servo.write(180);
delay(500);
servo.write(0);
delay(500);
//Serial.println("Stopped");
//servo.write(93);
//delay(1000);
//servo.write(80);
//delay(1000);
//servo.write(90);
//delay(1000);
}
