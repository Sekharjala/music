
#define SENSOR_DETECTED_STATE 0

int read_sensor_1() {
  int val = digitalRead(SENSOR_1_PIN);   // read the input pin
  if (val == SENSOR_DETECTED_STATE) {
    
    return 1;
  } else {
    return 0;
  }

}

int read_sensor_2() {
  int val = digitalRead(SENSOR_2_PIN);   // read the input pin
  if (val == SENSOR_DETECTED_STATE) {
    
    return 1;
  } else {
    return 0;
  }
}

int read_sensor_3() {
  int val = digitalRead(SENSOR_3_PIN);   // read the input pin
  if (val == SENSOR_DETECTED_STATE) {
    
    return 1;
  } else {
    return 0;
  }
}

int read_sensor_4() {
  int val = digitalRead(SENSOR_4_PIN);   // read the input pin
  if (val == SENSOR_DETECTED_STATE) {
    
    return 1;
  } else {
    return 0;
  }
}
