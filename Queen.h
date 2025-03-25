#ifndef QUEEN_H
#define QUEEN_H
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
} Queen;

void solve(FILE *input);

#endif