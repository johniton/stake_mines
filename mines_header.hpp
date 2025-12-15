#ifndef MINES_HEADER_HPP
#define MINES_HEADER_HPP




extern int A[5][5];  // Declaration of the array
void arr_initialization(int A[][5]);
void arr_display(int A[][5]);
int mine_generator();
void main_game(float& money, int mines);
void check(int mines);
void loser(float& money, int mines , int B[]);
void winner(float& money, int mines);
float display_money(float money);
bool mine_check(int chance,int mines,int B[]);





#endif
