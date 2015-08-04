int output_pin = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(output_pin, OUTPUT);    
  }

// the loop routine runs over and over again forever:
void loop() {
  int i;
  
  //BLOCK-01: 3-stroke iterations
  for(i=0;i<5;++i)  {
    P_key(13, 58, 0.17);
    P_key(13, 54, 0.17);
    P_key(13, 51, 0.17);
    }
  for(i=0;i<3;++i)  {
    P_key(13, 56, 0.17);
    P_key(13, 53, 0.17);
    P_key(13, 50, 0.17);
    }
    
  P_key(13, 50, 1);
  for(i=0;i<5;++i)  {
    P_key(13, 56, 0.17);
    P_key(13, 53, 0.17);
    P_key(13, 49, 0.17);
    }
  P_key(13, 44, 0.17);
  for(i=0;i<3;++i)  {
    P_key(13, 56, 0.17);
    P_key(13, 51, 0.17);
    P_key(13, 48, 0.17);
    }
    P_key(13, 48, 1);
    
  
  //BLOCK-02: interlude:
  P_key(13, 51, 1);
  P_key(13, 63, 0.33);
  P_key(13, 61, 0.33);
  P_key(13, 63, 0.33);
  P_key(13, 61, 0.66);
  P_key(13, 54, 1);
  P_key(13, 63, 0.15);
  P_key(13, 65, 0.60);
  delay(600);
    
  //BLOCK-03: scan through keys 88 to 39 in 5 seconds:
  for(i=88;i>=39;--i)  {
    P_key(13, i, 0.07);
    }
  P_key(13, 39, 0.33);
    
  //BLOCK-04: interlude:
  P_key(13, 53, 0.17);
  P_key(13, 58, 0.17);
  P_key(13, 62, 0.33);
  P_key(13, 58, 0.33);
  P_key(13, 70, 0.66);
  delay(600);
  
  
  //BLOCK-05: 3-stroke iterations
  for(i=0;i<5;++i)  {
    P_key(13, 70, 0.17);
    P_key(13, 66, 0.17);
    P_key(13, 63, 0.17);
    }
  P_key(13, 58, 0.17);
  for(i=0;i<3;++i)  {
    P_key(13, 68, 0.17);
    P_key(13, 65, 0.17);
    P_key(13, 62, 0.17);
    }
  P_key(13, 62, 1);
  
  for(i=0;i<5;++i)  {
    P_key(13, 68, 0.17);
    P_key(13, 65, 0.17);
    P_key(13, 61, 0.17);
    }
  P_key(13, 56, 0.17);
  for(i=0;i<3;++i)  {
    P_key(13, 68, 0.17);
    P_key(13, 63, 0.17);
    P_key(13, 60, 0.17);
    }
  P_key(13, 60, 1);
  delay(100);
  
  //BLOCK-06: bumpy downward scan through keys starting from 80:
  P_key(13, 80, 0.08);
  P_key(13, 77, 0.08);
  P_key(13, 73, 0.08);
  P_key(13, 77, 0.08);
  P_key(13, 73, 0.08);
  P_key(13, 68, 0.08);
  P_key(13, 73, 0.08);
  P_key(13, 68, 0.08);
  P_key(13, 65, 0.08);
  P_key(13, 68, 0.08);
  P_key(13, 65, 0.08);
  P_key(13, 61, 0.08);
  P_key(13, 65, 0.08);
  P_key(13, 61, 0.08);
  P_key(13, 56, 0.08);
  P_key(13, 61, 0.17);
  P_key(13, 56, 0.17);
  P_key(13, 53, 0.17);

  P_key(13, 87, 0.08);
  P_key(13, 84, 0.08);
  P_key(13, 80, 0.08);
  P_key(13, 87, 0.08);
  P_key(13, 80, 0.08);
  P_key(13, 75, 0.08);
  P_key(13, 80, 0.08);
  P_key(13, 75, 0.08);
  P_key(13, 72, 0.08);
  P_key(13, 75, 0.08);
  P_key(13, 72, 0.08);
  P_key(13, 68, 0.08);
  P_key(13, 72, 0.08);
  P_key(13, 68, 0.08);
  P_key(13, 63, 0.08);
  P_key(13, 68, 0.17);
  P_key(13, 63, 0.17);
  P_key(13, 60, 0.17);
  
  //BLOCK-07: pre-lyrics interlude (1):
  P_key(13, 66, 0.66);
  P_key(13, 63, 0.33);
  P_key(13, 59, 0.33);
  P_key(13, 61, 0.66);
  P_key(13, 63, 0.66);
  P_key(13, 61, 0.66);
  P_key(13, 58, 0.33);
  P_key(13, 61, 0.08);
  P_key(13, 66, 0.08);
  P_key(13, 70, 0.08);
  P_key(13, 73, 0.08);
  P_key(13, 78, 0.08);
  P_key(13, 82, 0.66);

  //BLOCK-08: pre-lyrics interlude (2):
  P_key(13, 32, 0.17);
  P_key(13, 39, 0.17);
  P_key(13, 44, 0.33);
  P_key(13, 47, 0.17);
  P_key(13, 47, 0.17);
  P_key(13, 51, 0.17);
  P_key(13, 47, 0.33);
  P_key(13, 51, 0.17);
  P_key(13, 47, 0.33);
  P_key(13, 59, 0.17);
  P_key(13, 56, 0.17);
  P_key(13, 51, 0.17);
  P_key(13, 41, 0.17);
  P_key(13, 46, 0.17);
  P_key(13, 41, 0.33);
  P_key(13, 46, 0.33);
  P_key(13, 53, 0.17); 
  P_key(13, 58, 0.17);
  P_key(13, 62, 0.17);
  P_key(13, 65, 0.17);
  P_key(13, 70, 0.33);
  P_key(13, 74, 1);
  delay(1000);
  
  //Block-09: lyrics:

  /*
  P_key(13, 58, 0.10);
  delay(100);
  P_key(13, 58, 0.10);
  delay(100);
  P_key(13, 58, 0.40);
  delay(100);
  P_key(13, 56, 0.10);
  delay(100);
  P_key(13, 56, 0.10);
  delay(100);
  P_key(13, 56, 0.40);
  P_key(13, 58, 1);
  delay(500);
  
  P_key(13, 53, 0.30);
  P_key(13, 58, 0.10);
  delay(100);
  P_key(13, 58, 0.10);
  delay(100);
  P_key(13, 56, 0.15);
  delay(100);
  P_key(13, 56, 0.15);
  delay(100);
  P_key(13, 58, 1);
  delay(500);
  P_key(13, 56, 0.20);
  P_key(13, 58, 0.20);
  P_key(13, 56, 0.20);
  P_key(13, 58, 0.40);
  P_key(13, 56, 0.20);
  P_key(13, 58, 0.20);
  delay(100);
  P_key(13, 58, 0.40);
  delay(100);
  P_key(13, 58, 0.40);
  delay(2000);
  */
  }


