#include <iostream>
#include <cmath>

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
    cout << "---------------------\nContador de Numeros Primos\n---------------------\n\n" << endl;
    cout << "Digite um numero: ";
    cin >> u;

    for (int x=0;x<u;x++){
        if(isPrimo(x))
            primos++;
    }

    cout << "Numeros primos entre 0 e " << u << " = " << primos << endl;

    return 0;
}

