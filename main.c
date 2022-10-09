/* main.c */
#include <stdio.h>
int main(int argc, char *argv[]) {
   printf("For loop\n");
   for(int i = 1; i <= 3; i++){
      printf("%d\n", i);
   }
   printf("While loop\n");
   int j = 1;
   while(j<=3){
      printf("%d\n", j);
      j ++;
   }

   return 0;
}
