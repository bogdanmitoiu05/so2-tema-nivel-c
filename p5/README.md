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
Starting thread 139670878942912
Thread 139670878942912 found task. Running
Starting thread 139670870550208
Thread 139670870550208 found task. Running
Thread 139670878942912 finalized task. Awaiting new task
Thread 139670878942912 found task. Running
Thread 139670870550208 finalized task. Awaiting new task
Thread 139670870550208 found task. Running
Thread 139670878942912 finalized task. Awaiting new task
Thread 139670878942912 found task. Running
Thread 139670870550208 finalized task. Awaiting new task
Thread 139670870550208 found task. Running
Thread 139670878942912 finalized task. Await
...
Thread 139933339608768 finalized task. Awaiting new task
Thread 139933339608768 found task. Running
Thread 139933348001472 finalized task. Awaiting new task
Thread 139933348001472 found task. Running
Thread 139933339608768 finalized task. Awaiting new task
Thread 139933339608768 has exitedThread 139933348001472 finalized task. Awaiting new task
Thread 139933348001472 has exited

```

```
Starting thread 140201189963456
Starting thread 140201181570752
Starting thread 140201173178048
Thread 140201173178048 found task. Running
Starting thread 140201087203008
Thread 140201087203008 found task. Running
Thread 140201189963456 found task. Running
Thread 140201181570752 found task. Running
Thread 140201189963456 finalized task. Awaiting new task
Thread 140201189963456 found task. Running
Thread 140201173178048 finalized task. Awaiting new task
Thread 140201173178048 found task. Running
...
Thread 140201087203008 found task. Running
Thread 140201189963456 finalized task. Awaiting new task
Thread 140201189963456 found task. Running
Thread 140201181570752 finalized task. Awaiting new task
Thread 140201181570752 found task. Running
Thread 140201173178048 finalized task. Awaiting new task
Thread 140201173178048 has exitedThread 140201087203008 finalized task. Awaiting new task
Thread 140201087203008 has exitedThread 140201189963456 finalized task. Awaiting new task
Thread 140201189963456 has exitedThread 140201181570752 finalized task. Awaiting new task
Thread 140201181570752 has exited
```

```
Starting thread 140177892701888
Starting thread 140177884309184
Starting thread 140177739609792
Starting thread 140177800427200
Starting thread 140177792034496
Starting thread 140177783641792
Starting thread 140177775249088
Starting thread 140177766856384
Thread 140177884309184 found task. Running
Thread 140177783641792 found task. Running
Thread 140177800427200 found task. Running
Thread 140177792034496 found task. Running
Thread 140177892701888 found task. Running
Thread 140177766856384 found task. Running
Thread 140177739609792 found task. Running
Thread 140177775249088 found task. Running
Thread 140177892701888 finalized task. Awaiting new task
Thread 140177892701888 found task. Running
Thread 140177884309184 finalized task. Awaiting new task
Thread 140177884309184 found task. Running
Thread 140177783641792 finalized task. Awaiting new task
Thread 140177783641792 found task. Running
Thread 140177739609792 finalized task. Awaiting new task
Thread 140177766856384 finalized task. Awaiting new task
Thread 140177766856384 found task. Running
Thread 140177739609792 found task. Running
Thread 140177792034496 finalized task. Awaiting new task
Thread 140177792034496 found task. Running
Thread 140177800427200 finalized task. Awaiting new task
Thread 140177800427200 found task. Running
Thread 140177775249088 finalized task. Awaiting new task
...
Thread 140177766856384 found task. Running
Thread 140177800427200 finalized task. Awaiting new task
Thread 140177800427200 found task. Running
Thread 140177792034496 finalized task. Awaiting new task
Thread 140177792034496 found task. Running
Thread 140177892701888 finalized task. Awaiting new task
Thread 140177892701888 found task. Running
Thread 140177884309184 finalized task. Awaiting new task
Thread 140177884309184 found task. Running
Thread 140177739609792 finalized task. Awaiting new task
Thread 140177739609792 found task. Running
Thread 140177775249088 finalized task. Awaiting new task
Thread 140177775249088 found task. Running
Thread 140177792034496 finalized task. Awaiting new task
Thread 140177783641792 finalized task. Awaiting new task
Thread 140177766856384 finalized task. Awaiting new task
Thread 140177800427200 finalized task. Awaiting new task
Thread 140177792034496 has exitedThread 140177766856384 has exitedThread 140177783641792 has exitedThread 140177800427200 has exitedThread 140177892701888 finalized task. Awaiting new task
Thread 140177892701888 has exitedThread 140177884309184 finalized task. Awaiting new task
Thread 140177884309184 has exitedThread 140177739609792 finalized task. Awaiting new task
Thread 140177739609792 has exitedThread 140177775249088 finalized task. Awaiting new task
Thread 140177775249088 has exited
```

```
Starting thread 139653694879424
Starting thread 139653686486720
Starting thread 139653678094016
Starting thread 139653545981632
Starting thread 139653669701312
Starting thread 139653661308608
Starting thread 139653652915904
Starting thread 139653644523200
Starting thread 139653636130496
Starting thread 139653627737792
Starting thread 139653537588928
Starting thread 139653529196224
Starting thread 139653520803520
Starting thread 139653512410816
Starting thread 139653504018112
Starting thread 139653495625408
Thread 139653495625408 found task. Running
Thread 139653669701312 found task. Running
Thread 139653686486720 found task. Running
Thread 139653627737792 found task. Running
Thread 139653545981632 found task. Running
Thread 139653520803520 found task. Running
Thread 139653652915904 found task. Running
Thread 139653636130496 found task. Running
Thread 139653529196224 found task. Running
Thread 139653644523200 found task. Running
Thread 139653661308608 found task. Running
Thread 139653504018112 found task. Running
Thread 139653694879424 found task. Running
Thread 139653678094016 found task. Running
Thread 139653512410816 found task. Running
Thread 139653537588928 found task. Running
Thread 139653694879424 finalized task. Awaiting new task
Thread 139653694879424 found task. Running
Thread 139653636130496 finalized task. Awaiting new task
Thread 139653636130496 found task. Running
Thread 139653537588928 finalized task. Awaiting new task
Thread 139653537588928 found task. Running
Thread 139653669701312 finalized task. Awaiting new task
Thread 139653652915904 finalized task. Awaiting new task
Thread 139653627737792 finalized task. Awaiting new task
Thread 139653627737792 found task. Running
Thread 139653520803520 finalized task. Awaiting new task
Thread 139653520803520 found task. Running
Thread 139653686486720 finalized task. Awaiting new task
Thread 139653686486720 found task. Running
Thread 139653545981632 finalized task. Awaiting new task
Thread 139653545981632 found task. Running
Thread 139653529196224 finalized task. Awaiting new task
Thread 139653529196224 found task. Running
Thread 139653669701312 found task. Running
Thread 139653661308608 finalized task. Awaiting new task
Thread 139653661308608 found task. Running
Thread 139653512410816 finalized task. Awaiting new task
Thread 139653512410816 found task. Running
Thread 139653652915904 found task. Running
Thread 139653495625408 finalized task. Awaiting new task
Thread 139653495625408 found task. Running
Thread 139653644523200 finalized task. Awaiting new task
Thread 139653644523200 found task. Running
Thread 139653504018112 finalized task. Awaiting new task
Thread 139653504018112 found task. Running
Thread 139653678094016 finalized task. Awaiting new task
Thread 139653678094016 found task. Running
Thread 139653694879424 finalized task. Awaiting new task
Thread 139653694879424 found task. Running
Thread 139653636130496 finalized task. Awaiting new task
...
Thread 139653627737792 found task. Running
Thread 139653537588928 finalized task. Awaiting new task
Thread 139653686486720 finalized task. Awaiting new task
Thread 139653529196224 finalized task. Awaiting new task
Thread 139653520803520 finalized task. Awaiting new task
Thread 139653669701312 finalized task. Awaiting new task
Thread 139653678094016 finalized task. Awaiting new task
Thread 139653512410816 finalized task. Awaiting new task
Thread 139653661308608 finalized task. Awaiting new task
Thread 139653644523200 finalized task. Awaiting new task
Thread 139653504018112 finalized task. Awaiting new task
Thread 139653652915904 finalized task. Awaiting new task
Thread 139653495625408 finalized task. Awaiting new task
Thread 139653537588928 has exited
Thread 139653652915904 has exited
Thread 139653678094016 has exited
Thread 139653661308608 has exited
Thread 139653644523200 has exited
Thread 139653504018112 has exited
Thread 139653495625408 has exited
Thread 139653686486720 has exited
Thread 139653669701312 has exited
Thread 139653512410816 has exited
Thread 139653520803520 has exited
Thread 139653529196224 has exited
Thread 139653694879424 finalized task. Awaiting new task
Thread 139653694879424 has exited
Thread 139653636130496 finalized task. Awaiting new task
Thread 139653636130496 has exited
Thread 139653545981632 finalized task. Awaiting new task
Thread 139653545981632 has exited
Thread 139653627737792 finalized task. Awaiting new task
Thread 139653627737792 has exited
```

## Măsurători timp

**1. Thread pool de 2 fire**
```
________________________________________________________
Executed in   50.00 secs      fish           external
   usr time    0.81 millis  323.00 micros    0.49 millis
   sys time    2.07 millis  105.00 micros    1.97 millis

