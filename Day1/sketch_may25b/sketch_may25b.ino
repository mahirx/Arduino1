int led=13, input=3;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(input, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(input, HIGH)){
    digitalWrite(led, HIGH);    
  }

}
