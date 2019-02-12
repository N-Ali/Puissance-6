#include "jeu.h"

	
void plateau(char grille[10][12]) {
	int lig,col;
	for(lig=0;lig<10;lig++) {
		for(col=0;col<12;col++) {
			grille[lig][col] = '.';
		}
	}
}


//                 la colonne où placer    X ou O
int placer(char grille[10][12], int col,int tour) {
	int lig;
	for(lig=9;lig>=0;lig--) { //on part su bas de la colonne
		if(grille[lig][col] == '.') { //si on peut placer
			if(tour == 0)
				grille[lig][col] = 'O';
			else
				grille[lig][col] = 'X';
			return 1;  //on retourne 1 car c'est finis
		}

	}
	return 0; //on retourne 0 pour faire savoir que la colonne est pleine
}




void jeu(char grille[10][12]) {
	int tour,choix,tmp;
	tour = 0;
	while(1) {
		afficher(grille);
		do { //tant que le joueur ne choisis pas le numéro d'une colonne
			choix = -1; //Pour que viderBuffer marche complètement
			printf("Joueur%d choisissez une colonne : ",tour+1);
			scanf("%d",&choix);
			viderBuffer();
			if(choix <0 || choix >11)
				printf("Choisissez le numéro d'une colonne !\n\n");

		}while(choix <0 || choix >11);

		tmp = placer(grille,choix,tour); //on place et on stock le res de placer
		if(!tmp) // si tmp vaut 0 on n'a pas pu placer
			printf("colonne pleine !\n\n");
	
		else if(verifVertical(grille) || verifHorizontal(grille)) {
			afficher(grille);
			if(tour == 0) {
				printf("Joueur1 gagne la partie !\n\n");
				exit(0);
			}
			else {
				printf("Joueur2 gagne la partie !\n\n");
				exit(0);
			}
		}
		if(matchNUL(grille)) {
			printf("Match nul !\n\n");
			exit(0);
		}

		if(tmp)//si on a bien placé donc que c'est au tour de l'autre joueur
			tour == 0 ? tour++ : tour--;
	}

}

