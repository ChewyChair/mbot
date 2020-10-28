#include "Proximity.h"
#include "Motion.h"
#include "Waypoint.h"
#include "Color.h"
#include "Puzzle.h"

void setup() {
  Serial.begin(9600);
//  onIR();
//  calibrateMotion();
//  printm();
}

void loop() {
//  if (atWaypoint()) {
//    solve(detectColor());
//  } else {
//    moveFront();
//  }
  onIR();
  calibrateMotion();
  printm();
  offIR();
  delay(200);
  
//    Serial.print(readLeft());
//    Serial.print(" ");
//    Serial.println(readRight());
//    delay(200);
}
