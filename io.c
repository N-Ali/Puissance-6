#include "io.h"

void viderBuffer() {
  int c = 0;
  while(c != '\n' && c != EOF){
    c = getchar();
  }
}

void afficher(char grille[10][12]) {
	int lig,col;
	printf("-------------------------------------\n");
	printf("0  1  2  3  4  5  6  7  8  9  10 11 |\n");
	printf("-------------------------------------\n");
	for(lig=0;lig<10;lig++) {
		for(col=0;col<12;col++)
			printf("%c  ",grille[lig][col]);
		printf("\n");
	}	
}

void menu(char grille[10][12]) {
	int choix;
	printf("\n----------------------------------PUISSANCE 6--------------------------------\n");
	printf("\n*                              Menu du jeu :                                 *\n");                                                                 
	printf("\n*                          1) Joueur vs Joueur                               *\n");
	printf("\n*                          0) Quitter                                        *\n");
	printf("\n------------------------------------------------------------------------------\n");
			
	do { //tant qu'on a pas 1 ou 0
		choix = -1;
		printf("\n Entrez le mode : ");
		scanf("%d", &choix);
		viderBuffer();
		if(choix != 0 && choix != 1)
			printf("Choisissez 1 ou 0 !\n\n");
			
	}while(choix != 1 && choix != 0);
				
	
	choix == 1 ? jeu(grille) : exit(0);		
}
