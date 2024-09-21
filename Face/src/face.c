#include <graphics.h>
#include <conio.h> // For getch()

int main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    //circle
    setcolor(YELLOW);
    circle(300,250,200);

    //Eyes
    setcolor(WHITE);
      circle(230,200,40);
      circle(380,200,40);

    ellipse(300, 330, 210, 335, 90, 30);
    ellipse(300, 330, 210, 335, 90, 31);
    ellipse(300, 330, 210, 335, 90, 32);

    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}

//in detail commands for creating ext

//g++ -I include -c ./src/face.c -o ./build/face.o
//g++  ./build/face.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32
