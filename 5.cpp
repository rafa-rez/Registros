#include <iostream>
using namespace std;

struct politicos{
    
    string partido, nome;

};

struct opera{
    string operacao, nome;
    int desvio;
};

int main(){

    int tpoli, topera;
    cin >> tpoli;

    politicos marginais[tpoli];

    for (int i = 0; i < tpoli; i++){
        cin >> marginais[i].partido;
        cin >> marginais[i].nome;
    }

    cin >> topera;
    opera delitos[topera];

    for(int i = 0; i < topera; i++){
        cin >> delitos[i].operacao;
        cin >> delitos[i].nome;
        cin >> delitos[i].desvio;

        for (int j = 0; j <tpoli; j ++){
            if(delitos[i].nome == marginais[j].nome){
                
            }
        }
    }




}