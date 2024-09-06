#include <iostream>
#include <iomanip>  // F�r std::hex-Manipulator

int main() {
    // 1. Hexadezimaldarstellung

    // WAS: Definiert eine Hexadezimalzahl (0x1A3F) und gibt deren Dezimalwert aus.
    // WIE: Eine Variable `hexZahl` wird mit dem Wert 0x1A3F initialisiert und dann als Dezimalzahl ausgegeben.
    // WARUM: Hexadezimalzahlen sind kompakter als Dezimalzahlen und n�tzlich in der Systemprogrammierung.
    int hexZahl = 0x1A3F;  // Hexadezimal: 0x1A3F = Dezimal: 6719
    std::cout << "Hexadezimalzahl 0x1A3F in Dezimal: " << hexZahl << std::endl;  // Ausgabe: 6719

    // 2. Umwandlung von Hexadezimal in Dezimal

    // WAS: Wandelt die Hexadezimalzahl `0xFF` in den Dezimalwert 255 um und gibt diesen aus.
    // WIE: Eine Variable `hexZahl2` wird mit 0xFF initialisiert und direkt als Dezimalzahl ausgegeben.
    // WARUM: N�tzlich beim Debuggen, um Hexadezimalzahlen in eine besser lesbare Dezimalform umzuwandeln.
    int hexZahl2 = 0xFF;  // Hexadezimal: 0xFF = Dezimal: 255
    std::cout << "Hexadezimalzahl 0xFF in Dezimal: " << hexZahl2 << std::endl;  // Ausgabe: 255

    // 3. Umwandlung von Dezimal in Hexadezimal

    // WAS: Wandelt die Dezimalzahl `255` in den Hexadezimalwert `0xFF` um und gibt diesen aus.
    // WIE: std::hex wird verwendet, um die Zahl im Hexadezimalformat anzuzeigen.
    // WARUM: Hexadezimalwerte sind oft k�rzer und werden in Bereichen wie Speicheradressen und Farbwerten verwendet.
    int dezimalZahl = 255;  // Dezimalwert 255
    std::cout << "Dezimalzahl 255 in Hexadezimal: " << std::hex << dezimalZahl << std::endl;  // Ausgabe: ff

    // R�ckkehr zur normalen (dezimalen) Ausgabe
    // WAS: Setzt das Ausgabeformat zur�ck auf Dezimalzahlen.
    // WIE: std::dec wird verwendet, um den Manipulator zur�ckzusetzen.
    // WARUM: Nach der Ausgabe im Hexadezimalformat wollen wir sicherstellen, dass folgende Ausgaben wieder im Dezimalformat erfolgen.
    std::cout << std::dec;  // Setzt den Ausgabeformatierer zur�ck zu Dezimal

    // 4. Hexadezimale Farben (RGB)

    // WAS: Definiert RGB-Farben in Hexadezimalform und gibt die Werte als Dezimalzahlen aus.
    // WIE: Jede Farbe wird als Hexadezimalzahl definiert: Rot = 0xFF0000, Gr�n = 0x00FF00, Blau = 0x0000FF.
    // WARUM: Hexadezimalfarben sind in der Grafikprogrammierung gebr�uchlich, um pr�zise Farben zu definieren.
    int rot = 0xFF0000;   // Rot: 255, 0, 0 (Hex: #FF0000)
    int gruen = 0x00FF00; // Gr�n: 0, 255, 0 (Hex: #00FF00)
    int blau = 0x0000FF;  // Blau: 0, 0, 255 (Hex: #0000FF)

    // WAS: Gibt die Hexadezimalfarben f�r Rot, Gr�n und Blau als Dezimalwerte aus.
    // WIE: std::cout gibt die Farbwerte in der Form "Rot: [Wert], Gr�n: [Wert], Blau: [Wert]" aus.
    // WARUM: Diese Darstellung zeigt die Werte der RGB-Farben als Ganzzahlen und ist in vielen Anwendungen n�tzlich.
    std::cout << "Farben in Hexadezimal:\n";
    std::cout << "Rot: " << rot << ", Gr�n: " << gruen << ", Blau: " << blau << std::endl;

    return 0;  // Programm erfolgreich beenden
}
