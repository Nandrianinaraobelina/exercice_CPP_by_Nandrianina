#include<iostream>

using namespace std;

/*

    Une boutique Propose à ces clients,une reductions de
    15% pour le montants d'achats superieurs à 200dh.

    Ecrire un programme permettant de saisir le prix TOTAL HT et de calculer
    le montants TTC en prenant en compte la reductions et la TVA = 20%

*/

int main(){
     cout<<"-------------------------\n";
    cout << "Entrer le prix: " << endl;
    int prix_HT,ht_reduits;
    float reduction(0.15),TVA,TTC;

    cin >> prix_HT;
    
    if(prix_HT > 200)
    {
        ht_reduits = prix_HT * (1 - reduction);
        cout<< "prix hors taxe reduit en " << reduction <<endl;
    }
     cout<<"-------------------------\n";
    if(prix_HT <= 200){
        ht_reduits == prix_HT;
        cout << "Le Prix ne change pas"<<endl;
    }
     cout<<"-------------------------\n";
    /*
    
    rehefa mi calcul TVA: 
    (TVA=HT_{réduit} \ times 0.20\)                
    
    rehefa TTC  indray dia: 

    \(TTC=HT_{réduit} + TVA\)                

    */
    cout<<"-------------------------\n";
    
    cout<<"Calcul TVA: "<<endl;
    TVA = ht_reduits * 0.20;
    cout << " TVA = ht_reduits * 0.20 \n";
    cout << "TVA = " << TVA << endl;
    
    //CALCUL TTC 

    cout<<"-------------------------\n";

    cout <<"Calcul TTC: "<<endl;
    TTC = ht_reduits + TVA;
    cout << " TTC = ht_reduits + TVA \n ";
    cout << "TTC = " << TTC << endl; 

     cout<<"-------------------------\n";

    return 0;

}