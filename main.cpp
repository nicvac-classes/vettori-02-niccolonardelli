#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int n, i, voto, nass;
    string nomi;
    cout << "quanti alunni ci sono" << endl;
    cin >> n;
    vector<int>voti(n);
    vector<int>assenze(n);
    vector<string>alunni(n);
    i=0;
    while (i<n)
    {
        cout << "come si chiama l'alunno?" << endl;
        cin >> nomi;
        alunni[i] = nomi;
        cout << "qual è il voto dell'alunno" << endl;
        cin >> voto;
        voti[i] = voto;
        cout << "quante assenze ha l'alunno?"  << endl;
        cin >> nass;
        assenze [i] = nass;
        i=i+1;
    }
    i = 0;
    while (i< n)
    {
        cout << "il voto dello studente di nome " << alunni [i] << " è "  << voti[i] << ". lo studente ha " << assenze[i] << " assenze." << endl; 
        i=i+1;
    }
    i=0;
    cout << "inserisci l'indice dello studente (primo studente = 0, secondo studente = 1 e cosi via.)" << endl;
    cin>> i;
    cout << "il voto dello studente di nome " << alunni [i] << " è "  << voti[i] << ". lo studente ha " << assenze[i] << " assenze." << endl;


}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
