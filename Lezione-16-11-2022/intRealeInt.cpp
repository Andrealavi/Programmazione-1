#include<iostream>

using namespace std;

int main() {
    
    int a;
    float b;
    int c;
    
    cout<<"Inserisci un numero: ";
    cin>>a;
    
    b = static_cast<float>(a);
    c = static_cast<int>(b);
    
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
    
    return 0;
    
}
