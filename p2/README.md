## Cerința problemei
Un sistem de baze de date trebuie să gestioneze un număr foarte mare de interogări
concurrente. Realizați două implementări diferite: una bazată pe crearea unui thread pentru
fiecare task și alta bazată pe thread pool. Măsurați timpul total de execuție pentru 1000 de task-
uri și analizați diferențele de performanță dintre cele două abordări.

## Exemplu de rulare
```
$ ./p2 -e pure_thread # execută cele 1000 fire de execuție
```

```
$ ./p2 -e thread_pool # rulează cu un thread pool (10 fire de excuție maxim)
```
## Exemplu de output
```
```

## Măsurători timp

**1. Execuție a 1000 de fire de execuție**


**2. Execuție cu thread pool (1000 sarcini, max 10 fire)**



### Observații
