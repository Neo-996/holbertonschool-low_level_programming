#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    char ch = 'c';
 
    
     if (isupper(ch)) {
    printf("%c is an Uppercase Letter", ch);
  } else {
    printf("%c is not an Uppercase Letter", ch);
  }
  
  return 0;
}
