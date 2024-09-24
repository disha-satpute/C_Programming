#include <graphics.h>
#include <conio.h>  // For getch()
#include <stdlib.h> // For other standard library functions (optional)
#include <stdio.h>  // For printf

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, nullptr); // Using nullptr instead of ""

    // Check if mouse is detected
    int mouseDetected = detectmouse();
    if (!mouseDetected) {
        printf("Mouse not detected.\n");
        closegraph();
        return 1; // Exit if mouse is not detected
    }

    // Example usage for getting mouse position
    while (true) {
        int x, y;
        if (ismouseclick(WM_LBUTTONDOWN)) {
            getmouseclick(WM_LBUTTONDOWN, x, y);
            outtextxy(x, y, "Clicked!"); // Output text where clicked
        }
        // Break condition can be added here
    }

    getch(); // Wait for a key press
    closegraph(); // Close the graphics mode
    return 0;
}
