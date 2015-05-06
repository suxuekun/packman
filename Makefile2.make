
EXC = VladPackManGame2
OBJS = Cookie.o VladPackManGame2.o Board2.o VectorBoardObjects.o Player.o Wall.o Monster.o Bomb.o
DBG=-g

VladPackManGame2 : $(OBJS)
	g++ $(DBG)  $(OBJS) -o  VladPackManGame2

VladPackManGame2.o : BoardH2.h VladPackManGame2.cpp
	g++ $(DBG) -c VladPackManGame2.cpp -o VladPackManGame2.o

Player.o : PlayerH.h BoardObjectH.h Player.cpp
	g++ $(DBG) -c Player.cpp -o Player.o 

Wall.o : WallH.h BoardObjectH.h Wall.cpp
	g++ $(DBG) -c Wall.cpp -o Wall.o

Bomb.o : BombH.h BoardObjectH.h Bomb.cpp
	g++ $(DBG) -c Bomb.cpp -o Bomb.o

Monster.o : MonsterH.h BoardObjectH.h Monster.cpp
	g++ $(DBG) -c Monster.cpp -o Monster.o

Cookie.o : CookieH.h BoardObjectH.h Cookie.cpp
	g++ $(DBG) -c Cookie.cpp -o Cookie.o 

Board2.o : BoardH2.h Board2.cpp BoardObjectH.h VectorBoardObjectsH.h PlayerH.h WallH.h CookieH.h
	g++ $(DBG) -c Board2.cpp -o Board2.o

VectorBoardObjects.o : VectorBoardObjectsH.h BoardObjectH.h VectorBoardObjects.cpp PlayerH.h CookieH.h MonsterH.h BombH.h
	g++ $(DBG) -c VectorBoardObjects.cpp -o VectorBoardObjects.o


clean :
	rm $(OBJS) VladPackManGame
