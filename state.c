#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "snake_utils.h"
#include "state.h"

/* Helper function definitions */
static void set_board_at(game_state_t* state, int x, int y, char ch);
static bool is_tail(char c);
static bool is_head(char c);
static bool is_snake(char c);
static char body_to_tail(char c);
static char head_to_body(char c);
static unsigned int get_next_x(unsigned int cur_x, char c);
static unsigned int get_next_y(unsigned int cur_y, char c);
static void find_head(game_state_t* state, unsigned int snum);
static char next_square(game_state_t* state, unsigned int snum);
static void update_tail(game_state_t* state, unsigned int snum);
static void update_head(game_state_t* state, unsigned int snum);


/* Task 1 */
game_state_t* create_default_state() {
  // TODO: Implement this function.

  /*dynamic memory*/
  game_state_t *state = malloc(sizeof(game_state_t));
  if(state == NULL)
    fprintf(stderr, "allocation failed\n");

  state->num_rows = 18;
  state->num_snakes = 1;

  state->board =  malloc(state->num_rows * sizeof(char *));
  for(int i = 0; i < state->num_rows; i++) {
    state->board[i] = malloc(20 * sizeof(char));
    if(state->board[i] == NULL)
      fprintf(stderr, "Allocation failed\n");
  }
  state->snakes = malloc(sizeof(snake_t)); 
  state->snakes->head_x = 4;
  state->snakes->head_y = 2;
  state->snakes->tail_x = 2;
  state->snakes->tail_y = 2;
  state->snakes->live = true;

  for(int i = 0; i < 18; i++) {
    for(int j = 0; j < 20; j++) {
      if(i == 0 || j == 0 || i == 17 || j == 19) {
        set_board_at(state, j, i, '#');
      }
      else if(i == 2 && j == 9) {
        set_board_at(state, j, i, '*');
      }
      else if(i == state->snakes->tail_y && j == state->snakes->tail_x) {
        set_board_at(state, j, i, 'd');
      }
      else if(i == state->snakes->tail_y && j == state->snakes->tail_x + 1) {
        set_board_at(state, j, i, '>');
      }
      else if(i == state->snakes->head_y && j == state->snakes->head_x) {
        set_board_at(state, j, i, 'D');
      }
      else {
        set_board_at(state, j, i, ' ');
      }
    }
  }

  /*state->board = malloc((18 * 20) * sizeof(char));
  if(state->board == NULL)
    fprintf(stderr, "allocation failed\n");
  
  create board
  strcpy(state->board[0],("####################\n"));
  for(int i = 1; i < 17; i++)
  {
    strcpy(state->board[i], ("#                  #\n"));
  }
  beacause state->board[2] is already pointing to something on the heap, free it before allocating a new
  free(state->board[2]);
  strcpy(state->board[17], ("####################\n"));
  strcpy(state->board[2], ("# d>D    *         #\n"));
  */
  return state;
}


/* Task 2 */
void free_state(game_state_t* state) {
  // TODO: Implement this function.
  for(int i = 0; i < state->num_rows; i++) {
    free(state->board[i]);
  }
  free(state->board);
  free(state->snakes);
  free(state);
  return;
}

/* Task 3 */
void print_board(game_state_t* state, FILE* fp) {
  // TODO: Implement this function.
  for(int i = 0; i < state->num_rows; i++) {
    fprintf(fp, "%s\n", state->board[i]);
  }
  return;
}

/*
  Saves the current state into filename. Does not modify the state object.
  (already implemented for you).
*/
void save_board(game_state_t* state, char* filename) {
  FILE* f = fopen(filename, "w");
  print_board(state, f);
  fclose(f);
}


/* Task 4.1 */

/*
  Helper function to get a character from the board
  (already implemented for you).
*/
char get_board_at(game_state_t* state, unsigned int x, unsigned int y) {
  return state->board[y][x];
}

/*
  Helper function to set a character on the board
  (already implemented for you).
*/
static void set_board_at(game_state_t* state, int x, int y, char ch) {
  state->board[y][x] = ch;
}

/*
  Returns true if c is part of the snake's tail.
  The snake consists of these characters: "wasd"
  Returns false otherwise.
*/
static bool is_tail(char c) {
  // TODO: Implement this function.
  if(c == 'w' || c == 'a' || c == 's' || c == 'd') {
    return true;
  }
  else {
    return false;
  }
}

/*
  Returns true if c is part of the snake's head.
  The snake consists of these characters: "WASDx"
  Returns false otherwise.
*/
static bool is_head(char c) {
  // TODO: Implement this function.
  if(c == 'W' || c == 'A' || c == 'S' || c == 'D' || c =='x') {
    return true;
  }
  else {
    return false;
  }
}

/*
  Returns true if c is part of the snake.
  The snake consists of these characters: "wasd^<>vWASDx"
*/
static bool is_snake(char c) {
  // TODO: Implement this function.
  char* s = "wasdWASDx^<>v";
  for(int i = 0; i < strlen(s); i++) {
    if(c == s[i])
      return true;
  }
  return false;
}

/*
  Converts a character in the snake's body ("^<>v")
  to the matching character representing the snake's
  tail ("wads").
*/
static char body_to_tail(char c) {
  // TODO: Implement this function.
  if(c == '^') {
    return c = 'w';
  }
  else if(c == '<') {
    return c = 'a';
  }
  else if(c == '>') {
    return c = 'd';
  }
  else if(c == 'v') {
    return c = 's';
  }

  return c;
}

