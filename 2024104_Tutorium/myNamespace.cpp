// Jedes Projekt hat einen globalen Namespace ::n
// Unärer Bereichsauflösungsoperator ::
#include <iostream>
#include "utils.hpp"
using namespace std;

int _main() {
	using namespace util;
	using namespace mathOperation;
	// Globaler Namespace::std::cout

	//std::cout << "Eine Ausgabe" << std::endl;

	zaehler = 5;

	cout << zaehler << endl;

	// Zugriff auf Funktionen innerhalb des Namespaces
	cout << "Addition: " << /*MathOperation::*/add(5, 3) << endl;
	cout << "Subtraktion: " << /*MathOperation::*/sub(5, 3) << endl;
	company::sales::recordTransaction();
	company::hr::processSalery();
	util::sucheAnfang();
	myUtil::sucheAnfang();
	internalFunction();
	return 0;
}

/*#include <iostream>
* using namespace std;
* 
* int main() {
*	cout << "Eine Ausgabe" << endl;    
*	return 0;
*}
*/