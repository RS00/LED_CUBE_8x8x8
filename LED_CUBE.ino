//COLUMNS
#define  C0 2
#define  C1 3
#define  C2 4
#define  C3 5
#define  C4 6
#define  C5 7
#define  C6 8
#define  C7 9
//CONTROL
#define SER 10
#define SRCK 11
#define NOT_SRCK 12
#define RCK 13
#define NOT_OE 14
//LEVEL
#define LEVEL A0

void setup() {
  // put your setup code here, to run once:
  pinMode(C0, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(C3, OUTPUT);
  pinMode(C4, OUTPUT);
  pinMode(C5, OUTPUT);
  pinMode(C6, OUTPUT);
  pinMode(C7, OUTPUT);
  pinMode(SER, OUTPUT);
  pinMode(SRCK, OUTPUT);
  pinMode(NOT_SRCK, OUTPUT);
  pinMode(RCK, OUTPUT);
  pinMode(NOT_OE, OUTPUT);
  pinMode(LEVEL, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
