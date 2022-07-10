#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include"state.h"

void set_board_at(game_state_t *state, unsigned int x, unsigned int y, char ch);
/*Task 1*/

game_state_t *create_default_state()
{
    /*dynamic memory*/

    game_state_t *state = malloc(sizeof(game_state_t));
    if(state == NULL)
        fprintf(stderr, "allocation failed\n");
    
    state->board = malloc((18 * 20) * sizeof(char));
    if(state->board == NULL)
        fprintf(stderr, "allocation failed\n");

    /*create board*/

    state->board[0] = strdup("####################");
    for(int i = 1; i < 17; i++)
    {
        state->board[i] = strdup("#                  #");

    }
    /*beacause state->board[2] is already pointing to something on the heap, free it before allocating a new*/
    free(state->board[2]);
    state->board[17] = strdup("####################");
    state->board[2]  = strdup("# d>D    *         #");

    return state;
}

/*task 2*/

void free_state(game_state_t* state)
{   
    for(int i = 0; i < 18; i++)
    {
        free(state->board[i]);
    }
    free(state->board);
    free(state->snakes);
    free(state);
}

void set_board_at(game_state_t *state, unsigned int x, unsigned int y, char ch)
{
    state->board[y][x] = ch;
}

void print_board(game_state_t *state, FILE* fp)
{
    for(int i = 0; i < 18; i++)
    {
        fprintf(fp, "%s\n", state->board[i]);
    }
}

void save_board(game_state_t *state, char* filename)
{
    FILE* f = fopen(filename, "w");
    print_board(state, f);
    fclose(f);
}

int main()
{
    game_state_t *a = create_default_state();
    char c[80] = "unit_test_out.snk";
    save_board(a, c);
    free_state(a);
}
