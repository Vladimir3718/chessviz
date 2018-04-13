#include <stdio.h>
#include <stdlib.h>
#include "board_read.h"
#include "board_print_plain.h"
#include "board.h"
int main()
{
char  a[9][9];
int y=1;
bbuild(a);
bprint(a);
do{
printf("\nВаш ход?\n");
step(a);
bprint(a);
printf("\nПродолжить игру? 1/0\n");
scanf("%d",&y);
}while(y);
return 0;
}
