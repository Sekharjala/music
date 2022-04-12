void play_sound( void *pvParameters __attribute__((unused)) )  // This is a Task.
{
  /*
    DigitalReadSerial
    Reads a digital input on pin 2, prints the result to the serial monitor

    This example code is in the public domain.
  */
  int previous_sound_index = 0;
  int now_sound_index;
  for (;;) {
    now_sound_index = sound_index;
    if (previous_sound_index != now_sound_index) {
      if (sound_index == 0) {
        myDFPlayer.pause();
        vTaskDelay(2);
      } else {
        myDFPlayer.playFolder(sound_index, sound_index); //Play next mp3 every 3 second.
        vTaskDelay(10);
        myDFPlayer.loop(sound_index); //loop all mp3 files.
        vTaskDelay(50);
      }

    }



    previous_sound_index = now_sound_index;
    vTaskDelay(1);  // one tick delay (15ms) in between reads for stability
  }
}
