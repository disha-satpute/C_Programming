#include <graphics.h>
#include <conio.h> // For getch()

int main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color and draw a line
    setcolor(RED);

    //Horizontal line
    line(100, 200, 500,200);

    //circle
    setcolor(BLUE);
    circle(100,200,60);

    //Square
    setcolor(GREEN);
    rectangle(100,100,200,200);

    //rectangle
    setcolor(WHITE);
 rectangle(300, 200, 450, 300);

    setcolor(YELLOW);

    // Array of points: {x1, y1, x2, y2, x3, y3, x1, y1} (last point is to close the triangle)
    int points[] = {150, 100, 100, 200, 200, 200, 150, 100};

    // Draw the triangle
    drawpoly(4, points);

    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}

// g++ -o output  line.c -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32

//indetail commands for creating ext

//g++ -I include -c ./src/line.c -o ./build/line.o
//g++  ./build/line.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
