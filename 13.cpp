#include <iostream>

using namespace std;

struct dados{

string matricula, nome;
int nota;

};

int main(){

    int quantidade_alunos, contador_zeros = 0, maior_nota;
    string nerdola;
    float media = 0;
    cin >> quantidade_alunos;

    dados aluno[quantidade_alunos];
    maior_nota = 0;
    for(int i = 0; i < quantidade_alunos; i ++){

        cin >> aluno[i].matricula;
        cin >> aluno[i].nome;
        cin >> aluno[i].nota;
        media += aluno[i].nota;
        if(aluno[i].nota == 0){
            contador_zeros++;
        }
        if(aluno[i].nota > maior_nota){
            maior_nota = aluno[i].nota;
            nerdola = aluno[i].nome;
        }

    }
    string burros[contador_zeros];
    int j = 0;
    float decepcao = 0.0;

    media = media/quantidade_alunos;
    for (int i = 0; i < quantidade_alunos; i++)
    {
        if(aluno[i].nota == 0){
            burros[j] = aluno[i].matricula;
            j++;
        }
        if(aluno[i].nota < media){
            decepcao++;
        }

    }
    
    cout << media << endl;
    for(int i = 0; i < contador_zeros; i++){
        cout << burros[i]<< endl;
    }
    float socorro_deus = decepcao/quantidade_alunos;
    cout << socorro_deus*100 << "%";
    cout << endl << nerdola;

}