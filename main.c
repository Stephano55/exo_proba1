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
void prQuestion(){
    double nbrCasPossible;
    nbrCasPossible = combinaison(7, 3) * combinaison(5, 2);
    printf("le nombre de cas possible est %f", nbrCasPossible);
}
void deuxQuestion(){
    double nbrCasPossible;
    nbrCasPossible = combinaison(7, 3) * combinaison(1, 1)* combinaison(4, 1);
    printf("le nombre de cas possible est %f", nbrCasPossible);
}
void trQuestion(){
    double nbrCasPossible;
    nbrCasPossible = combinaison(5, 3) * combinaison(5, 2);
    printf("le nombre de cas possible est %f", nbrCasPossible);
}
int main()
{
    int n, k;
    int question;
    double casPossible;
    printf("\n\n\tOn doit former un comitÈ comprenant 3 mathÈmaticiens et 2 phisiciens");
    printf("sur la base díun groupe plus large, formÈ de\n 7 mathÈmaticiens et 5 phisiciens\n");
    printf("\nQuel est le nombre des cas possible pour former ce comitÈ si : \n");
    printf("\n1. Le comitÈ peut comprendre níimporte lequel des mathÈmaticiens et des phisiciens \n");
    printf("\n2. Un phisicien particulier doit-Ítre membre du comitÈ.\n");
    printf("\n3. Deux mathÈmaticiens particuliers doivent Ítre exlus du comitÈ.\n");
    printf("a quelle question voulez vouz que le programme réponde? (1,2,3)");
    scanf("%d",&question);
    if (question == 1){
        prQuestion();
    }
    else if (question == 2){
        deuxQuestion();
    }
    else{
        trQuestion();
    }
    return 0;
}
