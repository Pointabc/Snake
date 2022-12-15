#include "SConsole.h"

SConsole::SConsole(int width, int height)
{
	_width = width;
	_height = height;
	
	// Custom menu
	/*HWND hWnd = GetConsoleWindow();
	HMENU hm = GetSystemMenu(hWnd, FALSE);
	RemoveMenu(hm, SC_SIZE, MF_BYCOMMAND | MF_REMOVE);
	RemoveMenu(hm, SC_MAXIMIZE, MF_BYCOMMAND | MF_REMOVE);*/
	//DrawMenuBar(hWnd);

	_hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SMALL_RECT windowSize = { 0, 0, _width - 1, _height - 1 };
	SetConsoleWindowInfo(_hConsole, TRUE, &windowSize);
	COORD bufferSize = { _width, _height }; // размеры буфера
	SetConsoleScreenBufferSize(_hConsole, bufferSize);

	// Get char size
	//CONSOLE_FONT_INFO pConFont = {};
	//COORD crdSize = GetConsoleFontSize(_hConsole, pConFont.nFont);
	//// Set width and height of console
	//HWND hWindowConsole = GetConsoleWindow();
	//RECT rc;
	//GetWindowRect(hWindowConsole, &rc); //stores the console's current dimensions
	//int con_width = crdSize.Y * _width;
	//int con_height = crdSize.X * _height;
	//MoveWindow(hWindowConsole, rc.left, rc.top, con_width/2, con_height, TRUE);
	////Console SetWindowSize

	//// set size of console buffer
	//COORD screen_size = { _width, _height };
	//SetConsoleScreenBufferSize(_hConsole, screen_size);
	//rc.right = con_width / 2;
	//rc.bottom = con_height;
	//SMALL_RECT src = {rc.left, rc.top, con_width / 2, con_width };
	//SetConsoleWindowInfo(_hConsole, true, &src);
}
