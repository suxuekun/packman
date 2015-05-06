#ifndef H_MONSTER
#define H_MONSTER
#include <iostream>

#include "BoardObjectH.h"

class Monster : public BoardObject
{
    
private:
    ObjectColours color1;
    
public:
	Monster (int start_x, int start_y):BoardObject(start_x,start_y)
    {
        color1 = GREEN;
        myClass=A_MONSTER;
    };
    
	virtual void touch ();
};
