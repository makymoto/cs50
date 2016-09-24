#include <cs50.h>
#include <stdio.h>

int main(void){
    int h;
    do{
        printf("Height:");
        h = GetInt();
        if (h == 0 || h <23){
            break;
       }
        
    }
    
    while(h > 23);
    
     for(int i = 0; i < h; i++){
            for(int j = 2; j <= h - i; j++)
            printf(" ");
            for(int j = 1; j <= i+2; j++)
            printf("#");
            printf("\n");
        }
    
    
}