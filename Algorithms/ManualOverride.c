#include <windows.h>
#include <string.h>
#include <stdio.h>

int UserEnterCrdX(int i, int NumOfCols, int FishArray[][NumOfCols], int AllPengs, int PengArray[AllPengs][3]) {

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int x;

    if (i % 2 == 0) {
        SetConsoleTextAttribute(hConsole, 14);
        printf("Player1\n");
    } else {
        SetConsoleTextAttribute(hConsole, 12);
        printf("Player2\n");
    }

    printf("Enter row of your %i penguin: \n", i + 1);
    SetConsoleTextAttribute(hConsole, 7);
    scanf("%i", &x);

    return x;
}

int UserEnterCrdY(int i, int NumOfCols, int FishArray[][NumOfCols], int AllPengs, int PengArray[AllPengs][3]) {

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int y;

    if (i % 2 == 0) {
        SetConsoleTextAttribute(hConsole, 14);
        printf("Player1\n");
    } else {
        SetConsoleTextAttribute(hConsole, 12);
        printf("Player2\n");
    }

    printf("Enter column of your %i penguin: \n", i + 1);
    SetConsoleTextAttribute(hConsole, 7);
    scanf("%i", &y);
    return y;
}

int UserEnterNumOfSpaces(int i, int NumOfCols, int FishArray[][NumOfCols], int AllPengs, int PengArray[AllPengs][3]) {

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int s;

    if (i % 2 != 0) {
        SetConsoleTextAttribute(hConsole, 14);
        printf("Player1\n");
    } else {
        SetConsoleTextAttribute(hConsole, 12);
        printf("Player2\n");
    }

    printf("Enter number of spaces: \n");
    SetConsoleTextAttribute(hConsole, 7);
    scanf("%i", &s);
    return s;
}

int UserEnterDir(int i, int NumOfCols, int FishArray[][NumOfCols], int AllPengs, int PengArray[AllPengs][3]) {

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int d;

    if (i % 2 != 0) {
        SetConsoleTextAttribute(hConsole, 14);
        printf("Player1\n");
    } else {
        SetConsoleTextAttribute(hConsole, 12);
        printf("Player2\n");
    }

    printf("Enter direction of movement: \n");
    SetConsoleTextAttribute(hConsole, 7);
    scanf("%i", &d);
    return d;
}

int UserEnterPengID(int i, int NumOfCols, int FishArray[][NumOfCols], int AllPengs, int PengArray[AllPengs][3]) {

    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int PID;

    if (i % 2 != 0) {
        SetConsoleTextAttribute(hConsole, 14);
        printf("Player1\n");
    } else {
        SetConsoleTextAttribute(hConsole, 12);
        printf("Player2\n");
    }

    printf("Enter which penguin you want to use: \n");
    SetConsoleTextAttribute(hConsole, 7);
    scanf("%i", &PID);
    return PID;
}
