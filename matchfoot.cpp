#include<iostream>

using namespace std;


class Matchfoot {

string equipeA;
string equipeB;
int nbrbutA;
int nbrbutB;

public:

Matchfoot() {
equipeA = "raja";
 equipeB = "wac";
nbrbutA = 2 ;
 nbrbutB = 0;
}
Matchfoot(string A ,string B,int A1 ,int B1){
equipeA = A;
 equipeB = B;
nbrbutA = A1 ;
 nbrbutB = B1;

}

Matchfoot(Matchfoot & C){

equipeA =C.equipeA ;
 equipeB =C.equipeB;
nbrbutA =C.nbrbutA;
 nbrbutB =C.nbrbutB;

}
void affichMatch(){

    cout << equipeA << " |" << nbrbutA << "|" << " : "  << "|" << nbrbutB << "| " << equipeB << endl; 

}

void marquerBut(string eq){

if (eq == "A"){
        nbrbutA += 1;
}
else {
     nbrbutB += 1;
}

}
void compareResultat(){
if(nbrbutA > nbrbutB){
 
 cout<<"equipeA est equipe gagnante "<<equipeA<<endl;

}
else if(nbrbutB > nbrbutA){
 
 cout<<"equipeB est equipe gagnante "<<equipeB<<endl;

}
else{
 
 cout<<"match nul"<<endl;

}
}
};

int main(){
 Matchfoot M1;
 Matchfoot M2("France","bresil",0,0);
Matchfoot M3("Maroc","Niger",4,3);
Matchfoot M4(M3);
 
 M4.affichMatch();

 M2.marquerBut("A");
 M2.marquerBut("B");
 
 
M2.compareResultat();
M3.compareResultat();

}

