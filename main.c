#include <stdio.h>
#include <stdlib.h>
int factoriel(int nombre){
    int fact = 1;
    int i = 1;
    if (nombre == 0){
        return 1;
    }
    else{
        for( i = 1; i<=nombre; i++){
            fact = fact * i;
        }
        return fact;
    }

}
double combinaison(int n, int k){
    double comb;
    comb = factoriel(n)/(factoriel(k)* factoriel(n-k));
    return comb;
}
int main()
{
    int n, k;
    double casPossible;
    printf("On doit former un comitÈ comprenant 3 mathÈmaticiens et 2 phisiciens");
    printf("sur la base díun groupe plus large, formÈ de\n 7 mathÈmaticiens et 5 phisiciens");
    return 0;
}
