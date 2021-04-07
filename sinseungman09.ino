#include <IRremote.h>
//전역변수 설정
int blue = 2;
int green = 3;
int yellow = 4;
int red = 5;
int RECV_PIN = 11;
//IR라이브러리 객체
IRrecv irrecv(RECV_PIN);
decode_results results;//IR신호 복호화(역할 십진수->아스키코드 변환하는 비슷한역할)

void setup() {
  // 전원 on시 1회만 실행
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);

  Serial.begin(9600);
  Serial.println("IF input Enabled");
  irrecv.enableIRIn();
  Serial.println("IR input Starting");
}

void loop() {
  // 전원 on시 무한반복
  if(irrecv.decode(&results)){
    unsigned int value = results.value;
    Serial.println(value);
    switch(value) {
      case 34935:
      digitalWrite(blue, HIGH);
      delay(500);
      digitalWrite(blue, LOW);
      break;
      case 18615:
      digitalWrite(green, HIGH);
      delay(500);
      digitalWrite(green, LOW);
      break;
      case 10455:
      digitalWrite(yellow, HIGH);
      delay(500);
      digitalWrite(yellow, LOW);
      break;
      case 43095:
      digitalWrite(red, HIGH);
      delay(500);
      digitalWrite(red, LOW);
      break;
    }
    irrecv.resume();
  }
}