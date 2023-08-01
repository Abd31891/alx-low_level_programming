#include "main.h"


/**
* *_memset - fill  memory with a constant byte.
* @s: pointer to put the constant
* @b: constant
* @n: max bytes to use 
* return: pointer s
*/
char *_memset(char *s, char b, unsigned int n) 
{
       usnigned int itr; 

       for (itr = 0; n > 0; itr++, n--) 
       { 
               s[itr] = b;
               n--; 
       } 
         
       return (s);
}
