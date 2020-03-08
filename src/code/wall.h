/**********************************************/
/* 2020-03-04                                 */
/* version 1.0                                */
/* chusling all right reversive               */
/**********************************************/
#pragma once

#include "common.h"

namespace happy_snake {
    
class wall {

private:
    int name_x_;
    int name_y_;
    // char name_[20] =  "****Happy_Snake****" ;
    // std::string Name_1 = "hello";
    const char Name_[20] = "****Happy_Snake****";
    char Snake_[20] = "@";
    int DELAY_ = 30000; 
    /* data */
public:
    wall(/* args */) = default;
    ~wall() = default;
    void build_wall(void);



};
}//end of happy_snake
