#include "main.h"
/**
 *_strlen - gets the length of array
*@s: array s
*Return: length of array
*/
int _strlen(char *s)
{
  int x = 0;
  int *a = s&;
  while(a){
    x++;
    a++;
  }
  return x;
}
