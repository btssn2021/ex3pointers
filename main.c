#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateDes(int* tabdes); //en argument un tableau de dés

void generateDes(int *tabdes) {
    for(int i=0;i<6;i++)
    {
        tabdes[i]=(rand()%6)+1; //affecte un nombre aléatoire pour chaque case
    }

}


int main() {
    int tabdes[6];
    srand(time(NULL));
    generateDes(tabdes); //pas de & un tableau est un pointeur
    /************affichage des dés******************/
    for(int i=0;i<6;i++)
    {
        printf("%d",tabdes[i]);
    }
    return 0;
}
