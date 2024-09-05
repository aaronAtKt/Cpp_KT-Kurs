#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>  // F�r std::setw und std::setfill zur Formatierung

// WAS: Diese Funktion konvertiert eine Hexadezimal-Zeichenkette in einen Dezimalwert.
// WIE: Sie verwendet einen stringstream, um die Hexadezimalzeichenkette zu parsen und in einen Integer zu konvertieren.
// WARUM: Da Farben in hexadezimaler Form eingegeben werden, brauchen wir eine M�glichkeit, diese Werte in Ganzzahlen umzuwandeln, um sie f�r weitere Berechnungen oder Darstellungen zu verwenden.
int hexToDecimal(const std::string& hexStr) {
    int dezimalWert; // Variable f�r den konvertierten Dezimalwert
    std::stringstream ss; // Ein stringstream-Objekt, um die Umwandlung zu erleichtern
    ss << std::hex << hexStr;  // Setzt das Format auf Hexadezimal und f�gt die Hexadezimalzeichenkette in den Stream ein
    ss >> dezimalWert;         // Liest den Dezimalwert aus dem Stream
    return dezimalWert;        // Gibt den konvertierten Dezimalwert zur�ck
}

int main() {
    std::string hexFarbe; // Variable f�r die vom Benutzer eingegebene Hexadezimalfarbe

    // WAS: Eine Aufforderung an den Benutzer, eine Hexadezimalfarbe einzugeben.
    // WIE: Der Text wird mit std::cout ausgegeben und die Eingabe mit std::cin gelesen.
    // WARUM: Wir ben�tigen eine Farbe, die der Benutzer in hexadezimaler Form eingibt, um diese sp�ter zu konvertieren und anzuzeigen.
    std::cout << "Geben Sie eine Hexadezimalfarbe ein (z.B. #FF5733): ";
    std::cin >> hexFarbe;  // Liest die Eingabe des Benutzers

    // WAS: �berpr�ft, ob die Eingabe mit einem '#' beginnt und entfernt dieses Zeichen, falls es vorhanden ist.
    // WIE: Mit der Methode substr wird das erste Zeichen abgeschnitten.
    // WARUM: Hexadezimalfarben beginnen oft mit einem '#', das jedoch f�r die Umwandlung nicht ben�tigt wird.
    if (hexFarbe[0] == '#') {
        hexFarbe = hexFarbe.substr(1);  // Entfernt das '#' von der Eingabe
    }

    // WAS: �berpr�ft, ob die verbleibende Zeichenkette genau 6 Zeichen lang ist (2 f�r Rot, 2 f�r Gr�n, 2 f�r Blau).
    // WIE: Die Methode length wird verwendet, um die L�nge der Zeichenkette zu pr�fen. Bei einer falschen Eingabe wird eine Fehlermeldung ausgegeben.
    // WARUM: Eine g�ltige Hexadezimalfarbe f�r RGB muss genau 6 Zeichen haben, sonst kann sie nicht korrekt interpretiert werden.
    if (hexFarbe.length() != 6) {
        std::cerr << "Ung�ltige Eingabe! Bitte geben Sie einen g�ltigen Hexadezimalfarbcode ein.\n";
        return 1;  // Beendet das Programm mit einem Fehlercode
    }

    // WAS: Die Hexadezimalzeichenkette wird in drei separate Zeichenketten f�r Rot, Gr�n und Blau unterteilt.
    // WIE: Die Methode substr extrahiert die jeweiligen Zeichenketten (zwei Zeichen f�r jede Farbe).
    // WARUM: Um die RGB-Farben darzustellen, m�ssen wir die Hexadezimalwerte f�r Rot, Gr�n und Blau getrennt verarbeiten.
    std::string rotHex = hexFarbe.substr(0, 2);  // Extrahiert die ersten zwei Zeichen f�r Rot
    std::string gruenHex = hexFarbe.substr(2, 2); // Extrahiert die n�chsten zwei Zeichen f�r Gr�n
    std::string blauHex = hexFarbe.substr(4, 2);  // Extrahiert die letzten zwei Zeichen f�r Blau

    // WAS: Die zuvor extrahierten Hexadezimalwerte f�r Rot, Gr�n und Blau werden in Dezimalwerte umgewandelt.
    // WIE: Die hexToDecimal-Funktion wird aufgerufen, um die Hexadezimalzeichenketten in Ganzzahlen zu konvertieren.
    // WARUM: Um die Farbe im Dezimalformat darzustellen und m�glicherweise weiter zu verarbeiten, m�ssen wir die Hexadezimalwerte in Ganzzahlen umwandeln.
    int rot = hexToDecimal(rotHex);    // Konvertiert Rot von Hex in Dezimal
    int gruen = hexToDecimal(gruenHex); // Konvertiert Gr�n von Hex in Dezimal
    int blau = hexToDecimal(blauHex);  // Konvertiert Blau von Hex in Dezimal

    // WAS: Die umgewandelten RGB-Werte werden sowohl als Dezimal- als auch als Hexadezimalwerte ausgegeben.
    // WIE: std::cout wird verwendet, um die Werte auszugeben. std::setw, std::setfill und std::uppercase formatieren die Ausgabe so, dass sie immer zweistellig und in Gro�buchstaben erfolgt.
    // WARUM: Dies dient der Veranschaulichung der Umwandlung und zeigt dem Benutzer sowohl die Hexadezimal- als auch die Dezimalwerte der Farbe.
    std::cout << "RGB-Werte:\n";
    std::cout << "Rot: " << rot << " (Hex: #" << std::setw(2) << std::setfill('0') << std::uppercase << rotHex << ")\n"; // Ausgabe f�r Rot
    std::cout << "Gr�n: " << gruen << " (Hex: #" << std::setw(2) << std::setfill('0') << std::uppercase << gruenHex << ")\n"; // Ausgabe f�r Gr�n
    std::cout << "Blau: " << blau << " (Hex: #" << std::setw(2) << std::setfill('0') << std::uppercase << blauHex << ")\n"; // Ausgabe f�r Blau

    return 0;  // Erfolgreicher Abschluss des Programms
}
