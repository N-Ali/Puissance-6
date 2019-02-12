#ifndef __BASE__
#define __BASE__
#include <stdio.h>
#include <stdlib.h>
#include "jeu.h"
#include "verif.h"
#include "io.h"
#endif

int matchNUL(char grille[10][12]);

int haut(char grille[10][12], int lig,int col,char C,int acc);

int bas(char grille[10][12],int lig,int col,char C,int acc);

int droit(char grille[10][12],int lig,int col,char C,int acc);

int droit1(char grille[10][12],int lig,int col,char C);

int gauche(char grille[10][12], int lig,int col,char C,int acc);

int verifVertical(char grille[10][12]);

int verifHorizontal(char grille[10][12]);