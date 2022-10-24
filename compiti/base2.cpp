#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main ()
{
    for (int i = 0; i<5; i++){
        int index = i + 1;
        cout<<index<<" \t Traccia "<<index<<endl;
    }

    int scelta;
    int n1;
    string binaryNumber = "";


    cout<<"\nSeleziona quale traccia eseguire: ";
    cin>>scelta;

    switch (scelta) {
        case 1:
            cout<<"Inserire un numero in base 10: ";
            cin>>n1;

            do{
                binaryNumber = to_string(n1%2) + binaryNumber;
                n1 /= 2;

            }while (n1 / 2 != 0);

            cout<<"1" + binaryNumber<<endl;
            cout<<endl;
            break;
        case 2:
            {
                cout<<"Inserire un numero in base 10: ";
                cin>>n1;

                do{
                    binaryNumber = to_string(n1%2) + binaryNumber;
                    n1 /= 2;

                }while (n1 / 2 != 0);

                binaryNumber = "1" + binaryNumber;

                int numLength = binaryNumber.size();

                for (int i = 0; i<32-numLength; i++){
                    binaryNumber = "0" + binaryNumber;
                }

                cout<<binaryNumber<<endl;
                break;
            }
        case 3:
            {
                int numPos;
                cout<<"Inserire un numero in base 10: ";
                cin>>n1;

                if (n1 < 0){
                    numPos = n1 * -1;
                }
                else{
                    numPos = n1;
                }

                do{
                    binaryNumber = to_string(numPos%2) + binaryNumber;
                    numPos /= 2;

                }while (numPos / 2 != 0);

                if (n1 < 0){
                    cout<<"-1" + binaryNumber<<endl;
                }
                else{
                    cout<<"1" + binaryNumber<<endl;                
                }

                break;
            }
        case 4:
            {
                int counter = 0, num2, num10;
                const int BASE = 2;
                do {
                    
                    cout<<"inserire il numero: ";
                    cin>>num2;

                    if (num2 != 0 && num2 != 1){
                        break;
                    }

                    num10 += num2*pow(BASE, counter); 

                    counter++;
                } while (true);

                cout<<num10<<endl;

                break;
            }
        default:
            break;
    }


    return 0;
}