int led = 4;
int brillo = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (brillo =0; brillo<256; brillo++)
  {
    analogWrite(led, brillo);
    delay(10);
  }

  for (brillo = 255; brillo>=0; brillo--)
  {
    analogWrite(led, brillo);
    delay(10);
  }
}
