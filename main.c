#include "main.h"

int main() {
	char grille[10][12];
	plateau(grille);
	menu(grille);  //mettre en commentaire menu(grille)


//Pour tester
/*
	int i,j; //Match nul. on remplit
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 12; j++) {
			grille[i][j] = 'X';
		}
	}
	//grille[7][7] = '.';  //on laisse un point pour que la fonction renvoi 0
	afficher(grille);            //mettre en commentaire grille[7][7] pour renvoyer 1
	printf(" Match nul : %d\n", matchNUL(grille)); 
*/

/*
	placer(grille,3,1);
	placer(grille,1,1);
	placer(grille,2,1);
	placer(grille,3,1);    //Un L
	placer(grille,4,0);
	placer(grille,5,0);
	placer(grille,5,0);
	placer(grille,3,1);
	placer(grille,5,1);
	placer(grille,9,1);
	placer(grille,3,1);
	placer(grille,11,1);

	afficher(grille);
	printf("horizontal : %d\n",verifHorizontal(grille));
	printf("vertical : %d\n",verifVertical(grille));
*/

/*
	placer(grille,3,0);
	placer(grille,4,0);
	placer(grille,3,0);
	placer(grille,4,0);
	placer(grille,3,1);
	placer(grille,4,1);
	placer(grille,5,0);
	placer(grille,2,1);   //Le L qui posait problème
	placer(grille,5,0);
	placer(grille,2,1);
	placer(grille,2,1);
	placer(grille,5,1);


afficher(grille);
	printf("horizontal : %d\n",verifHorizontal(grille)); //ne trouve pas 
	printf("vertical : %d\n",verifVertical(grille));
	*/


/*
	placer(grille,0,0);
	placer(grille,1,1);
	placer(grille,11,0);
	placer(grille,11,0);
	placer(grille,11,0);
	placer(grille,11,0);
	placer(grille,11,0);  //Vertical
	placer(grille,11,0);
	placer(grille,11,1);
	placer(grille,9,0);
	placer(grille,10,1);
	placer(grille,11,1);

	afficher(grille);
	printf("horizontal : %d\n",verifHorizontal(grille));
	printf("vertical : %d\n",verifVertical(grille));
*/


/*
	placer(grille,0,0);
	placer(grille,1,1);
	placer(grille,2,1);
	placer(grille,3,1);
	placer(grille,4,1);
	placer(grille,5,1);
	placer(grille,6,1);    //Horizontal
	placer(grille,11,0);
	placer(grille,11,1);
	placer(grille,9,0);
	placer(grille,10,1);
	placer(grille,11,1);

	afficher(grille);
	printf("horizontal : %d\n",verifHorizontal(grille));
	printf("vertical : %d\n",verifVertical(grille));
*/
	return 0;
}