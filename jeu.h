#ifndef __BASE__
#define __BASE__
#include <stdio.h>
#include <stdlib.h>
#include "jeu.h"
#include "verif.h"
#include "io.h"
#endif

void plateau(char grille[10][12]);

int placer(char grille[10][12], int col,int tour);

void jeu(char grille[10][12]);