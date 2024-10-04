#pragma once
// Lokaler Namensraum util
// Prototypen/Deklaration
#include <iostream>
namespace util {
	extern int zaehler;

	void sucheAnfang();
	void sucheEnde();
}

namespace myUtil {
	void sucheAnfang();
}

namespace mathOperation {
	int add(int, int);
	int sub(int, int);
}

// Unternehmen mit 2 Abteilung Sales und HR

namespace company {
	namespace sales {
		void recordTransaction();
	}

	namespace hr {
		void processSalery();
	}
}

// Anonmyer Namespace nur innerhalb der Datei bekannt
namespace {
	void internalFunction() {
		std::cout << "Das ist eine interne Funktion." << std::endl;
	}
}

