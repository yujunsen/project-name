#ifndef _MAP_H_
#define _MAP_H_

typedef struct
{
    int 	length;
    int 	width;
	int 	food_flag;
    int     food_xy[2];
	char 	tu[5];
	char 	map[9][9];
}Map_InitTypeDef;

//void Snake_init(Snake_InitTypeDef *s);
void Map_Init(Map_InitTypeDef *m);
void Map_Update(Map_InitTypeDef *m);

#endif