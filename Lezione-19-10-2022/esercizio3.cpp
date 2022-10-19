#include <iostream>
using namespace std;

int main ()
{
    
    const int MAX=10;
    int n, somma = 0, massimo = -1;
    int counter = 0;

    do{
        cout<<"Inserisci un numero compreso tra 0 e "<<MAX<<": ";
        cin>>n;
    }while(n<=0 || n>=MAX);

/*
    while (n>0){
        int numero;
        cout<<"Inserisci un numero: ";
        cin>>numero;

        if (massimo<=numero){
            massimo = numero;
        }

        somma += numero;
        n--;
    }
*/
    for (int i = 0; i<n; i++){
        int numero;

        do {
            cout<<"Inserisci un numero: ";
            cin>>numero;
        }while(numero>=0);

        if (massimo<=numero){
            massimo = numero;
        }

        somma += numero;
    }

    cout<<"La somma dei numeri inseriti è: "<<somma<<endl;
    cout<<"Il massimo dei numeri inseriti è: "<<massimo<<endl;
}