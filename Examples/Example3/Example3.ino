// You need this to make everything work:
#include <robot.h>

// Make your robot! You can name it anything!
alice Robot();

void setup() {
    // Note: Robots arent very good listeners,
    // so to make them do anything you have to tell them directly using their name!
  alice.begin();
  // Blink the light!
  alice.blink();
  // Open the serial monitor to see what they say!
  alice.say("Time to stretch!");
  // Move forward for 3 seconds
  alice.moveForward(3);
  alice.blink();
  // Move backward for 3 seconds
  alice.moveBackward(3);
  alice.blink();
  // Turn left for 1 second
  alice.turnLeft(1);
  alice.blink();
  // Turn right for 2 seconds
  alice.turnRight(2);
  alice.blink();
  // Turn left for 1 second
  alice.turnLeft(1);
}

void loop() {
alice.moveForward(1);
if (alice.touched()) {
  alice.say("Ouch!");
  alice.blink();
  // Turn right for a half of a second
  alice.turnRight(0.5);
  // Turn left for a second
  alice.turnLeft(1);
  // Turn right for half a second
  alice.turnRight(0.5);
}
}
