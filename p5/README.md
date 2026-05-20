## Cerința problemei
Un centru de cercetare dezvoltă un simulator pentru compararea performanței diferitelor
dimensiuni de thread pool. Implementați un program care rulează același set de task-uri
utilizând pool-uri de dimensiuni diferite: 2, 4, 8 și 16 workeri. Analizați timpul total de execuție și
explicați modul în care dimensiunea pool-ului influențează performanța pentru task-uri CPU-
bound și I/O-bound.
## Exemplu de rulare
```
$ ./p5 -s 2 # execută 1000 de sarcini pe max 2 fire
```

```
$ ./p5 -s 4 # execută 1000 de sarcini pe max 4 fire
```
```
$ ./p5 -s 8 # execută 1000 de sarcini pe max 8 fire
```
```
$ ./p5 -s 16 # execută 1000 de sarcini pe max 16 fire
```
## Exemplu de output
```
```

## Măsurători timp

**1. Thread pool de 2 fire**


**2. Thread pool de 4 fire**

**3. Thread pool de 8 fire**

**4. Thread pool de 16 fire**

### Observații
