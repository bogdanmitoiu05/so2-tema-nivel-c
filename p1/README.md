### Cerința problemei
O companie de streaming video dorește să proceseze simultan segmente multimedia utilizând
un thread pool. Implementați un program complet care creează 5 worker thread-uri și
procesează 50 de task-uri. Fiecare task trebuie să simuleze procesarea unui segment video
printr-un `sleep()` aleator și să afișeze thread-ul care l-a executat. Programul trebuie să
implementeze și mecanismul de oprire controlată al pool-ului.


### Exemplu de rulare
```
$ ./p1
```

### Exemplu de output
```
Starting thread 139738853930688
Starting thread 139738845537984
Starting thread 139738707130048
Starting thread 139738837145280
Starting thread 139738828752576
Thread 139738853930688 found task. Running
Thread 139738707130048 found task. Running
Thread 139738845537984 found task. Running
Thread 139738828752576 found task. Running
Thread 139738837145280 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738853930688 finalized
Thread 139738853930688 found task. Running
Thread 139738845537984 finalized
Thread 139738845537984 found task. Running
Thread 139738707130048 finalized
Thread 139738707130048 found task. Running
Thread 139738837145280 finalized
Thread 139738837145280 found task. Running
Thread 139738828752576 finalized
Thread 139738828752576 found task. Running
Thread 139738853930688 finalized
Thread 139738707130048 finalized
Thread 139738845537984 finalized
Thread 139738837145280 finalized
Thread 139738828752576 finalized
```
