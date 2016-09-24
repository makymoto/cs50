 #include <stdio.h>
 #include <math.h>
 #include <cs50.h>

 int main(void)
 {
     float n;
     int x = 0, y;

     do{
         printf("How much change is owed?\n");
         n = GetFloat();
     }
     while (n < 0);
     
     y = n * 100.0;
    
     while (y >= 25){
         x++;
         y -= 25;
     }
     while (y >= 10){
         x++;
         y -= 10;
     }
     while (y >= 5){
         x++;
         y -= 5;
     }
     while (y >= 1){
         x++;
         y -= 1;
     }
     printf("%d\n", x);
 }