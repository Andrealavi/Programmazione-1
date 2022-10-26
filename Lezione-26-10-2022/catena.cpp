#include <iostream>
using namespace std;

int main () 
{
    int scelta, numAnelli = 0;

    do {

        cout<<"1 \t Inserisci anello"<<endl;
        cout<<"2 \t Elimina anello"<<endl;
        cout<<"3 \t Stampa catena anelli"<<endl;
        cout<<"4 \t Termina programma"<<endl;

        cout<<"\nScegliere che tipo di operazione eseguire: ";
        cin>>scelta;

        switch (scelta)
        {
        case 1:
            {
                int posizione;

                cout<<"Digitare la posizione in cui va inserito l'anello nella catena: ";
                cin>>posizione;

                if (posizione < 0 || posizione > numAnelli + 1) {
                    cout<<"Non è possibile aggiungere l'anello alla posizione selezionata"<<endl;
                    break;
                }

                numAnelli++;
                cout<<"\n"<<endl;

                break;
            }
        case 2:
            {
                int posizione;

                cout<<"Digitare la posizione in cui va eliminato l'anello nella catena: ";
                cin>>posizione;

                if (posizione < 0 || posizione > numAnelli) {
                    cout<<"Non è possibile rimuovere l'anello alla posizione selezionata"<<endl;
                    break;
                }

                numAnelli--;

                cout<<"\n"<<endl;
                break;
            }
        case 3:
            {
                for (int i = 0; i < numAnelli; i++){
                    cout<<"F";
                }
                cout<<"\n"<<endl;

                break;
            }
        default:
            break;
        }

    } while (scelta != 4);

    return 0; 
}