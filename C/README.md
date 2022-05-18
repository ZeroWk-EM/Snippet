# LAST DIGIT

![](https://img.shields.io/badge/snippet-c-green)

Tramite questo algoritmo è possibile andare a recuperare l'ultimo elemento di un numero, immetendo l'algoritmo all'interno di un ciclo possiamo "scorrere" ed andare a recuperare via via a recuperare tutte le cifre all'interno del numero.

## SOLUZIONE MATEMATICA
Per risolvere queste problema andremo ad usare il modulo (per l'esatezza modulo di 10) che ci fa ottenere il resto di un numero diviso 10 e questo sarà per l'appunto l'ultimo carattere

| ES = 352534|
| ------------- |


| NUMERO  | RISULTATO DIVISIONE |  RESTO |
| ------------- | ------------- |  ------------- |
| 352534  | 352534/10 = 35253,4  | 4 |
| 35253  | 35253/10 = 3525,3  | 3 |
| 3525  | 3525/10 = 352,5  | 5 |
| 352  | 352/10 = 35,2  | 2 |
| 35  | 35/10 = 3,5  | 5 |
| 3  | 3/10 = 0,3  | 3 |

### PERCHE' ACCADE TUTTO CIO

352534%10 = 352534/10 ==> 35253,4 ==> -35253*10+352534=**4** 

35253%10 = 35253/10 ==> 3525,3 ==> -3525*10+35253=**3**

[...]

Continuando cosi otteremo 4 3 5 2 5 3 questo perchè essendo un int scartera la parte con la virgola quindi continuando cosi.
Il numero tuttavia risultara "capovolto"

## RISOLUZIONE

### PARTE 1
Andimo ad importare la libreria standard I/O
```c
#include <stdio.h>
```
Dopo aver fatto questo andiamo a dichiarare i prototipi delle funzione che ci serviranno
```c
#include <stdio.h>

int get_numb(void);
int lastgit(long numb);
```

* **int get_numb(void)** sara la funzione che useremo per prendere un numero in input la quale non necessita di parametri di entrata ma deve dare in uscita il valore da noi inserito quindi il codice sarà il seguente
```c
int get_numb(void)
{
    int var;
    scanf("%d", &var);
    return var;
}
```
* **int lastdigit(long numb)** sara la funzione che useremo per restituire l'ultimo numero prendendo in input il numero inserito poco prima
```c
int lastgit(long numb)
{
    numb = numb % 10;
    return numb;
}

```
* **int main(void) dove andremo eseguire le funzioni appena create
```c
int main(void)
{
    printf("Dammi un numero ");
    long numb = get_numb();
    while (numb)
    {
        printf("[%d]\n", lastgit(numb));
        numb = numb / 10;
    }
}
```
ricordiamo di dividere il numero diviso dieci cosi scartera la parte con la virgola essendo un intero e' ci permettera di proseguire.

## Mettendo il codice tutto insieme avremo
```c
#include <stdio.h>

int get_numb(void);
int lastgit(long numb);

int main(void)
{
    printf("Dammi un numero ");
    long numb = get_numb();
    while (numb)
    {
        printf("[%d] ", lastgit(numb));
        numb = numb / 10;
    }
}

int get_numb(void)
{
    int var;
    scanf("%d", &var);
    return var;
}

int lastgit(long numb)
{
    numb = numb % 10;
    return numb;
}
```
E' l'output che uscire fuori sarà nel caso come numb mettiamo 5642543243
```c
[3] [4] [2] [3] [4] [5] [2] [4] [6] [5]
```
Potremmo poi tramite l'utilizzo di array capovolgere il numero e ottenerlo nell'ordine giusto perchè al momento risulta capovolto
=======
# LAST DIGIT

![](https://img.shields.io/badge/snippet-c-green)

Tramite questo algoritmo è possibile andare a recuperare l'ultimo elemento di un numero, immetendo l'algoritmo all'interno di un ciclo possiamo "scorrere" ed andare a recuperare via via a recuperare tutte le cifre all'interno del numero.

## SOLUZIONE MATEMATICA
Per risolvere queste problema andremo ad usare il modulo (per l'esatezza modulo di 10) che ci fa ottenere il resto di un numero diviso 10 e questo sarà per l'appunto l'ultimo carattere

| ES = 352534|
| ------------- |


| NUMERO  | RISULTATO DIVISIONE |  RESTO |
| ------------- | ------------- |  ------------- |
| 352534  | 352534/10 = 35253,4  | 4 |
| 35253  | 35253/10 = 3525,3  | 3 |
| 3525  | 3525/10 = 352,5  | 5 |
| 352  | 352/10 = 35,2  | 2 |
| 35  | 35/10 = 3,5  | 5 |
| 3  | 3/10 = 0,3  | 3 |

### PERCHE' ACCADE TUTTO CIO

352534%10 = 352534/10 ==> 35253,4 ==> -35253*10+352534=**4** 

35253%10 = 35253/10 ==> 3525,3 ==> -3525*10+35253=**3**

[...]

Continuando cosi otteremo 4 3 5 2 5 3 questo perchè essendo un int scartera la parte con la virgola quindi continuando cosi.
Il numero tuttavia risultara "capovolto"

## RISOLUZIONE

### PARTE 1
Andimo ad importare la libreria standard I/O
```c
#include <stdio.h>
```
Dopo aver fatto questo andiamo a dichiarare i prototipi delle funzione che ci serviranno
```c
#include <stdio.h>

int get_numb(void);
int lastgit(long numb);
```
* **int get_numb(void)** sara la funzione che useremo per prendere un numero in input la quale non necessita di parametri di entrata ma deve dare in uscita il valore da noi inserito quindi il codice sarà il seguente
```c
int get_numb(void)
{
    int var;
    scanf("%d", &var);
    return var;
}
```
* **int lastdigit(long numb)** sara la funzione che useremo per restituire l'ultimo numero prendendo in input il numero inserito poco prima
```c
int lastgit(long numb)
{
    numb = numb % 10;
    return numb;
}

```
* **int main(void) dove andremo eseguire le funzioni appena create
```c
int main(void)
{
    printf("Dammi un numero ");
    long numb = get_numb();
    while (numb)
    {
        printf("[%d]\n", lastgit(numb));
        numb = numb / 10;
    }
}
```
ricordiamo di dividere il numero diviso dieci cosi scartera la parte con la virgola essendo un intero e' ci permettera di proseguire.

## Mettendo il codice tutto insieme avremo
```c
#include <stdio.h>

int get_numb(void);
int lastgit(long numb);

int main(void)
{
    printf("Dammi un numero ");
    long numb = get_numb();
    while (numb)
    {
        printf("[%d] ", lastgit(numb));
        numb = numb / 10;
    }
}

int get_numb(void)
{
    int var;
    scanf("%d", &var);
    return var;
}

int lastgit(long numb)
{
    numb = numb % 10;
    return numb;
}
```
E' l'output che uscire fuori sarà nel caso come numb mettiamo 5642543243
```c
[3] [4] [2] [3] [4] [5] [2] [4] [6] [5]
```
Potremmo poi tramite l'utilizzo di array capovolgere il numero e ottenerlo nell'ordine giusto perchè al momento risulta capovolto
>>>>>>> 2a3310befd5f3b88d6fc8df1e628ed23e6a5525f
