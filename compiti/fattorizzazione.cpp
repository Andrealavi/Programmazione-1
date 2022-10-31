#include <iostream>
using namespace std;

int main () {

    int n, fatt;

    cout<<"Inserisci il numero: ";
    cin>>n;

    cout<<endl;

    fatt = n;
    
    cout<<n;

    for (int i = 2; i < n;){
        if (fatt % i == 0){
            if (fatt == n){
                cout<<" = ";
            }
            else{
                cout<<"*";
            }
            cout<<i;
            fatt /= i;
        }
        else{
            i++;
        }
    }

    cout<<endl;

    if (fatt == n){
        cout<<" è un numero primo"<<endl;
    }

    return 0;
}