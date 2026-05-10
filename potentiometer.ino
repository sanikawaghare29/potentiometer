#define pot A1

void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
}
  
  void loop() {
 int x = analogRead(pot);
 Serial.print("POT READING =");
 Serial.println(x);


  }