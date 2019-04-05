#ifndef MyBot_h
#define MyBot_h
#include "Arduino.h"
#include "Servo.h"

class MyBot
{
private:
    Servo leftWheel;
    Servo rightWheel;
    Servo arm;
    
    int _leftWheel = 11;
    int _rightWheel = 10;
    int _arm = 9;
    int _led = 13;
    int _button = 6;
    
    int _interval = 1;
    bool _touched = false;
    
    
public:
    MyBot() = default;
    ~MyBot() = default;
    
    void begin();
    void moveForward(double seconds);
    void moveBackward(double seconds);
    void turnRight(double seconds);
    void turnLeft(double seconds);
    void stop();
    
    void lift();
    void drop();
    
    void wait(double seconds);
    
    void blink();
    void say(String output);
    //void say(double output);
    //void say(bool output);
    
    bool touches();
    
    void pollButton();
};

#endif
