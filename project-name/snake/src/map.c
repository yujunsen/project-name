#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "map.h"

void Get_Food(Map_InitTypeDef *m)
{
	int x, y;
    if(!m->food_flag)
    {
        do
        {
            x = rand()%(m->length - 1);
            y = rand()%(m->width - 1);
        }while(m->map[x][y] != m->tu[0]);
        m->map[x][y] = m->tu[4];
        m->food_flag = 1;
    }
    m->food_xy[0] = x;
    m->food_xy[1] = y;
}

void Map_Init(Map_InitTypeDef *m)
{
	srand((unsigned)time(NULL)); 
	m->length   	= 9;
	m->width       	= 9;
	m->tu[0]    	= ' ';
	m->tu[1]    	= '|';
	m->tu[2]    	= '_';
	m->tu[3]    	= '-';
	m->tu[4]    	= 'O';
    m->food_flag    = 0;
	for(int i = 0; i < m->length; i++)
	{
		for(int j = 0; j < m->width; j++)
		{
			//m->map[i][j] = m->tu[rand()%4];
			//m->map[i][j] = m->tu[1];
            if(!i)
                m->map[i][j] = m->tu[2];
            else if(i == m->length - 1)
                m->map[i][j] = m->tu[3];
            else if(!j)
                m->map[i][j] = m->tu[1];
            else if(j == m->width -1)
                m->map[i][j] = m->tu[1];
            else
                m->map[i][j] = m->tu[0];
		}
	}
	Get_Food(m);
}

void Map_Update(Map_InitTypeDef *m)
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