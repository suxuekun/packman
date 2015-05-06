#include <iostream>
#include "BoardObjectH.h"
#include "VectorBoardObjectsH.h"

VectorBoardObjects:: VectorBoardObjects(p_BoardObject newOne):list()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    list.insert(it,newOne);
}

p_BoardObject VectorBoardObjects:: theFirst()
{
    if (0 < list.size()  )
    { internalIterator=list.begin();
        return (*internalIterator);
    }
    else
		return NULL;
}


void VectorBoardObjects:: addOne(p_BoardObject newOne)
{
    if (list.size() <4){
        std::vector <p_BoardObject>:: iterator it;
        it=list.begin();
        list.insert(it,newOne);
    }
}

p_BoardObject VectorBoardObjects :: theNext()
{
    internalIterator++;
    if (internalIterator < list.end())
    {
        return (*internalIterator);
    }
    else
		return NULL;
}

void VectorBoardObjects :: removeOnePlayer()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_PLAYER==(*it)->get_Type())
    { list.erase(it); return;}
        it++;
    }
    
    return ;
}


bool VectorBoardObjects :: isThereAWall()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_WALL==(*it)->get_Type())
    {  return true;}
        it++;
    }
    
    return false ;
}
bool VectorBoardObjects :: isThereAMonster()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_MONSTER==(*it)->get_Type())
    {  return true;}
        it++;
    }
    
    return false ;
}
bool VectorBoardObjects :: isThereABomb()
{
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_BOMB==(*it)->get_Type())
    {  return true;}
        it++;
    }
    
    return false ;
}


int VectorBoardObjects :: isCookieValue()
{   int temp=0;
    std::vector <p_BoardObject>:: iterator it;
    it=list.begin();
    while (it<list.end())
    { if (A_COOKIE==(*it)->get_Type())
    { temp= ((Cookie *)(*it))->get_value();
        list.erase(it);
        return temp;
    }
        it++;
    }
    
    return temp ;
}
