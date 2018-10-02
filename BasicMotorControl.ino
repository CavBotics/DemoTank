
#define in1 8
#define enA 9
#define enB 10
#define in2 11
#define in3 12
#define in4 13

         
void setup()
{

   
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  
}


void loop()
{
  
  digitalWrite(enA, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

  delay (2000);

  digitalWrite(enA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(enB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, HIGH);

  delay (5000);
  
 }


