// You need this to make everything work:
#include <robot.h>

// Make your robot! You can name it anything!
fred Robot();

void setup() {
    // Note: Robots arent very good listeners,
    // so to make them do anything you have to tell them directly using their name!
  fred.begin();
  // Blink the light!
  fred.blink();
  // Open the serial monitor to see what they say!
  fred.say("Time to stretch!");
  // Move forward for 3 seconds
  fred.moveForward(3);
  fred.blink();
  // Move backward for 3 seconds
  fred.moveBackward(3);
  fred.blink();
  // Turn left for 1 second
  fred.turnLeft(1);
  fred.blink();
  // Turn right for 2 seconds
  fred.turnRight(2);
  fred.blink();
  // Turn left for 1 second
  fred.turnLeft(1);
}
void loop() {
}
