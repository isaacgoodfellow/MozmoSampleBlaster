/* 
      Isaac Goodfellow 2015
      
      Sample Scrubbing sketch for Mozmo by Deladriere Jean-Luc,
      Eurorack module based on the wonderful mozzi library.
      
      USAGE:
      
      Audio out of "Audio" jack 
      0-5v signal in to A2
*/

#include <MozziGuts.h>
#include <Sample.h>
#include <samples/burroughs1_18649_int8.h>
#include <Line.h>

Sample <BURROUGHS1_18649_NUM_CELLS, AUDIO_RATE, INTERP_LINEAR> aSample(BURROUGHS1_18649_DATA);
Line <Q16n16> scrub;
const unsigned int AUDIO_STEPS_PER_CONTROL = AUDIO_RATE / CONTROL_RATE;

int offset = 0;

const char INPUT_PIN = 2; // set the input for the CV input

void setup(){
  aSample.setLoopingOn();
  startMozzi();
}

void updateControl(){
  offset = mozziAnalogRead(INPUT_PIN);
  offset = map( offset , 0 , 1024, 0 , BURROUGHS1_18649_NUM_CELLS );
  scrub.set(Q16n0_to_Q16n16(offset), AUDIO_STEPS_PER_CONTROL);
}

int updateAudio(){
  unsigned int index = Q16n16_to_Q16n0(scrub.next());
  return aSample.atIndex(index) << 6;
}

void loop(){
  audioHook();
}








