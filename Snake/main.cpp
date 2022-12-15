#include <iostream>
#include "HorizontalLine.h"
#include "VerticalLine.h"
#include "Snake.h"
#include "FoodCreator.h"
#include "Walls.h"
#include <conio.h>
// pause
#include <chrono>
#include<thread>

#include "SConsole.h"



int main()
{	
	// Prepare Console - in developing
	SConsole SCon(CONSOLE_WIDTH, CONSOLE_HEIGHT);

	Walls walls(CONSOLE_WIDTH, CONSOLE_HEIGHT);
	walls.Draw();

	Snake snake(Point(5, 5, '*'), 20, RIGHT);
	snake.Draw();
	
	// Create food
	FoodCreator foodCreator(80, 25, '$');
	Point food = foodCreator.CreateFood();
	food.Draw();

	int iKey = 67;
	while (iKey != 27) // Выход по клавише ESC
	{
		if ( (walls.IsHit(snake)) || (snake.IsHitSnake()) )
		{
			break;
		}
		if (snake.Eat(food))
		{
			food = foodCreator.CreateFood();
			food.Draw();
		}
		else
			snake.Move();

		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		
		if (_kbhit())
		{
			iKey = _getch();
			snake.HandleKey(iKey);
		}
	}
	
	// Wait for exit
	//system("pause");
	//std::this_thread::sleep_for(std::chrono::seconds(5));
	return 0;
}

