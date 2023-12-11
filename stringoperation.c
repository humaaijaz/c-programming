#include <stdio.h>
#include <string.h>

int main() {
   char str1[20] = "Hello";
   char str2[20] = "Huma";
   char str3[20];
   int len;

   
   strcpy(str3, str1);
   printf("strcpy(str3, str1): %s\n", str3);

   strcat(str1, str2);
   printf("strcat(str1, str2): %s\n\t", str1);

   len = strlen(str1);
   printf("strlen(str1): %d\n", len);

   return 0;
}
