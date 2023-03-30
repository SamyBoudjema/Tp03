/* Algorithme de la méthode menu() de la classe CIhmBoucle:
 * Auteur :Boudjema
 * Date :octobre 2019
 * Variable:    code =caractère
 * Début
 *  répéter
 *          {       //afficher menu
 *                  ...
 *                  saisir code
 *      si (code='a')
 *          alors appel de la méthode calculSPM() // exécution du 1er exercice//
 *      si (code='b')
 *          alors appel de la méthode calculDivisionParSoustraction()
 *      ...
 *      si (code='e')
 *          alors appel de la méthode tableMultiplication()
 *      }jusqu'à (code ='q')
 * fin*/
#include "cihmboucle.h"

CIhmBoucle::CIhmBoucle()
{
    menu();
}
/*
 *      Algorithme de la méthode menu de présentation des exercices de la classe CIhm:
 *      Auteur: Boudjema 2019
 *      Date: octobre
 *      Variable:
 *         code=caractère
 *      début
 *          ...
 *      fin*/

void CIhmBoucle::menu()
{
    char code;
    do
    {
        system("cls");
        cout<<"      5 exercices pour la mise en oeuvre des boucles en C++\n";              //affichage du texte entre "//
        cout<<"      ======================================================\n"<<endl;       //affichage du texte entre "//
        cout <<"            Boudjema - Samy \n\n"<<endl;                                       //affichage du texte entre "//
        cout<<"a-Exercice 1-calcul de la somme, du produit et de la moyenne\n\n\n";         //affichage du texte entre "//
        cout<<"b-Exercice 2-Division par soustractions successives\n\n\n";                 //affichage du texte entre "//
        cout<<"c-Exercice 3-Calcul de la factorielle d'un entier\n\n\n";                   //affichage du texte entre "//
        cout<<"d-Exercice 4-Afficher un triangle isocele forme d'etoiles\n\n\n";           //affichage du texte entre "//
        cout<<"e-Exercice 5-Afficher la table des produits pour N variant de 0 a 10\n\n\n"; //affichage du texte entre "//
        cout<<"q-Quitter le programme\n\n\n\n";                                            //affichage du texte entre "//
        cout<<"     Selectionner a, b, c, d, e, ou q ?:";                                 //affichage du texte entre "//
        code =getch();//
        if (code=='a') calculSPM();//si la condition est vrai, on exécute la méthode calculSPM()//
        if (code=='b') calculDivisionParSoustraction(); //si le code = b alors on execute calculDivisionParSoustraction//
        if (code=='c') calculFactorielle(); //si le code = c alors on execute calculDivisionParSoustraction//
        if (code=='d') triangleIsocele(); //si le code = d alors on execute calculDivisionParSoustraction//
        if (code=='e') tableMultiplication(); //si le code = e alors on execute calculDivisionParSoustraction//

    } while (code !='q');
}
//----------------------------------------------------------------------------------------------------------------------------------------------
/*Algorithme: Calcul de la somme, du produit et de la moyenne de N entiers
 auteur:Boudjema
 Date: octobre 2019

 variables: nb valeur, valeur, somme, produit,i(compteur)=entier
            moyenne= decimal
 Début:
        effacer écran
        afficher "calcul de la méthode de la somme, du produit, de la moyenne de la classe CIhmBoucle"
        afficher "entrer le nombre de valeur à saisir:"
        Saisir nb valeur
        i<-0
        somme<-0
        repeter
            afficher"saisir la valeur",(i+1),":"
            saisir valeur
            somme<-somme+valeur
            produit<-produit*valeur
            i<-i+1
       jusqu'a (i=nb valeur)
            moyenne<-somme/nb valeur
            afficher "la somme des trois nombres est de:",somme
            afficher "la produit des trois nombres est de:",produit
            afficher "moyenne des trois nombres est de:",moyenne
Fin
*/
void CIhmBoucle::calculSPM() //méthode qui éxecute l'exercice 1//
{
    int nbValeur, valeur, somme, produit, i;
    int moyenne;

    system("cls");
    cout<<"calcul de la méthode de la somme, du produit, de la moyenne de la classe CIhmBoucle"<<endl;
    cout<<"entrer le nombre de valeur à saisir:"<<;
    cin<<nbValeur<<endl;
    i=0;
    somme=0;
    do while (i=nbValeur) {

    }



    system("pause");
}
//--------------------------------------------------------------------------------
/*
 * Algorithme: soustraction par divisions successives
 * ...
 * */
void CIhmBoucle::calculDivisionParSoustraction()
{
    system("cls");
    system("pause");
}
//--------------------------------------------------------------------------------
/*
 * algorithme: Calcul de la factorielle d'un entier
 * ...
 * */
void CIhmBoucle::calculFactorielle()
{
    system("cls");
    system("pause");
}
//--------------------------------------------------------------------------------
/*
 * algorithme: afficher un triangle isocèle formé d'étoiles
 * ...
*/
void CIhmBoucle::triangleIsocele()
{
    system("cls");
    system("pause");
}
//--------------------------------------------------------------------------------
/*
 * algorithme: afficher la table des produits pour N variant de 0 à 10
 * ...
 */
void CIhmBoucle::tableMultiplication()
{
    system("cls");
    system("pause");
}
