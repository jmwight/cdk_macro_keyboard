#include "main.h"

int main(void)
{

  /* initialize main led */
  gpio_init(MAIN_LED);
  gpio_set_dir(MAIN_LED, GPIO_OUT);

  /* initialize the 12 keys */
  int i;
  for(i = 1; i < 13; ++i)
  {
    gpio_init(i);
    gpio_set_dir(i, GPIO_IN);
    gpio_pull_up(i);
  }

  /* microcontroller loop */
  while(1)
  {
    if(gpio_get(1) == ON)
      gpio_put(MAIN_LED, 1U);
    else
      gpio_put(MAIN_LED, 0U);
  }
}

// the setup function runs once when you press reset or power the board
/*void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  /* initialize 12 keys 
  for(int i = 1; i < 13; i++)
  {
    pinMode(i, INPUT_PULLUP);
  }
}*/

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
