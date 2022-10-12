#include <iostream>
using namespace std;

int main () 
{

    int a, b, x;

    cout<<"Inserisci i valori: ";
    cin>>a>>b>>x;

    cout<<"Il valore della disuguaglianza "<<a<<"<="<<x<<"<="<<b<<" è uguale a: "<<((a<=x) && (x<=b))<<endl; 

    return 0;
}