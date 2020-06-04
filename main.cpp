#include <queue>
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
queue < int > liczbyParzyste;
queue < int > liczbyNieparzyste;

int main()
{
	for (int i = 0; i < 10; i++) {
		int a;
		int b;
		cout << "Podaj a: ";
		cin >> a;
		cout << "Podaj b: ";
		cin >> b;
		int suma = a + b;
		if (suma % 2 != 0) {
			liczbyNieparzyste.push(suma);
		}
		else liczbyParzyste.push(suma);
	}
	ofstream zapis("liczbyParzyste.txt");
	ofstream zapis2("liczbyNieparzyste.txt");
	zapis.close();
	zapis2.close();

	for (int i = 0; i < liczbyParzyste.size(); i++) {
		zapis.open("liczbyParzyste.txt", ios_base::app);
		zapis << liczbyParzyste.front()<<" ";
		zapis.close();
		liczbyParzyste.pop();
	}
	for (int i = 0; i < liczbyNieparzyste.size(); i++) {
		zapis2.open("liczbyNieparzyste.txt", ios_base::app);
		zapis2 << liczbyNieparzyste.front()<<" ";
		zapis2.close();
		liczbyNieparzyste.pop();
	}

	system("pause");
	return 0;
}