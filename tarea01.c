#include <stdio.h>
#include <string.h>

#define MAX_PROCESOS 5
//PARTE A
typedef struct {
    int pid;
    char nombre[50];
    int prioridad;
} Proceso;

//parte C
Proceso* buscarMayorPrioridad(proceso *Procesos, int cantidad) {
   if (cantidad <= 0) return NULL;
   
   Proceso *mayor = procesos;
   
   for (int i = 1; i < cantida; i++){
       if ((procesos + i) ->prioridad < mayor ->prioridad) {
           mayor = procesos + i;
      }
   }
   return mayor;

}
int main() {
   Proceso lista[MAX_PROCESOS]
//parte B 
    printf("==REGISTRO DE PROCESOS (% MAX) ==\n", MAX_PROCESOS);
    for (int i = 0; i < MAX_PROCESOS; i++) {
    printf("\n--- Proceso %d ---\n", i + 1);

    printf("Ingrese PID: ");
    scanf("%d", &lista[i],pid);

    printf("Ingrese nombre: ");
    scanf("%s", lista[i].nombre;
    
    do {
        printf("Ingrese Prioridad (1=alta - 5=baja): ");
        scanf("%d", &lista[i].prioridad);
        if (lista[i].prioridad < 1 || lista[i].prioridad > 5) {
            printf("[!] Prioridad invalida. Debe ser entre 1 y 5.\n");
        }
    } while (lista[i].prioridad < 1|| lista[i].prioridad > 5");
 }
//llamaba a la funcion 
Proceso *ganador = buscarMayorPrioridad(lista, MAX_PROCESOS);

//parte D 
printf("\n=======================\n");
printf("  PROCESO SELECCIONADO (MAYOR PRIORIDAD) \n");
printf("=========================================\n");
    if (ganador != NULL) {
        printf("PID:       %d\n", ganador->pid);
        printf("Nombre:    %s\n", ganador->nombre);
        printf("Prioridad: %d\n", ganador->prioridad);
    }

    return 0;
}
