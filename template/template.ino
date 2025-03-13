// set the pin that the speaker is on
#define SPEAKERPIN 12

// predefined notes for ease of programming
#define C 262
#define Cs 277
#define D 294
#define Eb 311
#define E 330
#define F 349
#define Fs 370
#define G 392
#define Gs 415
#define A 440
#define Bb 466
#define B 494

// SET TEMPO HERE
#define TEMPO 60

// quarter note length in ms
const int quarterbeat = 60000 / TEMPO;

// eigth note
void e(int note, float octave = 1) {
  tone(SPEAKERPIN, note * octave); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(quarterbeat / 2 - 50);
  noTone(SPEAKERPIN);
  delay(25);
}

// quarter note
void q(int note, float octave = 1) {
  tone(SPEAKERPIN, note * octave);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(quarterbeat - 50);
  noTone(SPEAKERPIN);
  delay(25);
}

// half note
void h(int note, float octave = 1) {
  tone(SPEAKERPIN, note * octave);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(quarterbeat * 2 - 50);
  noTone(SPEAKERPIN);
  delay(25);
}

void setup() {
  // enable pin for LED
  pinMode(LED_BUILTIN, OUTPUT);

  //SONG GOES HERE

  //END SONG
}


void loop() {
  // nothing here
}
