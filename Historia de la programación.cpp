//Resumen de la Historia de la Computaci�n
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

int main(void){

    setlocale(LC_ALL, "");

    printf("\e[4m\e[1mHistoria de la Computaci�n\e[0m\n\n-\e[4mPrimera Generaci�n\e[0m- (1930s-1950s):\n\nV�lvulas de vac�o: Uso de v�lvulas de vac�o como componentes principales.\nTama�o y escala enormes: Las computadoras ocupaban habitaciones completas y requer�an refrigeraci�n.\nProgramaci�n manual: Programaci�n a trav�s de lenguaje de m�quina o configuraci�n f�sica de cables y conmutadores.\n\n-\e[4mSegunda Generaci�n\e[0m- (1950s-1960s):\n\nTransistores: Reemplazo de las v�lvulas de vac�o por transistores, lo que llev� a un menor consumo de energ�a y menor tama�o.\nMemoria de n�cleos magn�ticos: Introducci�n de memorias m�s r�pidas y confiables basadas en n�cleos magn�ticos.\nLenguajes de programaci�n de alto nivel: Desarrollo de lenguajes como Fortran y COBOL para facilitar la programaci�n.\n\n-\e[4mTercera Generaci�n\e[0m- (1960s-1970s):\n\nCircuitos Integrados: Uso de circuitos integrados (chips) que conten�an m�ltiples componentes en un s�lo chip de silicio.\nMultiprogramaci�n: Capacidad para ejecutar varios programas simult�neamente, mejorando la eficiencia del sistema.\nSistemas operativos m�s avanzados: Desarrollo de sistemas operativos que gestionaban mejor los recursos y permit�an una mayor interacci�n usuario-computadora.\n\n-\e[4mCuarta Generaci�n\e[0m- (1970s-1980s):\n\nMicroprocesadores: Introducci�n de microprocesadores, que inclu�an una CPU completa en un solo chip.\nComputadoras personales (PCs): Surgimiento de las primeras computadoras personales, como la IBM PC.\nInterfaces gr�ficas y mouse: Desarrollo de interfaces visuales y uso del mouse para la interacci�n.\n\n-\e[4mQuinta Generaci�n\e[0m- (1980s-Presente):\n\nComputadoras paralelas y supercomputadoras: Uso de m�ltiples procesadores para tareas de alto rendimiento y c�lculos complejos.\nInteligencia Artificial (IA): Mayor enfoque en sistemas de IA y procesamiento de lenguaje natural.\nRedes y conectividad global: Expansi�n de Internet y la comunicaci�n global a trav�s de la World Wide Web.");

    return EXIT_SUCCESS;
}
