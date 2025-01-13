#include <iostream>
#include <string>
#include <regex>
using namespace std;
void testRegex(const string& description, const regex& pattern, const string& testString) {
    if (regex_match(testString, pattern)) {
        cout << description << ": " << testString << " - poprawny\n";
    } else {
        cout << description << ": " << testString << " - niepoprawny\n";
    }
}
int main()
{
    string liczba = "opopop+2.890 popl";
    smatch res;
    regex regPattern(".*[+-]{1}[0-9]+[.]{1}[0-9]+.*");
    if(regex_search(liczba, res, regPattern)) {
        cout << "Znaleziono" << endl;
    } else {
        cout << "Nie znaleziono" << endl;
    }
    string test[] = {
            "23:11:09",
            "23:11:9",
            "23:11",
            "13:11:9",
            "9:11:9",
            "9:11",
            "12:39",
            "8:12:18",
            "25:13:18",
            "abcd",
            "100:20:20",
            "10:90:20"
    };
    regPattern = "((([0-1]?[0-9])|(2[0-3])):[0-5]?[0-9](:[0-5]?[0-9])?)";
//    for (string godzina : test) {
//        if(regex_match(godzina, res, regPattern)) {
//            cout << "Znaleziono: " << godzina << endl;
//        } else {
//            cout << "Nie znaleziono: " << godzina << endl;
//        }
//    }
    regex ulicaPattern("[A-Z][a-z]+");
    regex kodPattern("[0-9]{2}-[0-9]{3}");
    regex nrPattern("[0-9]+[a-zA-Z]?");
    regex nrMiesPattern("[0-9]+");

    cout << "Testowanie wyrazen regularnych:\n\n";

    testRegex("Ulica", ulicaPattern, "Marszalkowska");
    testRegex("Ulica", ulicaPattern, "Kwiatowa");
    testRegex("Ulica", ulicaPattern, "kwiatowa");
    testRegex("Ulica", ulicaPattern, "Kwiatowa123");

    testRegex("Kod pocztowy", kodPattern, "00-123");
    testRegex("Kod pocztowy", kodPattern, "12-345");
    testRegex("Kod pocztowy", kodPattern, "123-456");
    testRegex("Kod pocztowy", kodPattern, "12-34a");

    testRegex("Numer domu", nrPattern, "28");
    testRegex("Numer domu", nrPattern, "28B");
    testRegex("Numer domu", nrPattern, "28b");
    testRegex("Numer domu", nrPattern, "28-B");

    testRegex("Numer mieszkania", nrMiesPattern, "15");
    testRegex("Numer mieszkania", nrMiesPattern, "150");
    testRegex("Numer mieszkania", nrMiesPattern, "15A");

}
