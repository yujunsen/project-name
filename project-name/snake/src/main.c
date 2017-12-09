#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    int length;
    int x;
    int y;
    int speed;
}Snake_InitTypeDef;

typedef struct
{
    int 	length;
    int 	width;
	int 	food;
	char 	tu[5];
	char 	map[9][9];
}Map_InitTypeDef;

void snake_init(Snake_InitTypeDef *s)
{
    s->length	= 3;
	s->speed	= 50;
	s->x 		= 3;
	s->y		= 0;
}

void map_init(Map_InitTypeDef *m)
{
	m->length 	= 9;
	m->width 	= 9;
	m->food		= 0;
	m->tu[0]	= ' ';
	m->tu[1] 	= '|';
	m->tu[2]	= '_';
	m->tu[3]	= '-';
	m->tu[4]	= 'O';
	for(int i = 0; i < m->length; i++)
	{
		for(int j = 0; j < m->width; j++)
		{
			//m->map[i][j] = m->tu[rand()%4];
			//m->map[i][j] = m->tu[1];
			if(!i)
		}
	}
}

void map_update(Map_InitTypeDef *m)
{
	for(int i = 0; i < m->length; i++)
	{
		for(int j = 0; j < m->width; j++)
		{
			fputc(m->map[i][j], stdout);
			//printf("%c\t", m->map[m->length][m->width]);
			putchar(' ');
		}
		putchar('\n');
	}
}

int main()
{
	srand((unsigned)time(NULL)); 
	Map_InitTypeDef map;
	map_init(&map);
	map_update(&map);
	

    return 0;
}
