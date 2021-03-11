#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
 char c;
 scanf("%c", &c);
 c = toupper(c);
 char k;

 for(k='A'; k <= c; ++k) {
 char l;
 for(l = k; l<c; ++l)
	  printf(" ");
 for(l = 'A'; l<k; ++l)
	  printf("%c", l);
 for(; l>='A'; --l)
	  printf("%c", l);
 printf("\n");
 }
 system("PAUSE");
 return 0;
}
