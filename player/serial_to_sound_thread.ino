
void serial_to_sound( void *pvParameters __attribute__((unused)) )  // This is a Task.
{

  for (;;)
  {
    // read the input on analog pin 0:
    if (Serial.available() > 0) {
      // read the incoming byte:
      sound_index = Serial.read();
    }

    vTaskDelay(10);  // one tick delay (15ms) in between reads for stability
  }
}
