#include <graphics.h>
#include <conio.h> // For getch()

int main()
{
    int gd = DETECT, gm;
    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color and draw a line
    setcolor(YELLOW);

    //Horizontal
    line(120, 150, 320,150);
    line(120, 200, 320,200);
    line(120, 250, 320,250);
    line(120, 300, 320,300);
    line(120, 350, 320,350);

// Vertical
    line(120, 150, 120,350);
    line(170, 150, 170,350);
    line(220, 150, 220,350);
    line(270, 150, 270,350);
    line(320, 150, 320,350);
     /*   line(120, 20, 120,100);
        line(140, 20, 140,100);
        line(160, 20, 160,100);
        line(180, 20, 180,100);*/


     getch();

    // Close the graphics mode
    closegraph();

    return 0;
}

//one command for creating exe
// g++ -o output  main.c -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32

//indetail commands for creating ext

//g++ -I include -c ./src/main.c -o ./build/main.o
//g++  ./build/main.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
