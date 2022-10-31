#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, pow = 1, exp, overflowValue = 2147483647;

    cout<<"Inserisci un numero intero: ";
    cin>>n;    

    do {
        cout<<"Inserisci un numero intero non negativo come esponente: ";
        cin>>exp;

        if (exp < 0){
            cout<<"Il numero inserito è negativo, si prega di reinserirlo"<<endl;
        }
    }while(n<0);

    for (int i = 0; i<exp; i++){
        if (pow < overflowValue/n){
            pow *= n;
        }
        else{
            cout<<"c'è stato un overflow"<<endl;
            return 0;
        }
    }

    cout<<pow<<endl;
    

    return 0;
}