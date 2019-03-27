#include "Arduino.h"
#include "Robot.h"

void Robot::begin() {
    rightWheel.attach(_rightWheel);
    leftWheel.attach(_leftWheel);
    arm.attach(_arm);
    Serial.begin(9600);
    pinMode(_led, OUTPUT);
    pinMode(_button, INPUT_PULLUP);
}
void Robot::moveForward(double seconds) {
    leftWheel.write(0);
    rightWheel.write(180);
    Robot::wait(seconds);
    stop();
}
void Robot::moveBackward(double seconds) {
    leftWheel.write(180);
    rightWheel.write(0);
    Robot::wait(seconds);
    stop();
}
void Robot::turnRight(double seconds) {
    leftWheel.write(0);
    rightWheel.write(0);
    Robot::wait(seconds);
    stop();
}
void Robot::turnLeft(double seconds) {
    leftWheel.write(180);
    rightWheel.write(180);
    Robot::wait(seconds);
    stop();
}
void Robot::stop() {
    leftWheel.write(90);
    rightWheel.write(90);
}
void Robot::lift() {
    arm.write(160);
}
void Robot::drop() {
    arm.write(60);
}
void Robot::blink() {
    digitalWrite(_led, HIGH);
    Robot::wait(0.1);
    digitalWrite(_led, LOW);
}
void Robot::say(String output) {
    Serial.println(output);
}
/*void Robot::say(int output) {
    say(String(output));
}
void Robot::say(bool output) {
    output ? say("true") : say("false");
}*/
bool Robot::touches() {
    pollButton();
    return _touched;
}
void Robot::pollButton() {
    _touched = digitalRead(_button) == LOW;
}
void Robot::wait(double seconds) {
    int time = seconds * 1000;
    while (time > 0) {
        pollButton();
        delay(_interval);
        time -= _interval;
    }
}
