#include <graphics.h>
#include <conio.h> // For getch()

int main()
{
    int gd = DETECT, gm;
    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Set color and draw a line
    setcolor(WHITE);

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


     getch();

    // Close the graphics mode
    closegraph();

    return 0;
}


//indetail commands for creating ext

//g++ -I include -c ./src/main.c -o ./build/main.o
//g++  ./build/main.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
