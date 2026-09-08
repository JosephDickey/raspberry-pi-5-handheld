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

void setup() {
  // Initialize digital button pins
  for (int i = 0; i < TOTAL_DIGITAL_BUTTONS; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  Joystick.begin();
}

void loop() {
  // Send digital buttons
  for (int i = 0; i < TOTAL_DIGITAL_BUTTONS; i++) {
    Joystick.setButton(i, digitalRead(buttonPins[i]) == LOW);
  }

  Joystick.sendState();
  delay(10);
}
