#include <stdio.h>

int main() {

    /* Exercice 1
    int a=0, b=0;
    printf("Saisissez deux entiers :" );
    scanf("%d",&a);
    scanf("%d",&b);
    if (a<b) {printf("%d\n",b);}
    else {printf("%d\n",a );}*/


    /* Exercice 2
    int longueur=0, largeur=0;
    printf("Saisissez les dimensions du rectangle :\n");
    printf("Longueur :");
    scanf("%d", &longueur ) ;
    printf("Largeur : ");
    scanf("%d", &largeur  ) ;
    printf("Le périmètre du rectangle vaut : %d ", (longueur+largeur)*2 ); */




    /* Exercice 3
    int entier=0;
    printf("Saisissez un entier :");
    scanf("%d", &entier);
    if (entier<10){printf("Le nombre est strictement inférieur à 10");}
    else { if(entier%3==0)
    {printf("Cet entier est un multiple de 3 et il est supérieur ou égal à 10");}
    else {printf("Cet entier n'est pas un multiple de 3");};} */


    /* Exercice 4
    int age=0;
    int etudiant=0;
    printf("Veuillez rentrez votre age : ");
    scanf("%d",&age);
    if (0<age && age<12){
        printf("Votre tarif est de 4 euros.");
    }
    if (12<= age && age<17){
        printf("Votre tarif est de 6 euros.");
    }
     if (age>65){
         printf("Votre tarif est de 6 euros.");
     }
    if (17<= age && age<27){
        printf("Etes-vous étudiant ? \n Tapez 1 pour étudiant , 0 pour non étudiant : ");
        scanf("%d",&etudiant);
        if (etudiant==1){
            printf("Votre tarif est de 6 euros.");
            }
        else {
            printf("Votre tarif est de 9 euros.");
            }
        }
    if (27 < age && age <65) {
        printf("Votre tarif est de 9 euros.");
    } */


    /* Exercice 5

    int boisson=0;
    printf("Veuillez selectionnez votre boisson :");
    scanf("%d",&boisson);
    switch(boisson)
    {
        case 1 :
        {
            printf("Vous avez choisi le Coca-Cola");
            break;
        }
        case 2 :
        {
            printf("Vous avez choisi l'Ice Tea");
            break;
        }
        case 3 :
        {
            printf("Vous avez choisi l'Oasis Tropical");
            break;
        }
        case 10 :
        {
            printf("Vous avez choisi le café");
            break;
        }
        case 11 :
        {
            printf("Vous avez choisi le chocolat chaud");
            break;
        }
        default :
        {
            printf("Error");
            break;
        }
    } */

    /* Exercice 6

    float note1=0;
    float note2=0;
    float note3=0;
    float moyenne=0;
    printf("Veuillez rentrer la premièrer note :");
    scanf("%f",&note1);
    while (0> note1 || note1>20) {
        printf("Veuillez rentrer la première note :");
        scanf("%f", &note1);
    }
    printf("Veuillez rentrer la deuxième note :");
    scanf("%f", &note2);
    while (0> note2 || note2>20) {
        printf("Veuillez rentrer la deuxième note :");
        scanf("%f", &note2);
    }
    printf("Veuillez rentrer la troisième note :");
    scanf("%f", &note3);
    while (0> note3 || note3>20) {
        printf("Veuillez rentrer la troisième note :");
        scanf("%f", &note3);
    }
    moyenne=(note1+note2+note3)/3;
    printf("Votre moyenne est %f",moyenne); */


    /* Exercice 7

    int nombre2classe=0;
    int nombredeleve=0;
    int elevestotal=0;
    int i=0;
    printf("Veuillez rentrer le nombre de classes :");
    scanf("%d",&nombre2classe);
    for (i=1; i<1+nombre2classe; i++){
        printf("Veuilez entrer le nombre d'élèves dans la classe numéro %d :",i);
        scanf("%d",&nombredeleve);
        elevestotal+=nombredeleve;
    }
    printf("Le nombre total d'élèves est %d",elevestotal); */


    /* Exercice 8

    int entier=0;
    printf("Veuillez renter un nombre entier :");
    scanf("%d",&entier);
    while( entier % 2 != 0 || entier % 7 != 0 ) {
        printf("Veuillez renter un nombre entier :");
        scanf("%d",&entier);
    }
    printf("Ce nombre est à la fois un multiple de 2 et de 7."); */


    /* Exercice 9
    int pierres=0;
    int i=0;
    int somme=0;
    printf("Veuillez entrer le nombre de pierres disponible :");
    scanf("%d",&pierres);
    while (pierres>=somme) {
        i=i+1;
        somme=(i*(i+1)*(2*i+1))/6;
    }
    printf("Le nombre d'étages possible est %d",i-1); */

    /* Exercice 10

    float somme=0;
    float note=0;
    float compteur=0;
    float moyenne=0;
    printf("Veuillez entrer une note :");
    scanf("%f",&note);
    if (note<0){
        printf("Pas de note rentrée");
    }
    else {
    while (note >= 0) {
        somme = somme + note;
        printf("Veuillez entrer une note :");
        scanf("%f",&note);
        compteur++;
    }
    moyenne=somme/compteur;
    printf("Votre moyenne est %f",moyenne);  } */


    return 0;
}
