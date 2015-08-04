PIANO EMULATOR: a square-wave generator for Arduino boards
==============

Copyright (C) 2015 Deepesh Nagarajan (1337deepesh@gmail.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 3 of the License.

This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU General Public License <http://www.gnu.org/licenses/>
for more details.

Concept
--------------

A piano contains 88 keys, each with their own unique frequency
(see Piano_key_frequencies.png). I have written a simple function that
emits a square-wave corresponding to the frequency for a given piano key,
and emits this frequency for a given time.

**usage: P_key(output_pin, piano_key, time_seconds);**
*eg:    P_key(13        , 58       , 0.17        );*
- output_pin: The digital output pins are used (**range: 0-13 for Arduino Uno**).
- piano_key: See Piano_key_frequencies.png (**range: 1-88 for a standard piano**).
- time_seconds: press selected the piano key for some time (**range: 0-inf**).
  NOTE: A square-wave is emitted for the entirety of time_seconds.

Example
--------------

An example program is provided (piano_emulator.ino) that plays the intro of 
**Hotel California**. Connect a low-power speaker to ground and pin-13 (digital OP) 
to hear the intro music.
