#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include "getfilesize.h"

int main()
{
   char a[100], b[100];
 
   printf("Enter the first string\n");
   scanf("%s", a);
 
   printf("Enter the second string\n");
   scanf("%s", b);
 
    get_file_size(b);
    get_file_size(a);

   if (strcmp(a,b) == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");
 
   return 0;
}