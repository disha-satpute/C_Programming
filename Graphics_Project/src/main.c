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
    line(20, 20, 180,20);
    line(20, 60, 180,60);
    line(20, 100, 180,100);
    line(20, 140, 180,140);
    line(20, 180, 180,180);

// Vertical
    line(20, 20, 20,180);
    line(60, 20, 60,180);
    line(100, 20, 100,180);
    line(140, 20, 140,180);
    line(180, 20, 180,180);
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
