#include <Robot.h>

Robot robot;

void setup() {
  // put your setup code here, to run once:
  robot.begin();
  robot.say("Started");
  robot.say("Moving Forward");
  robot.moveForward(1);
  robot.say("Moving Backward");
  robot.moveBackward(1);
  robot.say("Turning Right");
  robot.turnLeft(1);
  robot.say("1");
  robot.turnLeft(1);
}
void loop() {
  if (robot.touches()) {
    robot.say("Hello!");
    robot.blink();
    robot.moveForward(5);
    }
  }
