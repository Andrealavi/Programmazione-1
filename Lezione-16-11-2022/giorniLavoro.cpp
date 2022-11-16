#include<iostream>
using namespace std;



void stampaTurno(int giorno){
    if (giorno == 0 || giorno == 2 || giorno == 4) {
        cout<<"Mattina e pomeriggio"<<endl;
    }
    else if (giorno == 1 || giorno == 3){
        cout<<"Solo mattino"<<endl;
    }
    else if (giorno == 5 || giorno == 6){
        cout<<"Riposo"<<endl;
    }
}

int main() {
    
    enum weekDays {lunedi, martedi, mercoledi, giovedi, venerdi, sabato, domenica};
    
    weekDays a = lunedi;
    weekDays b = giovedi;
    weekDays c = domenica;
    
    stampaTurno(a);
    stampaTurno(b);
    stampaTurno(c);
    
    return 0;
}
