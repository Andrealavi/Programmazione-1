#include <iostream>
using namespace std;

int main()
{
    int i;

    cout<<"Inserisci il valore: ";
    cin>>i;

    i = ((i%10 )*100) + ((i/10 % 10)*10) + (i/100 % 10);

    cout<<"Il valore invertito è: "<<i<<endl;

    return 0;
}