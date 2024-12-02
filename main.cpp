#include <iostream>
#include <limits>
using namespace std;
class MoreThan21Exception : public exception {
private:
public:
    MoreThan21Exception(char * msg) {
        cout << msg << endl;
    }
};
int main(int argc, char *argv[])
{
        int suma = 0;
        int liczbaProb = 0;
        while (1) {
            int liczba;
            try {
                while (cout << "Podaj liczbe calkowita:" && !(cin >> liczba)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cerr << "To nie jest liczba" << endl;
                }

                suma += liczba;
                if (suma == 21) {
                    cout << "udalo sie zdobyc 21" << endl;
                    liczbaProb++;
                    cout << "Liczba prob: " << liczbaProb << endl;
                    break;
                } else if (suma > 21) {
                    throw new MoreThan21Exception("Suma zostala przekroczona powrot to poprzedniej wartosci");
                }
            }catch(...) {
                suma -= liczba;
                liczbaProb++;
            }
        }
    return 0;
}


