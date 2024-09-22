#include <conio.h>
#include <graphics.h>

int main(){

 int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");
 int row,col;
	  int x1,y1,x2,y2;

   while(!kbhit()){
    x1=100,y1=150, x2=620,y2=150;
	  for(row=0;row<=8;row++)
	  {
          y1=y1+50;
		  y2=y2+50;
		  setcolor(WHITE);
		  line(x1,y1,x2,y2);
	  }
	  x1=120,y1=150, x2=120,y2=450;
	  for(col=0;col<=8;row++)
	  {
          x1=x1+50;
		  x2=x2+50;
		  setcolor(WHITE);
		  line(x1,y1,x2,y2);
	  }
   }


getch();
closegraph();
	return 0;
}













//g++ -I include -c ./src/chess.c -o ./build/chess.o
//g++  ./build/chess.o  -o ./build/output.exe -l bgi -l gdi32 -l comdlg32 -l uuid -l ole32 -l oleaut32



/*// C program to create a chess board
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
int main()
{
	// Auto detection
	int gr = DETECT, gm;
	int r, c, x = 30, y = 30, black = 0;

	// Initialize graphics mode by passing
	// three arguments to initgraph function

	// &gdriver is the address of gdriver
	// variable, &gmode is the address of
	// gmode and "C:\\Turboc3\\BGI" is the
	// directory path where BGI files are stored 
	initgraph(&gr, &gm, "C:\\TURBOC3\\BGI"); 

	// Iterate over 8 rows 
	for (r = 0; r < 8; r++) { 

		// iterate over 8 cols 
		for (c = 1; c <= 8; c++) { 

			// If current block is to 
			// color as black 
			if (black == 0) { 

				// set next color as white 
				setcolor(WHITE); 

				// sets the current fill 
				// pattern and fill color 
				// for black boxes 
				setfillstyle(SOLID_FILL, BLACK); 

				// creating rectangle 
				// with length and breadth 
				// with size 30 
				rectangle(x, y, x + 30, y + 30); 

				// Fill an enclosed area 
				floodfill(x + 1, y + 1, WHITE); 

				// Set black to true 
				black = 1; 
			} 

			// If current block is to 
			// color as white 
			else { 
				setcolor(WHITE); 

				// sets the current fill 
				// pattern and fill color 
				// for whitw boxes 
				setfillstyle(SOLID_FILL, WHITE); 

				// creating rectangle 
				// with length and breadth 
				// with size 30 
				rectangle(x, y, x + 30, y + 30); 

				// Fill an enclosed area 
				floodfill(x + 1, y + 1, WHITE); 

				// Set black to false 
				black = 0; 
			} 

			// Increment for next row 
			x = x + 30; 

			// delay function under library 
			// "dos.h" for holding the 
			// function for some time 
			//delay(30); 
		} 
		if (black == 0) 
			black = 1; 
		else
			black = 0; 
		x = 30; 
		y = 30 + y; 
	} 

	// getch is used to hold the output screen 
	// and wait until user gives any type of 
	// input in turbo c 
	getch(); 

	// close graph function is used to exit 
	// from the graphics screen 
	closegraph(); 
	return 0;
} */