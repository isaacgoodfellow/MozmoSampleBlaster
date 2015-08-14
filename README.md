# MozmoSampleBlaster

_SampleBlaster_ is a dead simple hardware sample scrubber made for the _Mozmo_ Eurorack module allowing a user to scrub and play a sample with a 0-5v cv signal. 
Samples must be converted to tables and loaded manually alongside the program. I will be developing an application for converting samples.

### Usage

(Pre work)
1. Download the Arduino software, and Mozzi library
2. Edit your Mozzi settings to use HI-FI audio, this is found in the MozziGuts.h file in the library

1. Switch on your system, with no jacks connected to the _Mozmo_, upload this sketch as you would any arduino sketch
2. Patch Audio out of `"Audio"` jack
3. Patch CV Signal into `A2` jack

The output of the mozmo is fairly low, I usually to boost it with channel 2 or 3 of the MakeNoise maths.

###### A Word of Caution
There are blocking diodes on the inputs of the _Mozmo_, but I would excercise caution in what signals you feed it. (Avoid negative polarity and voltages over 5v when possible).

As Mozmo can be built as a DIY project there are a variety of ways you could screw it up. This program functions safely in my system with my Mozmo that I built myself, and if you built yours right it should function right in your system as well. That said I am not liable for any damage caused to your system through running this sketch. If your Mozmo works with other sketches, then it will work with this.

### About Mozmo
[Mozmo](http://elek101.blogspot.com/2015/01/mozmo-brilliant-arduino-mozzi-synth-in.html) is a Eurorack module made by Jean-Luc Deladriere using the Mozzi sonification library on the arduino platform.
