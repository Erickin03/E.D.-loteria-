#include<iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
#include <random>
#include <locale.h>

using namespace std; 

random_device rd;

mt19937 mt (rd());

bool repeticao (vector <int> val, int port, int valores);

void gerarAleatorios (vector <int> num, int qtdn, int limite;);

void opcoes (int inicio, int final, vector <double> precos);

void imprimirNumeros (vector <int> num)

double calcularP (int QTDnumeros, vector <double> listaPrecos, int inicio); 

void MegaSena ();

char menu ();

void quina (); 

void lotomania();

void lotofacil();

int main (){
   cout << "BEM VINDO USUARIO";
   
   do{
    
        char modalidade = menu();
        
        switch (modalidade) {
        
        case 'MS':
            MegaSena ()
            
        
        case 'Q': 
            quina(); 
            break;
            
            
        case 'L':
            lotomania();
            break;
            
            
        case 'LF': 
            lotofacil();
            break;
            
            
        case 'S':
            exit( _Code: 0 )
        }
    
    
    
    
    
   } while (true);


}


void opcoes (int inicio, int final, vector <double> precos) {

cout << endl; 
cout << "*******************************************" << endl;
cout << "Quantidade de Dezenas: " << setw(n: 11) << "|" << setw (n: 28) << "PREÇO: " << endl;
cout << fixed << setprecision (n: 2);


for (int i = inicio, j = 0; i<=final; i++, j++) {
    
    if (i < 10) {
        cout << i << setw (n: 26) << "|" << setw (n: 23) << "R$" << precos[j] <<endl;
    }
    
    else {
        cout << i << stw (n:25) << "|" << setw(n:23) << "R$" << precos[j] << endl;
    }
    cout << "*********************************************************" << endl; 
}
    void imprimirNumeros (vector <int> num) {
        setlocale (_Category: LC ALL, _Locale: "Portuguese");
        cout << "Num para Jogar: "; 
        
        for (int i = 0; i < (int)num.size(); i++ ) {
            
            if (i < (num.size()/2)) {
                if (i == (num.size()/2)-1) {
                    cout << num[i] << setw (n: 2) << endl << setw (n: 22) << "|";
                }
            }
            else {
                cout << num[i] << ", ";
            }
            
            
        
        else {
            
            if (i == num.size() - 1) {
                cout << num[i] << setw (n: 2) << "|"; 
            }
            else {
                cout << num[i] << ", "; 
            }
        }
        
    }
 cout << endl << endl;
}

double calcularP (int QTDNumeros, vector <double> precos, int inicio) {
    double preco = 0;
    double QTDNumeros1 = QTDNumeros - inicio;
    for (int i = 0; i <QTDNumeros; i++) {
        if (QTDNumeros1 == i) {
            preco = precos[i]; 
        }
    }
 return preco; 
}

bool repeticao ( vector <int> val, int port, int valores) {
    for (int i = 0; i < port; i++) {
        if (val[i] == valores) {
            if (tamanho != 1) {
            return true; 
    }
        }
    }
    return false; 
}



void gerarAleatorios (vector <int> num, int qtdn, int limite) {
vector <int> teste;
teste.clear();
int valores;
string testando = "rd"; 
std :: uniform_int_distribution <int> dist (a: 1.0, limite);


for (int i=0; i < qtdn; i++) {
    valores = dist (&: mt);
    teste.push_back(valor);
    
    while (repeticao(teste,i,valor)) {
        valores = dist ( &: mt);
    }
    num.push_back(valor);
}
}


void MegaSena() {
system (_Command "cls");
cout << setw (n: 50) << "BEM VINDO(A) AO SORTEIO DA MEGA SENA" << endl;
vector <double> precos = {3.50, 24.50, 90.00, 294.00, 735.00, 1617.00, 6006.00, 10510.00, 17517.00} ;
vector <int> numAleatorios;
numerosAleatorios.clear();
int opcao, cartelas;
double prepoPagar = 0; 

opcoes (inicio: 6, final: 15, precos);
cout << endl << "Escolha quanras cartelas deseja jogar: ";
cin >> cartelas;

for (int i = 0; i<cartelas; i++) {
    cout << "Escolha quantas dezenas deseja jogar: ";
    cin << opcao; 
    while (opcao < 6 || opcao > 15) {
        cout << "Numero inválido. Por favor, digite outro: "; 
        cin opcao; 
    }
    gerarAleatorios (&: numerosAleatorios, opcao, Limite:60);
    imprimirNumeros (numerosAleatorios);
    precoPagar += calcularP(opcao, precos, inicio:6);
    numerosAletorios.clear(); 
    }
    
    cout << "O valores a ser pago = R$ " << precoPagar << endl;
    system (_Command: "pause") ;
    system (_Command: "cls");
}

void quina() {
system(_Command: "cls"); 
cout << setw (n:50) << "BEM VINDO(A) AO SORTEIO DA QUINA" << endl;


vector <double> precos = {1.50, 9.00, 31.50, 84.00, 189.00, 378.00, 693.00 1188.00, 1930,50, 3003.00, 4505.50};

vector <int> numerosAleatorios; 

numeroAleatorios.clear();

int opcao, cartelas; 

double precoPagar = 0; 



opcoes (inicio: 5, final: 15, precos);
    cout << endl << "Escolha quantas cartelas deseja jogar: "; 
    cin >> cartelas; 

    
for (int i = 0; i<cartelas; i++) {
    
    cout << "Escolha quantas dezenas deseja jogar: ";
    cin >> opcao;
    
    while (opcao < 5 || opcao > 15) {
        cout << "Numero invalido. Por favor, digite outro: " << endl; 
        cin >> opcao; 
    }
    
    gerarAleatorios (&: numerosAleatorios, opcao, Limite: 80);
    imprimirNumeros(numerosAleatorios);
    precoPagar += calcularP(opcao, precos, inicio: 5);
    
    numerosAleatorios.clear(); 
}

cout << "O valores a ser pago é R$ " << precoPagar << endl;
system (_Command: "pause");
system (_Command "cls"); 

}


void lotomania () {
system (_Command: "cls"); 

cout << setw(n: 50) << "BEM VINDO(A) AO SORTEIO DA LOTOMANIA " << endl; 
vector <double> precos = {1.50}; 

vector <int> numerosAleatorios; 

numerosAleatorios.clear(); 

int cartelas; 

double precoPagar = 0; 

opcoes(inicio: 50, final: 50, precos);
cout << endl << "Escolha quantas cartelas deseja jogar: ";
cin cartelas; 


for (int i = 0; i < cartelas; i++){
    gerarAleatorios( &: numerosAleatorios, qtdn: 50, Limite 100);
    imprimirNumeros (numerosAleatorios);
    precoPagar += calcularP(qtdn: 50 precos, inicio: 50);
    
    
    numerosAleatorios.clear();  
} 

cout << "O valores a ser pago é R$ " << precoPagar << endl;

system (_Command: "pause"); 
system (_Command; "cls");

}



void lotofacil () {
system (_Command: "cls"); 

cout << setw(n: 50) << "BEM VINDO(A) AO SORTEIO DA LOTOFACIL " << endl; 
vector <double> precos = {2.00, 32.00, 272.00, 1632.00}; 

vector <int> numerosAleatorios; 

numerosAleatorios.clear(); 

int opcao, cartelas; 

double precoPagar = 0; 

opcoes(inicio: 15, final: 18 precos);
cout << endl << "Escolha quantas cartelas deseja jogar: ";
cin cartelas; 


for (int i = 0; i<cartelas; i++) {
    
    cout << "Escolha quantas dezenas deseja jogar: ";
    cin >> opcao;
    
    while (opcao < 15 || opcao > 18) {
        cout << "Numero invalido. Por favor, digite outro: " << endl; 
        cin >> opcao; 
    }
    
    
   gerarAleatorios(&: numerosAleatorios, opcao, Limite: 25);
   
   imprirNumeros (numerosAleatorios);
   
   precoPagar += calcularP (opcao, precos, inicio: 15); 
   
   numerosAleatorios.clear(); 
    
}
    
    
    

cout << "O valores a ser pago é R$ " << precoPagar << endl;

system (_Command: "pause"); 
system (_Command; "cls");

}





char menu () {

cout << "Escolha um jogo: " << endl << endl; 

cout << "[MS] Mega Sena" << endl;
cout << "[Q] Quina" << endl;
cout << "[L] Lotomania" << endl;
cout << "[LF] Lotofacil" << endl;
cout << "[S] Sair" << endl;


cin >> modalidade; 
}

// Erick e Jonas 
