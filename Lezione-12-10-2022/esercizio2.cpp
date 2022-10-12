#include <iostream>
using namespace std;

int main ()
{

    int a, b, c;

    cout<<"Inserisci tre valori: ";
    cin>>a>>b>>c;

    cout<<"Il valore della disuguaglianza"<<a<<"<"<<b<<" or "<<a<<"<"<<c<<" è: "<< ((a<b) || (a<c)) << endl;

    return 0;
}