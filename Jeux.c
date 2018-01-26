#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fonction pour generer les nombres
int findx ( const int MAX, const int MIN )
{
    int x;

    // Génération du nombre aléatoire : x
    srand(time(NULL));
    x = (rand() % (MAX - MIN + 1)) + MIN;
    
    return x;
}

//fonction pour les 3 differente boucle du jeux
int boucle(int rep)
{
    int nombreEntre, i = 0;

    do
    {

      // On demande le nombre
        printf("Quel est le nombre ? =>");
        scanf("%d", &nombreEntre);

        // On compare le nombre entré avec le nombre mystère

        if (rep > nombreEntre)
        {
            printf("C'est plus !\n\n");
            i++;
        }

        else if (rep < nombreEntre)
        {
            printf("C'est moins !\n\n");
            i++;
        }

        else
            printf ("Bravo, vous avez trouve le nombre mystere \navec conbre du coups %d!!!\n\n", i);

    } while (nombreEntre != rep);

    return 0;    
}

//Fonction principale 
int main ( int argc, char** argv )
{
    char choix ; 
    int x, y, z;

    //Choisi 1 or 2 or 3
    printf("Difficulter :\n");
    printf("=> Tapez \"1\" : (0-100)\n");
    printf("=> Tapez \"2\" : (0-1000\n");
    printf("=> Tapez \"3\" : (0-10000)\n");
    choix = getchar();

    switch (choix)
    {
        case '1':
            printf("Choix Facile\n");
            //Init to first chose
            x = findx(100, 1);
            boucle(x);
        break;
        
        case '2':
            printf("Choix moyenne\n");
            //Init to secont chose
            y = findx(1000, 1);
            boucle(y);
        break;

        case '3':
            printf("Choix difficile\n");
            //Init to third chose
            z = findx(10000, 1);
            boucle(z);
        break;

        default:
            //Any choix
            printf("Aucun choix");
        break;
    }
        
    return 0;
}
