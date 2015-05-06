#ifndef H_BOMB
#define H_BOMB
#include <iostream>

#include "BoardObjectH.h"

class Bomb : public BoardObject
{
    
private:
    ObjectColours color1;
    
public:
	Bomb (int start_x, int start_y):BoardObject(start_x,start_y)
    {
        color1 = WHITE;
        myClass=A_BOMB;
    };
    
	virtual void touch ();
};
#endif
