#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>  // Für std::setw und std::setfill zur Formatierung

// WAS: Diese Funktion konvertiert eine Hexadezimal-Zeichenkette in einen Dezimalwert.
// WIE: Sie verwendet einen stringstream, um die Hexadezimalzeichenkette zu parsen und in einen Integer zu konvertieren.
// WARUM: Da Farben in hexadezimaler Form eingegeben werden, brauchen wir eine Möglichkeit, diese Werte in Ganzzahlen umzuwandeln, um sie für weitere Berechnungen oder Darstellungen zu verwenden.
int hexToDecimal(const std::string& hexStr) {
    int dezimalWert; // Variable für den konvertierten Dezimalwert
    std::stringstream ss; // Ein stringstream-Objekt, um die Umwandlung zu erleichtern
    ss << std::hex << hexStr;  // Setzt das Format auf Hexadezimal und fügt die Hexadezimalzeichenkette in den Stream ein
    ss >> dezimalWert;         // Liest den Dezimalwert aus dem Stream
    return dezimalWert;        // Gibt den konvertierten Dezimalwert zurück
}

int main() {
    std::string hexFarbe; // Variable für die vom Benutzer eingegebene Hexadezimalfarbe

    // WAS: Eine Aufforderung an den Benutzer, eine Hexadezimalfarbe einzugeben.
    // WIE: Der Text wird mit std::cout ausgegeben und die Eingabe mit std::cin gelesen.
    // WARUM: Wir benötigen eine Farbe, die der Benutzer in hexadezimaler Form eingibt, um diese später zu konvertieren und anzuzeigen.
    std::cout << "Geben Sie eine Hexadezimalfarbe ein (z.B. #FF5733): ";
    std::cin >> hexFarbe;  // Liest die Eingabe des Benutzers

    // WAS: Überprüft, ob die Eingabe mit einem '#' beginnt und entfernt dieses Zeichen, falls es vorhanden ist.
    // WIE: Mit der Methode substr wird das erste Zeichen abgeschnitten.
    // WARUM: Hexadezimalfarben beginnen oft mit einem '#', das jedoch für die Umwandlung nicht benötigt wird.
    if (hexFarbe[0] == '#') {
        hexFarbe = hexFarbe.substr(1);  // Entfernt das '#' von der Eingabe
    }

    // WAS: Überprüft, ob die verbleibende Zeichenkette genau 6 Zeichen lang ist (2 für Rot, 2 für Grün, 2 für Blau).
    // WIE: Die Methode length wird verwendet, um die Länge der Zeichenkette zu prüfen. Bei einer falschen Eingabe wird eine Fehlermeldung ausgegeben.
    // WARUM: Eine gültige Hexadezimalfarbe für RGB muss genau 6 Zeichen haben, sonst kann sie nicht korrekt interpretiert werden.
    if (hexFarbe.length() != 6) {
        std::cerr << "Ungültige Eingabe! Bitte geben Sie einen gültigen Hexadezimalfarbcode ein.\n";
        return 1;  // Beendet das Programm mit einem Fehlercode
    }

    // WAS: Die Hexadezimalzeichenkette wird in drei separate Zeichenketten für Rot, Grün und Blau unterteilt.
    // WIE: Die Methode substr extrahiert die jeweiligen Zeichenketten (zwei Zeichen für jede Farbe).
    // WARUM: Um die RGB-Farben darzustellen, müssen wir die Hexadezimalwerte für Rot, Grün und Blau getrennt verarbeiten.
    std::string rotHex = hexFarbe.substr(0, 2);  // Extrahiert die ersten zwei Zeichen für Rot
    std::string gruenHex = hexFarbe.substr(2, 2); // Extrahiert die nächsten zwei Zeichen für Grün
    std::string blauHex = hexFarbe.substr(4, 2);  // Extrahiert die letzten zwei Zeichen für Blau

    // WAS: Die zuvor extrahierten Hexadezimalwerte für Rot, Grün und Blau werden in Dezimalwerte umgewandelt.
    // WIE: Die hexToDecimal-Funktion wird aufgerufen, um die Hexadezimalzeichenketten in Ganzzahlen zu konvertieren.
    // WARUM: Um die Farbe im Dezimalformat darzustellen und möglicherweise weiter zu verarbeiten, müssen wir die Hexadezimalwerte in Ganzzahlen umwandeln.
    int rot = hexToDecimal(rotHex);    // Konvertiert Rot von Hex in Dezimal
    int gruen = hexToDecimal(gruenHex); // Konvertiert Grün von Hex in Dezimal
    int blau = hexToDecimal(blauHex);  // Konvertiert Blau von Hex in Dezimal

    // WAS: Die umgewandelten RGB-Werte werden sowohl als Dezimal- als auch als Hexadezimalwerte ausgegeben.
    // WIE: std::cout wird verwendet, um die Werte auszugeben. std::setw, std::setfill und std::uppercase formatieren die Ausgabe so, dass sie immer zweistellig und in Großbuchstaben erfolgt.
    // WARUM: Dies dient der Veranschaulichung der Umwandlung und zeigt dem Benutzer sowohl die Hexadezimal- als auch die Dezimalwerte der Farbe.
    std::cout << "RGB-Werte:\n";
    std::cout << "Rot: " << rot << " (Hex: #" << std::setw(2) << std::setfill('0') << std::uppercase << rotHex << ")\n"; // Ausgabe für Rot
    std::cout << "Grün: " << gruen << " (Hex: #" << std::setw(2) << std::setfill('0') << std::uppercase << gruenHex << ")\n"; // Ausgabe für Grün
    std::cout << "Blau: " << blau << " (Hex: #" << std::setw(2) << std::setfill('0') << std::uppercase << blauHex << ")\n"; // Ausgabe für Blau

    return 0;  // Erfolgreicher Abschluss des Programms
}
