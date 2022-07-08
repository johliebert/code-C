#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
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

void set_board(game_state_t* state, int row, int colum, char grid)
{
    state->board[row][colum] = grid;
}

game_state_t *create_default_state()
{
    game_state_t *state = malloc(sizeof(game_state_t));
    if(state == NULL)
        fprintf(stderr, "Malloc failed\n");
    state->num_rows = 18;
    state->num_sneakes = 1;

    state->board = malloc(state->num_rows * sizeof(char *));
    for(int i = 0; i < state->num_rows; i++)
    {   
        state->board[i] = malloc(20 * sizeof(char));
        if(state->board[i] == NULL )
            fprintf(stderr, "malloc failed]n");
    }

/*first input all by # */
    for(int i = 0; i < state->num_rows; i++)
    {
        for(int j = 0; j < 20; j++)
            set_board(state, i, j, '#');
    }

/*create space*/
    for(int i = 1; i < state->num_rows - 1; i++)
    {
        for(int j = 1; j < 19; j++)
            set_board(state, i, j, ' ');
    }


    state->snakes = malloc(sizeof(snake_t));
    if(state->snakes == NULL)
        fprintf(stderr, "Malloc failed\n");
/*x is colum, y is row*/
    state->snakes->tail_x = 2;
    state->snakes->tail_y = 2;
    state->snakes->head_x = 4;
    state->snakes->head_y = 2;  
    state->snakes->live = true;

/* index of tail */
    set_board(state, state->snakes->tail_y, state->snakes->tail_x, 'd');
/* index of head */
    set_board(state, state->snakes->head_y, state->snakes->head_x, 'D');
/* index of fruit, zero index */
    set_board(state, 2, 9, '*');    

    return state;
}

/*Task 2*/
void free_state(game_state_t *state)
{
    free(state->snakes);
    for(int i = 0; i < state->num_rows; i++)
    {
        free(state->board[i]);
    }
    free(state->board);
    free(state);
}


/*Task 3*/
void print_board(game_state_t *state, FILE* fp)
{
    for(int i = 0; i < state->num_rows; i++)
    {
            fprintf(fp, "%s\n", state->board[i]);
    }
}


int main()
{
    FILE *fp = fopen("board.txt", "w");
    print_board(create_default_state(), fp);
    free(create_default_state());
}