#include <Adafruit_TinyUSB.h>

#define ON  0
#define OFF 1



// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  /* initialize 12 keys */
  for(int i = 1; i < 13; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
}

// the loop function runs over and over again forever
void loop()
{
  
}

/* books a certain number of lines */
void read_line(int lines)
{
  
}

void read_ro()
{
  
}

/* changes method of payment to tcm and prints */
void tcm(int print_num)
{
  
}

/* finishes a line. First press sends "fnl " and second press finishes */
void fnl()
{
  
}
