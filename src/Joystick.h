#include <Arduino.h>
#include <Potentiometer.h>
#include <Button.h>

class Joystick
{
    public:
        Joystick(uint8_t xPin, uint8_t yPin, uint8_t cPin, bool xReversed = false, bool yReversed = false);
        Potentiometer x = Potentiometer(1);
        Potentiometer y = Potentiometer(1);
        Button clck = Button(1);
};
