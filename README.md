# MozmoSampleBlaster

_SampleBlaster_ is a dead simple hardware sample scrubber made for Mozmo allowing a user to scrub and play a sample with a 0-5v cv signal. 
Samples must be converted to tables and loaded manually alongside the program. I will be developing an application for converting samples.

### Usage

1. Switch on your system, with no jacks connected to the Mozmo, upload this sketch as you would any arduino sketch
2. Patch Audio out of `"Audio"` jack
3. Patch CV Signal into `A2` jack

There are blocking diodes on the inputs of the mozmo, but I would excercise caution in what signals you feed it.
The output of the mozmo is fairly low, I usually to boost it with channel 2 or 3 of the MakeNoise maths

### About Mozmo
[Mozmo](http://elek101.blogspot.com/2015/01/mozmo-brilliant-arduino-mozzi-synth-in.html) is a Eurorack module made by Jean-Luc Deladriere using the Mozzi sonification library on the arduino platform.
