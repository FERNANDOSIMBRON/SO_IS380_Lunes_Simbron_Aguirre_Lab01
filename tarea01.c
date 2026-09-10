#include <stdio.h>
#include <string.h>

#define MAX_PROCESOS 5
//PARTE A
typedef struct {
    int pid;
    char nombre[50];
    int prioridad;
}
