#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

bool isPrimo(int n){

    if(n<5 || n%2==0 || n%3==0)
        return (n==2||n==3);

    int maxP = sqrt(n)+2;
    for(int p=5; p<maxP; p+=6)
        if(n%p==0||n%(p+2)==0)
            return false;

    return true;
}

int main() {
    int u,primos=0;

    cout << "----------------------------\n Contador de Numeros Primos\n----------------------------\n" << endl;
    bool foi;
    do {
        foi = true;
        cout << "Digite um numero: ";
        if (!(cin >> u)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Erro, valor inserido invalido" << endl;
            foi=false;
        }else if(u<0){
            cerr << "Erro, valor negativo" << endl;
            foi = false;
        }
    }while(!foi);

    int quaisPrimos[u];

    for (int x=0;x<u;x++){
        if(isPrimo(x)) {
            quaisPrimos[primos++]=x;
        }
    }
    cout << "Numeros primos entre 0 e " << u << " = " << primos << endl;
    if(primos < 1)
        return 0;
    cout << "\nNumeros encontrados: " << quaisPrimos[0];
    for(int i=1;i<primos;i++){
        cout << ", " << quaisPrimos[i];
    }
    cout << endl;
    return 0;
}

