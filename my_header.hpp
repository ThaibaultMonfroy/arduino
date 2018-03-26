#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <Arduino.h>

constexpr int RedPin = 9;
constexpr int GreenPin = 10;
constexpr int BluePin=11;

void red ()
{
    analogWrite(RedPin, 100);
    analogWrite(GreenPin,0);
    analogWrite(BluePin,0);
}
void orange()
{
    analogWrite(RedPin,100);
    analogWrite(GreenPin,50);
    analogWrite(BluePin,0);
}
void yellow()
{
    analogWrite(RedPin,100);
    analogWrite(GreenPin,100);
    analogWrite(BluePin,0);
}
void green()
{
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 100);
    analogWrite(BluePin, 0);
}
void cyan()
{
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 100);
    analogWrite(BluePin, 100);
}
void blue()
{
    analogWrite(RedPin, 0);
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 100);
}
void magenta()
{
    analogWrite(RedPin, 100);
    analogWrite(GreenPin, 0);
    analogWrite(BluePin, 100);
}
#endif


