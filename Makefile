CC=gcc                                                    #Raccourci pour le gcc 
SRC=io.c main.c verif.c jeu.c 
OBJ=$(SRC:.c=.o)                                          	 
CFLAGS= -W -Wall                                          #Les FLAGS



puissance6:	$(OBJ) io.h main.h verif.h jeu.h
		$(CC) -o $@ $(OBJ)

%.o:	%.c
	$(CC) -c $< $(CFLAGS)

clean:	
	rm *.o puissance6
