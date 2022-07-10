#include<stdbool.h>
#include<stdio.h>

typedef struct 
{
    unsigned int tail_x; 
    unsigned int tail_y;
    unsigned int head_x;
    unsigned int head_y;

    bool live;
}snake_t;

typedef struct 
{
    unsigned int num_rows;
    char **board;
    unsigned int num_sneakes;
    snake_t *snakes;

}game_state_t;