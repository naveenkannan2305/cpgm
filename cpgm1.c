#include <stdio.h> 
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
int main() 
{ 
    int x, y; 
    x=10,y=20;
    swap(&x,&y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y); 
    return 0; 
} 
