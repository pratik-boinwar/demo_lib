#include <Arduino.h>
#include "hello.h"

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  myHello();
}
