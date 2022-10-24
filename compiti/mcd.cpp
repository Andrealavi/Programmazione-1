#include <iostream>
using namespace std;

int main ()
{

    int a, b;

    do {
        cout<<"Inserisci i due valori di cui bisogna trovare l'M.C.D.: ";
        cin>>a>>b;
    } while (a == 0 && b == 0);

    cout<<"L'M.C.D. tra "<<a<<" e "<<b<<" è: ";

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    cout<<a<<endl;

    return 0;
}