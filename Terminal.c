#include "headers.h"

//Method "gotoxy" was copied from "https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1044844545&id=1043284392"
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}