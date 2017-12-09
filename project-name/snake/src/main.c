#include <stdio.h>

#include <string.h>

#include "map.h"

typedef struct
{
    int length;
    int x;
    int y;
    int speed;
}Snake_InitTypeDef;


void Snake_init(Snake_InitTypeDef *s)
{
    s->length	= 3;
	s->speed	= 5;
	s->x 		= 3;
	s->y		= 1;
}



int main()
{
	Map_InitTypeDef map;
	Map_Init(&map);
	//Get_Food(&map);
	Map_Update(&map);
	

    return 0;
}
