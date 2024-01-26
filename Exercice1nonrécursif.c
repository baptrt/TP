#include <stdio.h> 

void main(){
    int i;
    printf("Jusqu'à quelle ligne i veux-tu avoir le triangle de Pascal?");
    scanf("%i", &i);


    for (int k = 0; k<i; k++){

        for (int l = 0; l<(k+1); l++){
            int a = pascal(k,l);
            printf("%d", a);
        }
        printf("\n");
    }
}

int pascal(int i, int j){
    int tableau[i][j];
    
    tableau[0][0] = 1;

    for (int k = 1; k<i; k++){
        for (int l = 1; l<(k+1); l++){
                tableau[k][l] = tableau[k-1][l-1] + tableau[k-1][l];
            } 
        }
    }


