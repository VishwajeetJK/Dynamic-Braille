#include <Servo.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#define TxD 12
#define RxD 13

SoftwareSerial serial = SoftwareSerial(0,1);
SoftwareSerial bluetoothSerial(TxD,RxD);

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
String mystring;
int pos = 0; // variable to store the servo position
void up(Servo servo)
{
bluetoothSerial.begin(9600);
Serial.begin(9600);
for (pos = 0; pos <= 90; pos += 1)
{
servo.write(pos);
delay(15);
} }
void setup() {
serial.begin(9600);
servo1.attach(3);
servo2.attach(5);
servo3.attach(6);
servo4.attach(9);
servo5.attach(10);
servo6.attach(11);
}void a()
{
up(servo1);
//delay(10000);47
}
void b()
{
up(servo1);
up(servo3);
//delay(10000);
}
void c()
{
up(servo1);
up(servo2);
//delay(10000);
}
void d()
{
up(servo1);
up(servo2);
up(servo4);
//delay(10000);
}
void e()
{
up(servo1);
up(servo4);
//delay(10000);
}
void f()
{
up(servo1);
up(servo2);
up(servo3);
//delay(10000);
}
void g()
{
up(servo1);
up(servo2);
up(servo3);
up(servo4);
}
void h()
{
up(servo1);
up(servo3);
up(servo4);}
void i()
{
up(servo2);
up(servo3);
}
void j()
{
up(servo1);
up(servo5);
up(servo4);
//delay(10000);
}
void u()
{
up(servo1);
up(servo5);
up(servo6);
//delay(10000);
}
void v()
{
up(servo1);
up(servo3);
up(servo5);
up(servo6);
//delay(10000);
}
void w()
{
up(servo3);
up(servo2);
up(servo4);
up(servo6);
//delay(10000);
}
void x()
{
up(servo1);
up(servo2);
up(servo5);
up(servo6);
//delay(10000);
}
void y()
{
up(servo1);
up(servo5);
up(servo2);
up(servo4);
up(servo6);
//delay(10000);
}void z()
{
up(servo1);
up(servo5);
up(servo4);
up(servo6);
//delay(10000);
}
void k()
{
up(servo1);
up(servo5);
//delay(10000);
}
void l()
{
up(servo1);
up(servo3);
up(servo5);
//delay(10000);
}
void M()
{
up(servo1);
up(servo2);
up(servo5);
//delay(10000);
}
void N()
{
up(servo1);
up(servo2);
up(servo4);
up(servo5);
//delay(10000);
}
void o()
{
up(servo1);
up(servo5);
up(servo4);
//delay(10000);
}
void p()
{
up(servo1);
up(servo2);
up(servo3);
up(servo5);
//delay(10000);
}
void q()
{
up(servo1);
up(servo2);up(servo4);
up(servo3);
up(servo5);
//delay(10000);
}
void r()
{
up(servo3);
up(servo1);
up(servo4);
up(servo5);
//delay(10000);
}
void s()
{
up(servo3);
up(servo2);
up(servo5);
//delay(10000);
}
void T()
{
up(servo3);
up(servo2);
up(servo4);
up(servo5);
//delay(10000);
}

void loop()
{
servo2.write(0);
servo3.write(0);
servo1.write(0);
servo4.write(0);
servo5.write(0);
servo6.write(0);
if(bluetoothSerial.available()>0)
{
mystring = bluetoothSerial.read();
for (int ii = 0; ii < 25; ii++)
{
switch (mystring[ii])
{
case 'a':
a();
break;
case 'b':
b();
break;
case 'c':
c();
break;
case 'd':
d();
break;
case 'e':
e();
break;
case 'f':
f();
break;case 'g':
g();
break;
case 'h':
h();
break;
case 'i':
i();
break;
case 'j':
j();
break;
case 'k':
k();
break;
case 'l':
l();
break;
case 'm':
M();
break;
case 'n':
N();
break;
case 'o':
o();
break;
case 'p':
p();
break;
case 'q':
q();
break;
case 'r':
r();
break;
case 's':
s();
break;
case 't':
T();
break;
case 'u':
u();
break;
case 'v':
v();
break;
case 'w':
w();
break;
case 'x':
x();
break;
case 'y':
y();
break;
case 'z':
z();
break;
default:
break;}
delay(5000);
servo2.write(0);
servo3.write(0);
servo1.write(0);
servo4.write(0);
servo5.write(0);
servo6.write(0);
}
}
}