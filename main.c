#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  struct point {
  
  int    x;
  int    y;

};


int main(int argc, char *argv[])
{
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;
    
    printf("input p1 coordinate (x y) : ");
    scanf("%d %d", &p1.x, &p1.y);
    
    printf("input p1 coordinate (x y) : ");
    scanf("%d %d", &p2.x, &p2.y);
    
    //distance
    
    xdiff = p2.x - p1.x;
    ydiff = p2.y - p1.y;
    dist = sqrt(xdiff*xdiff + ydiff*ydiff) ;
    
    
    printf("distance : %f", dist);
    
  system("PAUSE");	
  return 0;
}
