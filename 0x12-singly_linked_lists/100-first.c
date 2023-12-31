#include <stdio.h>

/**
  * pre_main - Function that is called by the loader before main.
  *
  * Description: This function is executed by the loader before the main
  *              function when the program starts, and it prints a message.
  */
void pre_main(void) __attribute__ ((constructor));

/**
  * pre_main - Function that is called by the loader before main.
  *
  * Description: This function is executed by the loader before the main
  *              function when the program starts, and it prints a message.
  */
void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

