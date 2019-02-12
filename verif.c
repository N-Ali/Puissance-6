#include "verif.h"


int matchNUL(char grille[10][12]) {
	int lig,col;
	for (lig=0; lig < 10; lig++) {
		for(col=0;col<12;col++) {
			if(grille[lig][col] == '.')
				return 0;
		}
	}
	return 1;
}




int haut(char grille[10][12], int lig,int col,char C,int acc) {
	int tmp ;
	for(tmp=0;lig >=0 ;lig--) {
		tmp++;
		if(grille[lig][col] != C)
			return 0;
		if(tmp > 4)// on peut monter que de 4 maximum
			return 0;
		acc++;
		if(acc == 6)
			return 1;
	}
	return 0;
}

int bas(char grille[10][12],int lig,int col,char C,int acc) {
	int tmp;
	for(tmp =0;lig<=9;lig++) {
		tmp++;
		if(grille[lig][col] != C)
			return 0;
		if(tmp > 4)
			return 0;
		acc++;
		if(acc == 6)
			return 1;
	}
	return 0;
}


int droit(char grille[10][12],int lig,int col,char C,int acc) {
	int tmp;
	for(tmp = 0;col<=11;col++) {
		tmp++;	
		if(grille[lig][col] != C)
			return 0;
		if(tmp > 4)
			return 0;
		acc++;
		if(acc >= 6)
			return 1;
	}
	return 0;
}

//Fonction pour le seul L qui pose problème
int droit1(char grille[10][12],int lig,int col,char C) {
	int tmp = 0;
	for(;col<=11;col++) {
		if(grille[lig][col] != C)
			return tmp;
		if(tmp == 4)
			return tmp;
		tmp++;
	}
	return tmp;
}




int gauche(char grille[10][12], int lig,int col,char C,int acc) {
	int tmp;
	for(tmp=0;col>=0;col--) {
		tmp++;
		if(grille[lig][col] != C)
			return 0;
		if(tmp > 4)
			return 0;
		acc++;
		if(acc == 6)
			return 1;
	}
	return 0;
}





int verifVertical(char grille[10][12]){
	int lig, col, acc,tmp1;
	acc = 0;

	for(col=0; col <= 11; col++){
		for(lig=0; lig<10;lig++){
			if(grille[lig][col] == 'X') {
				acc += 1;

				if(acc == 1) {//je stock à droite. Pas besoin à gauche car ça revient
					if(col < 11)
						tmp1 = droit1(grille,lig,col+1,'X');
					else
						tmp1 = -1;	//à faire horizontal
					if(gauche(grille,lig,col-1,'X',acc))
						return 1;
				}
				else if(acc == 3 || acc == 4) {
					if(droit(grille,lig,col+1,'X',acc))
						return 1;
					if(gauche(grille,lig,col-1,'X',acc))
						return 1;
				}

				if(acc == 6)
					return 1;
				
				if(grille[lig + 1][col] != 'X') {
					tmp1 += acc;
					if(tmp1 >= 6)
						return 1;
					acc = 0;
				}
				
			}
			else if(grille[lig][col] == 'O') {
				acc += 1;

				if(acc == 1) {
					if(col < 11)
						tmp1 = droit1(grille,lig,col+1,'O');
					else
						tmp1 = -1;
					if(gauche(grille,lig,col-1,'O',acc))
						return 1;
				}
				else if(acc == 3 || acc == 4) {
					if(droit(grille,lig,col+1,'O',acc))
						return 1;
					if(gauche(grille,lig,col-1,'O',acc))
						return 1;
				}

				if(acc == 6)
					return 1;
				
				if(grille[lig + 1][col] != 'O') {
					tmp1 += acc;
					if(tmp1 >= 6)
						return 1;
					acc = 0;	
				}
			}
		}
	}
	return 0;
}


int verifHorizontal(char grille[10][12]){
	int lig, col, acc;
	acc = 0;
	for(lig=0; lig < 10; lig++) {
		for(col=0; col<=11;col++) {
			//printf("%c",grille[lig][col]);
			if(grille[lig][col] == 'X') { //Si on croise un X
				acc += 1;
			//printf("ACC = %d\n", acc);
				if(acc == 1 || acc == 3 || acc == 4) { //Pour la recherche en L
					if(haut(grille,lig-1,col,'X',acc))
						return 1;
					if(bas(grille,lig+1,col,'X',acc))
						return 1;
				}
				if(acc == 6)
					return 1;
				
				if(grille[lig][col + 1] != 'X')
					acc = 0;
				
			}
			else if(grille[lig][col] == 'O'){
				acc += 1;
				//printf("ACC = %d\n", acc);
				if(acc == 1 || acc == 3 || acc == 4) {
					if(haut(grille,lig-1,col,'O',acc))
						return 1;
					if(bas(grille,lig+1,col,'O',acc))
						return 1;
				}
				if(acc == 6)
					return 1;
				
				if(grille[lig][col + 1] != 'O')
					acc = 0;
				
			}
		}
	}
	return 0;
}