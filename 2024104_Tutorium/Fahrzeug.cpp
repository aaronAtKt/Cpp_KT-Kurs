#include <iostream>
#include <string>

using namespace std;

namespace fahrzeug {
	class Auto {
	private:
		string marke;
		int jahr;
	public:
		Auto(string m, int j) : marke(m), jahr(j) {}
		int getJahr() {
			return jahr;
		}
		void infoAnzeigen() {
			cout << "Marke: " << marke
				<< ", Baujahr: " << jahr << endl;
		}
	};
}

int main() {
	fahrzeug::Auto meinAuto("BMW", 2020);

	meinAuto.infoAnzeigen();
}