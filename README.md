#Arduino Cheat Sheet
The following functions are provided by the arduino library to be used by everyone:

## Functions:
`Robot()` - Creates a robot. Do not worry too much about what this means, just be sure to have it before your setup.

`begin()` - Turns on the robot. This should be at the top of your setup.

`moveForward(time_in_seconds)` - Moves the robot forward for the specified number of seconds.

`moveBackward(time_in_seconds)` - Moves the robot backward for the specified number of seconds.

`turnLeft(time_in_seconds)` - Turns the robot left for the specified number of seconds.

`turnRight(time_in_seconds)` - Turns the robot right for the specified number of seconds.

`stop()` - Makes the robot stop driving.

`wait(time_in_seconds)` - Makes your robot wait for the amount of time you told it to. Be careful because the robot will not be able to do anything during this time!

`blink()` - Lights up a small blue light on the robot's RedBoard.

`say(message)` - Makes the robot talk to the computer. Great for debugging!

The following functions are specifically to be used with Square Roots (CSTO):

`lift()` - Raises your lift.

`drop()` - Lowers your lift.

`touches()` - Tells you if your robot's red button was pressed.
## Examples:

To see examples, go to `File > Examples > Examples From Custom Libraries > Robot`

If you are using the web editor you can see the examples in `examples > libraries`


## Troubleshooting:
If you are having trouble, get a Northeastern student to help you!

Issue: Robot isn't moving when it is told to

Solution: Check your wiring! Either something fell out or you have things plugged in to the wrong place.

Issue: Code doesnt even run!

Solution: Make sure you have added the robot library to your project!


## Notes to Northeastern Students:
Remember that the pins must be configured to match the list below:
<table>
<tr><td>left wheel</td><td>11</td></tr>
<tr><td>right wheel</td><td>10</td></tr>
<tr><td>lift</td><td>9</td></tr>
<tr><td>button</td><td>6</td></tr>
</table>

Also remember that you are allowed to only use the pins you absolutely need, so non-CSTO sites are allowed to not have anything attached to pin 6 or pin 9.

If you or a student are having trouble getting the liibrary started, be sure to download the most up to date version and place it in the arduino libraries folder.

The libraries folder can be accessed by going to `Sketch > Include Library > Add .ZIP Library` and then selecting the ZIP file holding the library (probably in the downloads folder)

If you are using arduino online, the same thing can be achieved by going to the library tab and uploading the .ZIP as a custom library.

The most up to date download will be live 
[on my GitHub.](http://github.com/gracefullemming/sl-arduino-lib)
Once there, you can click the green clone or download button, and then download the .ZIP file

-------
This library and all related material was created by Caleb Trevino, and is not sponsored, endorsed, nor maintained by Northeastern University, Northeastern University College of Engineering, or Northeastern University Service Learning.