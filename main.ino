//  Copyright (c) 2018 Antoine Tran Tan
//

#include "Arduino.h"
#include "my_header.hpp"

// the setup function runs once when you press reset or power the board
void setup()
{
    pinMode(RedPin,OUTPUT);
    pinMode(GreenPin,OUTPUT);
    pinMode(BluePin,OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{

    static int potPosition;

    potPosition = analogRead(A1);
    if (potPosition > 0 && potPosition <= 150)
    {
        magenta();
    }
    if (potPosition > 150 && potPosition <= 300)
    {
        green();
    }
    if (potPosition > 300 && potPosition <= 450)
    {
        blue();
    }
    if (potPosition > 450 && potPosition <= 600)
    {
        red();
    }
    if (potPosition > 600 && potPosition <= 750)
    {
        cyan();
    }
    if (potPosition > 750 && potPosition <= 900)
    {
        yellow();
    }
    if (potPosition > 900)
    {
        orange();
    }
}
