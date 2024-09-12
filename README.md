# C++ Programmierkurs Repository

Willkommen im C++ Programmierkurs! Dieses Repository wird verwendet, um Code-Aufgaben während des Kurses zu teilen und einzureichen.

## Inhaltsverzeichnis
- [Repository-Struktur](#Repository-Struktur)
- [Erste Schritte](#Erste-Schritte)
  - [1. Repository klonen](#1-Repository-klonen)
  - [2. Eigenen Branch erstellen](#2-Eigenen-Branch-erstellen)
  - [3. Arbeiten an Aufgaben](#3-Arbeiten-an-Aufgaben)
  - [4. Änderungen committen und pushen](#4-Änderungen-committen-und-pushen)
  - [5. Pull-Request erstellen](#5-Pull-Request-erstellen)
  - [6. Rückmeldungen und Verbesserungen](#6-Rückmeldungen-und-Verbesserungen)
- [Richtlinien](#Richtlinien)

## Repository-Struktur

- **`main` Branch**: Enthält die Grundstruktur des Projekts und alle geteilten Ressourcen.
- **`{benutzername}_branch`**: Jeder Teilnehmer erstellt seinen eigenen Branch, in dem er oder sie die eigenen geschriebenen Projekte hochladen kann und mit den anderen teilen möchte.

## Erste Schritte

### 1. Repository klonen
Um loszulegen, klone dieses Repository auf deinen lokalen Rechner mit folgendem Befehl:

```bash
git clone https://github.com/aaronAtKt/Cpp_KT-Kurs.git
cd Cpp_KT-Kurs
```

### 2. Eigenen Branch erstellen
Erstelle einen neuen Branch mit deinem GitHub-Benutzernamen oder einem anderen eindeutigen Namen, der deine Arbeit erkennbar macht:

```bash
git checkout -b {benutzername}_branch
```
Ersetze {benutzername}_branch durch deinen tatsächlichen Benutzernamen oder einen gewünschten Branch-Namen.

### 3. Arbeiten an Aufgaben
Jede Aufgabe sollte in einem eigenen Verzeichnis innerhalb deines Branches entwickelt werden. Erstelle dazu ein neues Verzeichnis für jede Aufgabe:

```bash
mkdir aufgabe1
cd aufgabe1
```
Schreibe deinen Code in diesem Verzeichnis und speichere die entsprechenden Dateien.

### 4. Änderungen committen und pushen
Wenn du mit einer Aufgabe fertig bist, kannst du deine Änderungen committen und in dein Branch pushen:

```bash
git add .
git commit -m "Aufgabe 1 abgeschlossen"
git push origin {benutzername}_branch
```

### 5. Pull-Request erstellen
Nachdem du deine Änderungen gepusht hast, erstelle einen Pull-Request (PR) auf GitHub, um deine Arbeit zur Überprüfung einzureichen. Dies kann über die GitHub-Weboberfläche erfolgen.

### 6. Rückmeldungen und Verbesserungen
Nach der Überprüfung deines Codes kannst du Rückmeldungen erhalten. Nimm gegebenenfalls Anpassungen in deinem Branch vor und pushe die Änderungen erneut.

## Richtlinien
Jeder Teilnehmer arbeitet nur in seinem eigenen Branch.
Versuche, die Struktur des Repositories sauber zu halten.
Achte darauf, dass deine Commit-Nachrichten aussagekräftig sind.
Kontakt
Bei Fragen oder Problemen melde dich bitte beim Kursleiter oder stelle eine Frage im Kursforum.

Viel Erfolg beim Programmieren!
