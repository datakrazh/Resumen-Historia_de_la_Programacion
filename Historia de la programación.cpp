//Resumen de la Historia de la Computación
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

int main(void){

    setlocale(LC_ALL, "");

    printf("\e[4m\e[1mHistoria de la Computación\e[0m\n\n-\e[4mPrimera Generación\e[0m- (1930s-1950s):\n\nVálvulas de vacío: Uso de válvulas de vacío como componentes principales.\nTamaño y escala enormes: Las computadoras ocupaban habitaciones completas y requerían refrigeración.\nProgramación manual: Programación a través de lenguaje de máquina o configuración física de cables y conmutadores.\n\n-\e[4mSegunda Generación\e[0m- (1950s-1960s):\n\nTransistores: Reemplazo de las válvulas de vacío por transistores, lo que llevó a un menor consumo de energía y menor tamaño.\nMemoria de núcleos magnéticos: Introducción de memorias más rápidas y confiables basadas en núcleos magnéticos.\nLenguajes de programación de alto nivel: Desarrollo de lenguajes como Fortran y COBOL para facilitar la programación.\n\n-\e[4mTercera Generación\e[0m- (1960s-1970s):\n\nCircuitos Integrados: Uso de circuitos integrados (chips) que contenían múltiples componentes en un sólo chip de silicio.\nMultiprogramación: Capacidad para ejecutar varios programas simultáneamente, mejorando la eficiencia del sistema.\nSistemas operativos más avanzados: Desarrollo de sistemas operativos que gestionaban mejor los recursos y permitían una mayor interacción usuario-computadora.\n\n-\e[4mCuarta Generación\e[0m- (1970s-1980s):\n\nMicroprocesadores: Introducción de microprocesadores, que incluían una CPU completa en un solo chip.\nComputadoras personales (PCs): Surgimiento de las primeras computadoras personales, como la IBM PC.\nInterfaces gráficas y mouse: Desarrollo de interfaces visuales y uso del mouse para la interacción.\n\n-\e[4mQuinta Generación\e[0m- (1980s-Presente):\n\nComputadoras paralelas y supercomputadoras: Uso de múltiples procesadores para tareas de alto rendimiento y cálculos complejos.\nInteligencia Artificial (IA): Mayor enfoque en sistemas de IA y procesamiento de lenguaje natural.\nRedes y conectividad global: Expansión de Internet y la comunicación global a través de la World Wide Web.");

    return EXIT_SUCCESS;
}
