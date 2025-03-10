#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#define DELAY 30000

int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;
	int max_x = 0,max_y = 0;
	int next_x = 0;
	int next_y = 0;
	int direction = 1;
	
	initscr(); /* 初始化屏幕 */
	
	noecho(); /* 屏幕上不返回任何按键 */
	
	curs_set(FALSE); /* 不显示光标 */
		
	/* getmaxyx(stdscr, max_y, max_x);/* 获取屏幕尺寸 */ 

	mvprintw(5, 5, "Hello, world!");
	
	refresh(); /* 更新显示器 */
	
	sleep(1);
	
	while(1)
		{
			getmaxyx(stdscr, max_y, max_x);/* 获取屏幕尺寸 */
			clear(); /* 清屏 */
			mvprintw(y, x, "O");
			refresh();
			
			usleep(DELAY);
			
			next_x = x + direction; 
			next_y = y + direction; 
			
			if(next_x >= max_x || next_x < 0 || next_y >= max_y || next_y < 0)
			{
				direction = (-1) * direction;
			}
			else
			{
				x = x + direction;
				y = y + direction;
			}
		}
	endwin();  /* 恢复终端 */
	std::cout<<"who are you";
}