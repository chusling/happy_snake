/**********************************************/
/* 2020-03-04                                 */
/* version 1.0                                */
/* chusling all right reversive               */
/**********************************************/
#include <ncurses.h>
#include <unistd.h>
#include "wall.h"
// #include "../proto/wall_config.pb.h"

namespace happy_snake {

#define sleep_time 0
void wall::build_wall(void) {
    // int x = 0;
	// int y = 0;
	int max_x = 0,max_y = 0;
	// int next_x = 0;
	// int next_y = 0;
	// int direction = 1;
	initscr(); /* 初始化屏幕 */
	
	noecho(); /* 屏幕上不返回任何按键 */
	
	curs_set(FALSE); /* 不显示光标 */

    getmaxyx(stdscr, max_y, max_x);/* 获取屏幕尺寸 */ 
    for (int i = 0; i < max_x; i++) {
        mvprintw(1, i, "*");
        mvprintw(max_y, i, "*");
        sleep(sleep_time);
        refresh(); /* 更新显示器 */
    }
    for (int j = 0; j < max_y; j++) {
        mvprintw(j, 1, "*");
        mvprintw(j, max_y, "*");
        sleep(sleep_time);
        refresh(); /* 更新显示器 */
    }
    mvprintw(5, 5, "Hello, world!");
	
	refresh(); /* 更新显示器 */
	
	sleep(10);

    endwin();  /* 恢复终端 */
}

}//end of happy_snake
