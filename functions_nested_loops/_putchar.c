#include "main.h"
#include <unistd.h>
 /**
  * the putchar print the character c 
  * sdfjskjf
*/
 
int _putchar(char c)
{
	return (write(1, &c, 1));
}