```

**2. Thread pool de 4 fire**
```
________________________________________________________
Executed in   25.00 secs      fish           external
   usr time    0.43 millis  433.00 micros    0.00 millis
   sys time    2.75 millis    0.00 micros    2.75 millis
```
**3. Thread pool de 8 fire**
```
________________________________________________________
Executed in   13.00 secs      fish           external
   usr time    1.45 millis  289.00 micros    1.16 millis
   sys time    2.50 millis  175.00 micros    2.33 millis
```
**4. Thread pool de 16 fire**
```
________________________________________________________
Executed in    7.00 secs      fish           external
   usr time    1.41 millis  303.00 micros    1.10 millis
   sys time    5.45 millis  189.00 micros    5.26 millis
```
### Observații

Se poate observa o scădere seminificativă pe măsură ce creștem numărul de fire pentru procesarea task-urilor. Acest lucru se datorează faptului că o porțiune din ce în ce mai mare dintre sarcini sunt în grija
algoritmilor de planificare a sistemului de operare. Așadar, throughput-ul crește proporțional cu numărul de fire alocat unui thread pool. Evident, acest lucru nu este valabil în orice situație, mai ales dacă
firele de execuție fac o anumită sarcină grea din punct de vedere computațional (vezi exemplul make din `../p2`), dar regula generală rămâne: Dacă se pot aloca mai multe fire, să se aloce mai multe fire.
