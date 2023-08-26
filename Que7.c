#include <stdio.h>
#include <windows.h> // Required for Windows

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    gotoxy(10, 5); // Move cursor to column 10, row 5
    printf("Hello, gotoxy!");
    
    return 0;
}
