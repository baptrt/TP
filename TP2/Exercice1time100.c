#include <stdio.h> 

int pascal(int i, int j);

void main(){
    int i = 100;

    for (int k = 0; k<i; k++){
        for (int l = 0; l<(k+1); l++){
            int a = pascal(k,l);
            printf("%d", a);
        }
        printf("\n");
    }
}

int pascal(int i, int j){
    int P0 = 1;
    if (i == 0){
        return P0;
    }
    else if (j == 0){
        return P0;
    }
    else if (j == i){
        return P0;
    }
    return pascal(i-1,j-1) + pascal(i-1,j);
}
