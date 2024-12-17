#include <stdio.h>
#include <stdlib.h>
char *ChargerChaine(int N);
int LongueurChaine(char *str);
void InverserTableau(char Tableau[], char Inverse[], int longueur);
void ChargerTableau(char *str, char Tableau[]);
void AfficherTableau(char Tableau[], int longueur);

int main() {
    char *str;
    int n;
    printf("Veuillez saisir la taille maximale de la chaîne : ");
    scanf("%d", &n);
    str = ChargerChaine(n);
    int longueur = LongueurChaine(str);
    char Tableau[longueur], Inverse[longueur];
    ChargerTableau(str, Tableau);
    AfficherTableau(Tableau, longueur);
    InverserTableau(Tableau, Inverse, longueur);
    AfficherTableau(Inverse, longueur);
    free(str);
    return 0;
}
char *ChargerChaine(int N) {
    char *str = (char *)malloc(N * sizeof(char));
    printf("Veuillez saisir la chaîne : ");
    scanf("%s", str);
    return str;
}
int LongueurChaine(char *str) {
    int longueur_chaine = 0;
    while (str[longueur_chaine] != '\0') {
        longueur_chaine++;
    }
    return longueur_chaine;
}
void InverserTableau(char Tableau[], char Inverse[], int longueur) {
    for (int i = 0; i < longueur; i++) {
        Inverse[i] = Tableau[longueur - 1 - i];
    }
}
void ChargerTableau(char *str, char Tableau[]) {
    int i = 0;
    while (str[i] != '\0') {
        Tableau[i] = str[i];
        i++;
    }
    Tableau[i] = '\0';
}
void AfficherTableau(char Tableau[], int longueur) {
    for (int i = 0; i < longueur; i++) {
        printf("%c", Tableau[i]);
    }
    printf("\n");
}
