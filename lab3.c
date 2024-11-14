#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include "lab3.h"

extern int** sudoku_board;
int* worker_validation;

int** read_board_from_file(char* filename){
    FILE *fp = NULL;
    int** board = NULL;

    // replace this comment with your code
    for (int i = 0; i < ROW_SIZE; i++) {
        board[i] = (int*)malloc(sizeof(int) * COL_SIZE);  // Allocate memory for columns
        if (!board[i]) {
            perror("Error allocating memory for board columns");
            fclose(fp);
            return NULL;
        }

        // Read each number from file
        for (int j = 0; j < COL_SIZE; j++) {
            if (fscanf(fp, "%d,", &board[i][j]) != 1) {
                perror("Error reading data from file");
                fclose(fp);
                return NULL;
            }
        }
    }
    fclose(fp);
    return board;
}


int is_board_valid(){
    pthread_t* tid;  /* the thread identifiers */
    pthread_attr_t attr;
    param_struct* parameter;
    
    // replace this comment with your code
    
    
}
