#include<iostream>
using namespace std;
/*

ECRIRE UN PROGRAMME PERMETTANT De saisir deux nombre et
d'afficher leur produit

*/

int main()
{
    cout << "Veuillez saisir 2 nombre et afficher leur Produit \n";
    int a , b, valinyProduit;
    cout << "NOMBRE a est" << endl;cin >> a; 
    cout << "NOMBRE b est" << endl;cin >> b;

    valinyProduit = a * b;

    cout << "le nombre a =  "  <<  a  << " et le nombre b  =  " <<  b  << endl;
    cout << "alors, a * b  est égale => " << valinyProduit <<endl;
    return 0;
} 
 