/*
  Converts a character in the snake's head ("WASD")
  to the matching character representing the snake's
  body ("^<>v").
*/
static char head_to_body(char c) {
  // TODO: Implement this function.
  if(c == 'W') {
    return c = '^';
  }
  else if(c == 'A') {
    return c = '<';
  }
  else if(c == 'D') {
    return c = '>';
  }
  else if(c == 'S') {
    return c = 'v';
  }
  else {
    return c;
  }
}

/*
  Returns cur_x + 1 if c is '>' or 'd' or 'D'.
  Returns cur_x - 1 if c is '<' or 'a' or 'A'.
  Returns cur_x otherwise.
*/
static unsigned int get_next_x(unsigned int cur_x, char c) {
  // TODO: Implement this function.
  if(c == '>' || c == 'd' || c == 'D') {
    return (cur_x + 1);
  }
  else if(c == '<' || c == 'a' || c == 'A') {
    return (cur_x - 1);
  }
  else {
    return cur_x;
  }
}

/*
  Returns cur_y - 1 if c is '^' or 'w' or 'W'.
  Returns cur_y + 1 if c is 'v' or 's' or 'S'.
  Returns cur_y otherwise.
*/
static unsigned int get_next_y(unsigned int cur_y, char c) {
  // TODO: Implement this function.
  if(c == '^' || c == 'w' || c == 'W') {
    return cur_y - 1;
  }
  else if(c == 'v' || c == 's' || c == 'S') {
    return cur_y + 1;
  }
  else {
    return cur_y;
  }
}

/*
  Task 4.2
  Helper function for update_state. Return the character in the cell the snake is moving into.
  This function should not modify anything.
*/
static char next_square(game_state_t* state, unsigned int snum) {
  // TODO: Implement this function.
  unsigned int head_x = state->snakes[snum].head_x;
  unsigned int head_y = state->snakes[snum].head_y;
  char ch = get_board_at(state, head_x, head_y);
  return get_board_at(state, get_next_x(head_x, ch), get_next_y(head_y, ch));
}

/*
  Task 4.3
  Helper function for update_state. Update the head...
  ...on the board: add a character where the snake is moving
  ...in the snake struct: update the x and y coordinates of the head
  Note that this function ignores food, walls, and snake bodies when moving the head.
*/
static void update_head(game_state_t* state, unsigned int snum) {
  // TODO: Implement this function.
  for(int i = 0; i < 18; i++) {
    for(int j = 0; j < 20; j++) {
      if(state->board[i][j] == 'A' || state->board[i][j] == 'D') {
        state->snakes->head_x = get_next_x(state->snakes->head_x, state->board[i][j]);
        state->board[i][state->snakes->head_x] = state->board[i][j];
        state->board[i][j] = head_to_body(state->board[i][j]);
        break;
      }
      if(state->board[i][j] == 'W' || state->board[i][j] == 'S') {
        state->snakes->head_y = get_next_y(state->snakes->head_y, state->board[i][j]);
        state->board[state->snakes->head_y][j] = state->board[i][j];
        state->board[i][j] = head_to_body(state->board[i][j]);
        break;
      }
    }
  }
  return;
}

/*
  Task 4.4
  Helper function for update_state. Update the tail...
  ...on the board: blank out the current tail, and change the new
  tail from a body character (^v<>) into a tail character (wasd)
  ...in the snake struct: update the x and y coordinates of the tail
*/
static void update_tail(game_state_t* state, unsigned int snum) {
  // TODO: Implement this function.
  for(int i = 0; i < 18; i++) {
    for(int j = 0; j < 20; j++) { 
      if(state->board[i][j] == 'a' || state->board[i][j] == 'd') {
        state->snakes->tail_x = get_next_x(state->snakes->tail_x, state->board[i][j]);
        state->board[i][state->snakes->tail_x] = body_to_tail(state->board[i][state->snakes->tail_x]);
        state->board[i][j] = ' ';
        break;
      }
      if(state->board[i][j] == 'w' || state->board[i][j] == 's') {
        state->snakes->tail_y = get_next_y(state->snakes->tail_y, state->board[i][j]);
        state->board[state->snakes->tail_y][j] = body_to_tail(state->board[state->snakes->tail_y][j]);
        state->board[i][j] = ' ';
        break;
      }
    }
  }
  return;
}


/* Task 4.5 */
void update_state(game_state_t* state, int (*add_food)(game_state_t* state)) {
  // TODO: Implement this function.
  if(next_square(state, 0) == ' ') {
    update_head(state, 0);
    update_tail(state, 0);
  }
  else if(next_square(state, 0) == '*') {
    update_head(state, 0);
    add_food(state);
  }
  else if(next_square(state, 0) == '#' || is_tail(next_square(state, 0))) {
    for(int i = 0; i < 18; i++) {
      for(int j = 0; j < 20; j++) {
        if(is_head(state->board[i][j])) {
          state->board[i][j] = 'x';
        }
      }
    }
    state->snakes->live = false;
  }
  return;
}
  
/* Task 5 */
game_state_t* load_board(char* filename) {
  // TODO: Implement this function.
  return NULL;
}


/*
  Task 6.1
  Helper function for initialize_snakes.
  Given a snake struct with the tail coordinates filled in,
  trace through the board to find the head coordinates, and
  fill in the head coordinates in the struct.
*/
static void find_head(game_state_t* state, unsigned int snum) {
  // TODO: Implement this function.
  return;
}


/* Task 6.2 */
game_state_t* initialize_snakes(game_state_t* state) {
  // TODO: Implement this function.
  return NULL;
}