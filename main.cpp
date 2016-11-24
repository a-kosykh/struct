#include <iostream>
using namespace std;
struct Guitar 
{
	char model[64]; 
	int year; 
	char country[64]; 
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
	cout << "Number of guitars = ";
	cin >> n;
	pG = (Musician *)malloc(n * sizeof(Musician));
	for (int i = 0; i<n; i++)
	{
		cin.clear();
		cout << "guitar N: " << i + 1;
		cout << "\nMusician's name: ";
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
		cout << pG[i].name << " " << pG[i].gtr.model << " " << pG[i].gtr.year << " " << pG[i].gtr.country << endl;
	int k = 0;
	for (int i = 0; i < n; i++) 
		if (pG[i].gtr.year < 1980) k++;
	if (k) cout << "Musicians with rare guitars: " << k << endl;
	free(pG);
	system("pause");
	return 0;
}
