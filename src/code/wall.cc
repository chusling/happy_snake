/**********************************************/
/* 2020-03-04                                 */
/* version 1.0                                */
/* chusling all right reversive               */
/**********************************************/
#include <ncurses.h>
#include <unistd.h>
#include <string.h>
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
    // std::cout << max_x  << "\n max_y = " <<max_y << std::endl;
    // std::cout << max_x / 2  << "\n max_ymax_y / 3 = " <<max_y / 2 << std::endl;
    // sleep(2);
    for (int i = 0; i < max_x; i++) {
        mvprintw(0, i, "*");
        mvprintw(max_y - 1, i, "*");
        sleep(sleep_time);
        refresh(); /* 更新显示器 */
    }
    for (int j = 0; j < max_y; j++) {
        mvprintw(j, 0, "*");
        mvprintw(j, max_x - 1, "*");
        sleep(sleep_time);
        refresh(); /* 更新显示器 */
    }
    name_x_ = max_x / 2 - 10;
    name_y_ = max_y / 3;

    mvprintw(name_y_, name_x_, Name_);
    refresh(); /* 更新显示器 */

    sleep(1);
    for (int k = name_x_; k < name_x_ + strlen(Name_);k++) {
        mvprintw(name_y_, k, " ");
        refresh(); /* 更新显示器 */
        usleep(DELAY_);

    }

    // mvprintw(max_y / 3 + 1, (max_x - strlen(Snake_)) / 2, Snake_);
	// refresh(); /* 更新显示器 */

    // mvprintw(max_y / 3 + 5, max_x / 2 - 6, "#");
    // mvprintw(max_y / 3 + 6, max_x / 2 - 6, "#");
    // mvprintw(max_y / 3 + 6, max_x / 2 - 5, "###");
    std::cout<< Snake_;
    refresh(); /* 更新显示器 */
    sleep(1);
    char body[20] = "";
    char temp_body[20] = "";
	for (int ns = 2; ns < max_x + 9; ns++) {
        
        // std::cout<< ns;

        if (ns < 10) {
            strcat(temp_body,"#");
            // std::cout << ns << temp_body << std::endl;
        } 
        if (ns > 9) {
            mvprintw(name_y_ + 1, ns - 9, " ");
            mvprintw(name_y_ + 1, 0, "*");
            mvprintw(name_y_ + 1, max_x - 1, "*");
            // std::cout << ns << temp_body << std::endl;

            refresh(); /* 更新显示器 */
            // do nothing 
        }
        // std::cout<< Snake_;
        // // refresh(); /* 更新显示器 */
        // sleep(5);
        strcpy(body,temp_body);

        // if (ns > max_x - 20) {
        //     mvprintw(name_y_ + 1, ns, body); 
        //     mvprintw(name_y_ + 1, ns, " ");
        //     mvprintw(name_y_ + 2, max_x - 2, "*");
        //     mvprintw(name_y_ + 2, 0, "*");
        // }
        if (ns > max_x -9) {
            mvprintw(name_y_ + 2, 1, "                     ");
            refresh(); /* 更新显示器 */
            usleep(40000);
            continue;
        }
        strcat(body,Snake_);

        mvprintw(name_y_ + 1, ns, body);

        // mvprintw(name_y_ + 20, 20, body); 
        // mvprintw(name_y_ + 40, 20, temp_body); 

        
        refresh(); /* 更新显示器 */
        usleep(40000);

    }
	refresh(); /* 更新显示器 */
	
	sleep(90);

    endwin();  /* 恢复终端 */
}

}//end of happy_snake
