#include <stdio.h>
#include "../include/point.h"

void getXY(struct point point1, struct point point2) {

     printf("***Point co-ordinates***\n")

    printf("Point 1 - X: %d, Y: %d\n", point1.x, point1.y);
    printf("Point 2 - X: %d, Y: %d\n", point2.x, point2.y);
}