#include "../include/line.h"
#include <stdio.h>

void getLine(struct line line1) {

     printf("***Line 1 co-ordinates***\n");
     
    printf("Line 1 - Point 1 - X: %d, Y: %d\n", line1.pt1.x, line1.pt1.y);
    printf("Line 1 - Point 2 - X: %d, Y: %d\n", line1.pt2.x, line1.pt2.y);

}