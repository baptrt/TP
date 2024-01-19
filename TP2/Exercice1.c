#include <stdio.h> 

int pascal(int i, int j);

void main(){
    int i;
    printf("Jusqu'à quelle ligne i veux-tu avoir le triangle de Pascal?");
    scanf("%i", &i);

    for (int k = 0; k<i; k++){
        for (int l = 0; l<i+1; l++){
            int a = pascal(k,l);
            printf("%d", a)
        }
        \n
    }
}

int pascal(int i, int j){
    int P0 = 1;
    if (i == 0){
        return P0;
    }
    if (j == 0){
        return P0;
    }
    return pascal(i-1,j-1);
}