//this fucntion converts a piano key number into a frequency for square-wave generation:
void P_key(int pin, int key_number, float time)  {
  float frequency=0;
  switch(key_number)  {
    case 88:
      frequency= 4186.01;
      break;
    case 87:
      frequency= 3951.07;
      break;
    case 86:
      frequency= 3729.31;
      break;
    case 85:
      frequency= 3520.00;
      break;
    case 84:
      frequency= 3322.44;
      break;
    case 83:
      frequency= 3135.96;
      break;
    case 82:
      frequency= 2959.96;
      break;
    case 81:
      frequency= 2793.83;
      break;
    case 80:
      frequency= 2637.02;
      break;
    case 79:
      frequency= 2489.02;
      break;
    case 78:
      frequency= 2349.32;
      break;
    case 77:
      frequency= 2217.46;
      break;
    case 76:
      frequency= 2093.00;
      break;
    case 75:
      frequency= 1975.53;
      break;
    case 74:
      frequency= 1864.66;
      break;
    case 73:
      frequency= 1760.00;
      break;
    case 72:
      frequency= 1661.22;
      break;
    case 71:
      frequency= 1567.98;
      break;
    case 70:
      frequency= 1479.98;
      break;
    case 69:
      frequency= 1396.91;
      break;
    case 68:
      frequency= 1318.51;
      break;
    case 67:
      frequency= 1244.51;
      break;
    case 66:
      frequency= 1174.66;
      break;
    case 65:
      frequency= 1108.73;
      break;
    case 64:
      frequency= 1046.50;
      break;
    case 63:
      frequency= 987.767;
      break;
    case 62:
      frequency= 932.328;
      break;
    case 61:
      frequency= 880.000;
      break;
    case 60:
      frequency= 830.609;
      break;
    case 59:
      frequency= 783.991;
      break;
    case 58:
      frequency= 739.989;
      break;
    case 57:
      frequency= 698.456;
      break;
    case 56:
      frequency= 659.255;
      break;
    case 55:
      frequency= 622.254;
      break;
    case 54:
      frequency= 587.330;
      break;
    case 53:
      frequency= 554.365;
      break;
    case 52:
      frequency= 523.251;
      break;
    case 51:
      frequency= 493.883;
      break;
    case 50:
      frequency= 466.164;
      break;
    case 49:
      frequency= 440.000;
      break;
    case 48:
      frequency= 415.305;
      break;
    case 47:
      frequency= 391.995;
      break;
    case 46:
      frequency= 369.994;
      break;
    case 45:
      frequency= 349.228;
      break;
    case 44:
      frequency= 329.628;
      break;
    case 43:
      frequency= 311.127;
      break;
    case 42:
      frequency= 293.665;
      break;
    case 41:
      frequency= 277.183;
      break;
    case 40:
      frequency= 261.626;
      break;
    case 39:
      frequency= 246.942;
      break;
    case 38:
      frequency= 233.082;
      break;
    case 37:
      frequency= 220.000;
      break;
    case 36:
      frequency= 207.652;
      break;
    case 35:
      frequency= 195.998;
      break;
    case 34:
      frequency= 184.997;
      break;
    case 33:
      frequency= 174.614;
      break;
    case 32:
      frequency= 164.814;
      break;
    case 31:
      frequency= 155.563;
      break;
    case 30:
      frequency= 146.832;
      break;
    case 29:
      frequency= 138.591;
      break;
    case 28:
      frequency= 130.813;
      break;
    case 27:
      frequency= 123.471;
      break;
    case 26:
      frequency= 116.541;
      break;
    case 25:
      frequency= 110.000;
      break;
    case 24:
      frequency= 103.826;
      break;
    case 23:
      frequency= 97.9989;
      break;
    case 22:
      frequency= 92.4986;
      break;
    case 21:
      frequency= 87.3071;
      break;
    case 20:
      frequency= 82.4069;
      break;
    case 19:
      frequency= 77.7817;
      break;
    case 18:
      frequency= 73.4162;
      break;
    case 17:
      frequency= 69.2957;
      break;
    case 16:
      frequency= 65.4064;
      break;
    case 15:
      frequency= 61.7354;
      break;
    case 14:
      frequency= 58.2705;
      break;
    case 13:
      frequency= 55.0000;
      break;
    case 12:
      frequency= 51.9131;
      break;
    case 11:
      frequency= 48.9994;
      break;
    case 10:
      frequency= 46.2493;
      break;
    case 9:
      frequency= 43.6535;
      break;
    case 8:
      frequency= 41.2034;
      break;
    case 7:
      frequency= 38.8909;
      break;
    case 6:
      frequency= 36.7081;
      break;
    case 5:
      frequency= 34.6478;
      break;
    case 4:
      frequency= 32.7032;
      break;
    case 3:
      frequency= 30.8677;
      break;
    case 2:
      frequency= 29.1352;
      break;
    case 1:
      frequency= 27.5000;
      break;
    case 0:
      frequency= 0;
      break;
    }
  //call a specific square wave with asigned frequency:
  tune(pin, frequency, time);
  return;
  }

//         PIN NO   in Hertz         in seconds
void tune(int pin, float frequency, float time)  {
  //calculate the number of cycles for a given time & freq:
  int cycles;
  cycles = (int)ceil(frequency*time);
  float pulse_time, micro_pulse_time;
  pulse_time = 1/(frequency*2);
  micro_pulse_time=pulse_time*1000000;
  int i;
  for(i=0;i<cycles;++i)  {
    digitalWrite(pin, HIGH);
    delayMicroseconds(micro_pulse_time);
    digitalWrite(pin, LOW);
    delayMicroseconds(micro_pulse_time);
    }
  return;
  }

