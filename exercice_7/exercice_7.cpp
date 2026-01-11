#include<iostream>

using namespace std;

/*

    ECRIRE UN PROGRAMME QUI DEMANDE DDEUX NOMBRE M ET N A L'UTILISATEUR ET
    L'INFORME ENSUITE SI LE PRODUIT DE CES DEUX NOMBRE EST POSITIFS OU NEGATIF

    ON INCLUT DANS LE PROGRAMME LE CAS OU LE PRODUIT PEUT ETRE nul

*/

int main()
{
     cout << "Entrer la valeur m et n : _\n"<< endl;
     int m , n, resultats;
     cout << " m = " <<endl;cin >> m;
     cout << " n = " <<endl;cin >> n;

     resultats =  m * n;
     if(m < 0 || n < 0){
        cout << "le nombre est negatives \n";
     }
     else{
        cout << "ne nombres est POSITIVE \n\n";
     }

     if (resultats < 0  || resultats < 0)
     {
        cout << "DONC,La produit de ces deux nombres est: NEGATIVES \n";
        cout<< "resultats = " <<resultats<<endl;
     }
     else{
           cout << "Donc, La produit de ces deux nombres est: POSITIVES \n";
           cout<< "resultats = " <<resultats<<endl;
     }
     return 0;
}