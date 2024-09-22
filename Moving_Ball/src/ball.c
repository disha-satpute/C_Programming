#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 90;
    int color = 1;
    while (!kbhit()) {

        setcolor(color);
        circle(x, y, radius);
        delay(50);
        cleardevice();

        x += 10;  // Move the circle to the right
        if (x > getmaxx()) {
            x = 0;  // Reset to the left side when the circle goes beyond the screen
            color = rand() % 15 + 1;  // Change color randomly
        }
    }
    closegraph();
    return 0;
}


//g++ -I include -c ./src/ball.c -o ./build/ball.o
//g++  ./build/ball.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
