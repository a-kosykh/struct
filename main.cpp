#include <iostream>
using namespace std;
struct Guitar // Структура гитара
{
    char model[64]; // Модель
    int year; // Год выпуска
    char country[64]; // Страна
};
struct Musician
{
    char name[128];
    Guitar gtr;

};
int main()
{
    Musician *pG;
    int n;
    cout << "n=";
    cin >> n;
    pG = (Musician *)malloc(n*sizeof(Musician));
    for (int i = 0; i<n; i++)
    {
        cin.clear();
        cout << "guitar N: " << i + 1;
        cout << "\nname: ";
        cin >> pG[i].name;
        cin.clear();

        cout << "\nmodel: ";
        cin >> pG[i].gtr.model;
        cin.clear();

        cout << "\nYear: ";
        cin >> pG[i].gtr.year;
        cin.clear();

        cout << "\ncountry: ";
        cin >> pG[i].gtr.country;
        cin.clear();
    }
    for (int i = 0; i<n; i++)
        cout << pG[i].name << " " << pG[i].gtr.model << " " << pG[i].gtr.year <<" " << pG[i].gtr.country  << endl;
    free (pG);
    return 0;
}
