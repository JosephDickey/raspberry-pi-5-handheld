#include <Joystick.h>

Joystick_ Joystick(
  JOYSTICK_DEFAULT_REPORT_ID,
  JOYSTICK_TYPE_JOYSTICK,
  14, 0,                // Button Count, Hat Switch Count
  true, true, false,    // X and Y, but no Z Axis (left stick)
  true, true, false,    // Rx and Ry (right stick), no Rz
  false, false,         // No rudder or throttle
  false, false, false   // No accelerator, brake, or steering
);

const int TOTAL_DIGITAL_BUTTONS = 14;
const int buttonPins[TOTAL_DIGITAL_BUTTONS] = {
  8,    // D-pad Up
  9,    // D-pad Right
  10,   // D-pad Down
  15,   // D-pad Left
  
  6,    // North
  0,    // East
  1,    // South
  3,    // West

  7,    // Select
  2,    // Start

  16,   // Left Shoulder
  14,   // Left Trigger
  4,    // Right Shoulder
  5     // Right Trigger
};

const int STICKS_AXIS_MIN = -511;
const int STICKS_AXIS_MAX = 511;
const int STICKS_DEADZONE = 20;

int applyDeadzone(int rawValue) {
  int value = rawValue - 512;
  value = constrain(value, STICKS_AXIS_MIN, STICKS_AXIS_MAX);

  if (abs(value) < STICKS_DEADZONE) {
    return 0;
  }

  if (value > 0) {
    return map(value, STICKS_DEADZONE, STICKS_AXIS_MAX, 0, STICKS_AXIS_MAX);
  } else {
    return map(value, -STICKS_DEADZONE, STICKS_AXIS_MIN, 0, STICKS_AXIS_MIN);
  }
}

void setup() {
  // Initialize digital button pins
  for (int i = 0; i < TOTAL_DIGITAL_BUTTONS; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  // Set the range for the analog sticks
  Joystick.setXAxisRange(STICKS_AXIS_MIN, STICKS_AXIS_MAX);
  Joystick.setYAxisRange(STICKS_AXIS_MIN, STICKS_AXIS_MAX);
  Joystick.setRxAxisRange(STICKS_AXIS_MIN, STICKS_AXIS_MAX);
  Joystick.setRyAxisRange(STICKS_AXIS_MIN, STICKS_AXIS_MAX);

  Joystick.begin();
}

void loop() {
  // Read analog sticks
  int leftX = applyDeadzone(analogRead(A0));
  int leftY = applyDeadzone(analogRead(A1));
  int rightX = applyDeadzone(analogRead(A2));
  int rightY = applyDeadzone(analogRead(A3));

  // Send all four analog axes (0–1023)
  Joystick.setXAxis(leftX);
  Joystick.setYAxis(leftY);
  Joystick.setRxAxis(rightX);
  Joystick.setRyAxis(rightY);

  // Send digital buttons
  for (int i = 0; i < TOTAL_DIGITAL_BUTTONS; i++) {
    Joystick.setButton(i, digitalRead(buttonPins[i]) == LOW);
  }

  Joystick.sendState();
  delay(10);
}
