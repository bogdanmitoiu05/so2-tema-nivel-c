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
Spawning thread (x1000)
Thread joined (x1000)
```

```
Starting thread 139994597422784
Starting thread 139994589030080
Starting thread 139994459010752
Starting thread 139994580637376
Starting thread 139994572244672
Starting thread 139994563851968
Starting thread 139994555459264
Starting thread 139994547066560
Starting thread 139994538673856
Starting thread 139994450618048
Thread 139994459010752 found task. Running
Thread 139994563851968 found task. Running
Thread 139994580637376 found task. Running
Thread 139994597422784 found task. Running
Thread 139994589030080 found task. Running
Thread 139994450618048 found task. Running
Thread 139994547066560 found task. Running
Thread 139994555459264 found task. Running
Thread 139994572244672 found task. Running
Thread 139994538673856 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994555459264 found task. Running
Thread 139994538673856 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994572244672 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994459010752 found task. Running
Thread 139994450618048 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994450618048 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994589030080 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994450618048 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994450618048 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994572244672 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 found task. Running
Thread 139994580637376 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994459010752 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994572244672 found task. Running
Thread 139994589030080 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994555459264 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 found task. Running
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994538673856 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994580637376 finalized task. Awaiting new task
Thread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 found task. Running
Thread 139994580637376 found task. Running
Thread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 found task. Running
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994572244672 found task. Running
Thread 139994547066560 finalized task. Awaiting new task
Thread 139994547066560 found task. Running
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994459010752 found task. Running
Thread 139994538673856 finalized task. Awaiting new task
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 found task. Running
Thread 139994538673856 found task. Running
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 found task. Running
Thread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 found task. Running
...
Thread 139994555459264 finalized task. Awaiting new task
Thread 139994555459264 has exitedThread 139994597422784 finalized task. Awaiting new task
Thread 139994597422784 has exitedThread 139994538673856 finalized task. Awaiting new task
Thread 139994538673856 has exitedThread 139994547066560 finalized task. Awaiting new task
Thread 139994459010752 finalized task. Awaiting new task
Thread 139994572244672 finalized task. Awaiting new task
Thread 139994450618048 finalized task. Awaiting new task
Thread 139994450618048 has exitedThread 139994580637376 finalized task. Awaiting new task
Thread 139994580637376 has exitedThread 139994459010752 has exitedThread 139994572244672 has exitedThread 139994547066560 has exitedThread 139994563851968 finalized task. Awaiting new task
Thread 139994563851968 has exitedThread 139994589030080 finalized task. Awaiting new task
Thread 139994589030080 has exited


```
## Măsurători timp

**1. Execuție a 1000 de fire de execuție**
```
________________________________________________________
Executed in    2.02 secs      fish           external
   usr time    6.28 millis   90.00 micros    6.19 millis
   sys time   40.77 millis  496.00 micros   40.27 millis

```

**2. Execuție cu thread pool (1000 sarcini, max 10 fire)**
```
________________________________________________________
Executed in  200.01 secs      fish           external
   usr time    6.59 millis  266.00 micros    6.32 millis
   sys time   11.24 millis  190.00 micros   11.05 millis

```


### Observații
Firele de execuție simple sunt cu mult mai performante decât un sistem bazat pe fire worker. Cu toate acestea, în aplicații adevărate este foarte probabil ca
sarcinile efectuate de firele de execuție să taxeze procesorul prea mult pentru a face abordarea cu foarte multe fire de execuție viabilă. Un exemplu elocvent este
comanda `make`. Deoarece munca de compilare nu este una trivială, dacă numărul de job-uri depășește numărul de procesoare virtuale (`$(nproc)`) se poate observa o încetinire
substanțială a sistemului de calcul.