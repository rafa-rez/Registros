#include <iostream>
using namespace std;

struct dados {
	
	string nome, sangue;
	};

int main()
{
    int pacientes;
    cin >> pacientes;
    
    dados pessoa[pacientes];
    
    for(int i = 0; i < pacientes; i++){
		
		cin >> pessoa[i].nome;
		cin >> pessoa[i].sangue;
		
		}
		
		string sangue_desejado;
		cin >> sangue_desejado;
		
		for(int i = 0; i < pacientes; i++){
		if(sangue_desejado == "A"){
			if(pessoa[i].sangue == sangue_desejado){
				cout << pessoa[i].nome << endl;
				}
			if(pessoa[i].sangue == "O"){
				cout << pessoa[i].nome << endl;
				}
			}
		if(sangue_desejado == "B"){
			if(pessoa[i].sangue == sangue_desejado){
				cout << pessoa[i].nome << endl;
				}
			if(pessoa[i].sangue == "O"){
				cout << pessoa[i].nome << endl;
				}
			}
		if(sangue_desejado == "AB"){
			if(pessoa[i].sangue == sangue_desejado){
				cout << pessoa[i].nome << endl;
				}
			if(pessoa[i].sangue == "A"){
				cout << pessoa[i].nome << endl;
				}
			if(pessoa[i].sangue == "B"){
				cout << pessoa[i].nome << endl;
				}
			if(pessoa[i].sangue == "O"){
				cout << pessoa[i].nome << endl;
				}
			}
		if(sangue_desejado == "O"){
			if(pessoa[i].sangue == sangue_desejado){
				cout << pessoa[i].nome << endl;
				}
			}
		
		}
		
		
		
		
    
    return 0;
}
