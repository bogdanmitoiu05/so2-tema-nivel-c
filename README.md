# Tema Nivel C - SO2 - Mitoiu Bogdan-Petru
### Probleme abordate:
Am abordat problemele 1, 2 și 5 din secțiunea de teme a fișierului atașat la laboratorul 11.

### Structura repo-ului
- Folderele de forma `pX` corespund rezolvării problemei `X`
- `common` conține implementările structurilor de date comune între probleme. Deoarece cele 3 probleme cer
aproape aceleași structuri de date, din respect pentru principiul fundamental DRY (Don't Repeat Yourself), am grupat
tipurile de date și structurile comune într-o bibliotecă internă, cod al căreia m-am asigurat să comentez în amănunt.

Fiecare subfolder aferent unei probleme are un fișier README care descrie enunțul problemei, rezultatele obținute și eventuale remărci asupra acestora.

### Instrucțiuni de citire

Înainte de a intra în analiza programelor, autorul recomandă vizitarea și familiarizarea cititorului cu macrocomenzile din cadrul `common/utils.h` și `common/task.h`. Acestea sunt folosite
în acest proiect pentru a minimiza numărul de linii scrise și pentru a evidenția logica importantă din cadrul diferitelor metode.

În continuare, autorul recomandă să se consulte folderele `pX` în orice ordine, folsind o abordare „depth-first” prin fișierele de include pentru a descoperi logica internă.
