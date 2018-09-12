
#include "main_aux.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

extern int blockRows;
extern int blockCols;
extern int mark_errors;


void del_from_arr(int position, int numbersLeft, int availableNumbers[]) {
    /*
     * Simulates deletion of element in given position in array by shifting left elements
     */
    int c;
    for ( c = position - 1 ; c < numbersLeft - 1 ; c++ ) {
        availableNumbers[c] = availableNumbers[c+1];
    }
}

void memory_error(char* func){
    /*
     * Prints error message and exists the program
     */
    printf("Error: %s has failed\n", func);
    exit(0);
}

bool is_integer(char *s){
    char * t;
    for (t = s; *t != '\0'; t++) {
        if (*t == '.' || isalpha(*t)) {
            return false;
        }
    }
    return true;
}

int get_block_col_index(int column){
    int initialCol;
    int blockNumberCols = 1 + ((column - 1) / blockCols);
    initialCol = blockCols * (blockNumberCols - 1);
    return initialCol;
}

int get_block_row_index(int row){
    int initialRow;
    int blockNumberRows = 1 + ((row - 1) / blockRows);
    initialRow = blockRows * (blockNumberRows - 1);
    return initialRow;
}
bool valid_board_index(int index, int N){
    if (index < 1 || index > N ) {
        return false;
    }
    return true;
}

bool valid_set_value(int val, int N){
    if (val < 0 || val > N ) {
        return false;
    }
    return true;
}
