// Ejercicios1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Headers.h"

int main()
{
    // Ejercicio 1
    int list[40];
    for (int i = 0; i < 20; i++) {
        list[2 * i] = i;
        if(i % 3 == 0)
        {
            list[2 * i + 1] = 1;
        }
        else {
            list[2 * i + 1] = 0;
        }
    }
    cout << list << " " << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
