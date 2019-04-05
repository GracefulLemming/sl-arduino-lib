#include "Arduino.h"
#include "MyBot.h"

void MyBot::begin() {
    rightWheel.attach(_rightWheel);
    leftWheel.attach(_leftWheel);
    arm.attach(_arm);
    Serial.begin(9600);
    pinMode(_led, OUTPUT);
    pinMode(_button, INPUT_PULLUP);
}
void MyBot::moveForward(double seconds) {
    leftWheel.write(0);
    rightWheel.write(180);
    Robot::wait(seconds);
    stop();
}
void MyBot::moveBackward(double seconds) {
    leftWheel.write(180);
    rightWheel.write(0);
    Robot::wait(seconds);
    stop();
}
void MyBot::turnRight(double seconds) {
    leftWheel.write(0);
    rightWheel.write(0);
    Robot::wait(seconds);
    stop();
}
void MyBot::turnLeft(double seconds) {
    leftWheel.write(180);
    rightWheel.write(180);
    Robot::wait(seconds);
    stop();
}
void MyBot::stop() {
    leftWheel.write(90);
    rightWheel.write(90);
}
void MyBot::lift() {
    arm.write(160);
}
void MyBot::drop() {
    arm.write(60);
}
void MyBot::blink() {
    digitalWrite(_led, HIGH);
    Robot::wait(0.1);
    digitalWrite(_led, LOW);
}
void MyBot::say(String output) {
    Serial.println(output);
}
/*void MyBot::say(int output) {
    say(String(output));
}
void MyBot::say(bool output) {
    output ? say("true") : say("false");
}*/
bool MyBot::touches() {
    pollButton();
    return _touched;
}
void MyBot::pollButton() {
    _touched = digitalRead(_button) == LOW;
}
void MyBot::wait(double seconds) {
    int time = seconds * 1000;
    while (time > 0) {
        pollButton();
        delay(_interval);
        time -= _interval;
    }
}
