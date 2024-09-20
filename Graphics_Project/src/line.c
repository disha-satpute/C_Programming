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
    circle(50,100,30);
    
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}

//one command for creating exe
// g++ -o output  line.c -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32

//indetail commands for creating ext

//g++ -I include -c ./src/line.c -o ./build/line.o
//g++  ./build/line.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
