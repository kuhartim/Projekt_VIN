#include <Joystick.h>

const int HANDBRAKE_INPUT = A3

void setup() {
    pinMode(HANDBRAKE_INPUT, INPUT);
    Joystick.begin();
}

void loop() {
    int signal = analogRead(HANDBRAKE_INPUT);
    int mapped = map(signal, 495, 910, 0, 255);
    Joystick.setThrottle(mapped);
}