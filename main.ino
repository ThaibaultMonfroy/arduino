//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup()
{
    pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
    digitalWrite(6, HIGH);
    delay(3000);
    digitalWrite(6, LOW);
    delay(3000);
}
