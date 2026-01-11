#include<iostream>
using namespace std;

/*

    Ecrire un programme qui permet d'afficher si un nombre entier saisi au clavier 
    est PAIR ou IMPAIR

*/


int main()
{
    cout << "Entrer la valeur :  \n";
    int A;
    cout << "Nombre A = ";
    cin >> A;
    if(A % 2 == 0)
    {cout << "la valeur est PAIR car A = "<< A << endl;}
    else
    {cout << "la valeur est IMPAIR car A = "<< A << endl;}

    return 0;
}