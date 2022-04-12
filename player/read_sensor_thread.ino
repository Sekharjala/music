
void read_sensor( void *pvParameters __attribute__((unused)) )  // This is a Task.
{
  vTaskDelay(100);
  int total;
  int previous_total = 0;
  for (;;)
  {
    int sensor_1_total = 0;
    int sensor_2_total = 0;
    int sensor_3_total = 0;
    int sensor_4_total = 0;
    // read the input on analog pin 0:
    for (int i = 0; i < 16; i++) {
      sensor_1_total = sensor_1_total + read_sensor_1();
      sensor_2_total = sensor_2_total + read_sensor_2();
      sensor_3_total = sensor_3_total + read_sensor_3();
      sensor_4_total = sensor_4_total + read_sensor_4();
      vTaskDelay(1); 
    }

    sensor_1_total = sensor_1_total >> 4;
    sensor_2_total = sensor_2_total >> 4;
    sensor_3_total = sensor_3_total >> 4;
    sensor_4_total = sensor_4_total >> 4;


    total = sensor_1_total + sensor_2_total + sensor_3_total + sensor_4_total;

  

    if (total != previous_total) {
      sound_index  = total;
        Serial.println(total);
    }

    previous_total = total;
    vTaskDelay(1);  // one tick delay (15ms) in between reads for stability
  }
}
