#include <iostream>
#include "bmiCalc.h"
#include <Windows.h>
#include <conio.h>
using namespace std;


double weight;
double height;
double niger;

void bmiText()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << "▀█████████▄    ▄▄▄▄███▄▄▄▄    ▄█ " << endl;
    cout << "  ███    ███ ▄██▀▀▀███▀▀▀██▄ ███  " << endl;
    cout << "  ███    ███ ███   ███   ███ ███▌ " << endl;
    cout << " ▄███▄▄▄██▀  ███   ███   ███ ███▌ " << endl;
    cout << "▀▀███▀▀▀██▄  ███   ███   ███ ███▌ " << endl;
    cout << "  ███    ██▄ ███   ███   ███ ███  " << endl;
    cout << "  ███    ███ ███   ███   ███ ███  " << endl;
    cout << "▄█████████▀   ▀█   ███   █▀  █▀   " << endl;
};

void calc()
{   
    system("cls");
    bmiText();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    niger = weight / (height * height);
    cout << "\n[";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    cout << "*";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "]";
    cout << " Your BMi: " << ceil(niger * 100) / 100 << "\n";
    system("pause");
}

void menu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "\n[";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);cout << "*";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);cout << "]";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << " Enter ur weight[kg]: " << endl;
    cin >> weight;
    system("cls");
    bmiText();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "\n["; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout << "*"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); cout << "]";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << " Enter ur height[m]: " << endl;
    cin >> height;
    calc();
}

int main()
{
    bmiText();
    menu();
    return 0;
}


