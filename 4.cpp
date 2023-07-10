#include <iostream>

using namespace std;

struct alunos{
    int matricula;
    string nome;
    float nota1, nota2;
    char sexo;
};

int main(){

    int tamanho;
    cin >> tamanho;

    int contf = 0, contm = 0;
    float media = 0, mediaM = 0, mediaF = 0;
    alunos classe[tamanho];

    for (int i = 0; i < tamanho; i++){

        cin >> classe[i].matricula;
        cin >> classe[i].nome;
        cin >> classe[i].nota1;
        cin >> classe[i].nota2;
        cin >> classe[i].sexo;
        media += classe[i].nota1 + classe[i].nota2;
        if(classe[i].sexo == 'F'){
            mediaF += classe[i].nota1 + classe[i].nota2;
            contf++;
        }
        if(classe[i].sexo == 'M'){
            mediaM += classe[i].nota1 + classe[i].nota2;
            contm++;
        }
    }   
        media = media/(2 * tamanho);
        mediaF = mediaF/(2 * contf);
        mediaM = mediaM/(2 * contm);

        cout << media << endl << mediaM << endl << mediaF;
    return 0;
}