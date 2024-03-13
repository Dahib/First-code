#include <iostream>

using namespace std;

class  CompteBancaire{
 string titulaire;
 int solde ;

 public:
 CompteBancaire(){
titulaire = "wassimdahib";
solde = 100;
}
CompteBancaire(string t,int s){
titulaire = t;
solde = s;
}

void afiche(){

    cout<<"nomdetitulaire :"<< titulaire <<endl;
    cout<<"solde :"<< solde <<endl;
    
}
void deposerMontant(double montant){
solde +=montant;
cout<<"déposés sur le compte :"<<montant <<endl;
}

void retirerMontant(double montant) {
        
            solde -= montant;
            cout << "  retirés du compte :"<< montant<<endl;
        }
};
int main (){
 
 CompteBancaire compte1("wassimdahib", 100);


compte1.afiche();

compte1.deposerMontant(300);
   compte1 .retirerMontant(200.0);
compte1.afiche();


}