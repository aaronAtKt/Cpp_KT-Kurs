#include "Klasse.hpp"

int main(int argc, char **argv) {
	std::vector<Schueler>	schuelerliste;
	std::string				namebuffer;

	Lehrer					lehrkraft("Aaron", 1);
	lehrkraft.addFach("C++");
	lehrkraft.addFach("Java");
	lehrkraft.addFach("Python");

	for (int i = 0; i < 8; i++)
	{
		namebuffer = "Schueler #";
		namebuffer += std::to_string(i + 1);
		Schueler buffer(namebuffer, i + 1);
		schuelerliste.push_back(buffer);
		namebuffer.clear();
	}

	try {
		Klasse klasse("Testklasse", lehrkraft, schuelerliste);
		klasse.addSchueler(Schueler("Testschueler", 42));
		klasse.printKlasse();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}