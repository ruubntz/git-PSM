#include "Header.h"

void ejercicio_b() {
    int array_in[] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "El array almacenado es el: ";
    for (int i = 0; i < 10; i++)
        cout << array_in[i] << " ";
    cout << endl;
    int posicion;
    cin >> posicion;
    int numero;
    cin >> numero;
    if (posicion < 10) {
        for (int i = 9; i > posicion; i--) {
            if (i != posicion) {
                array_in[i] = array_in[i - 1];
            }
        }
        array_in[posicion] = numero;
        cout << "El array resultante es: ";
        for (int i = 0; i < 10; i++) {
            cout << array_in[i] << " " << endl;
        }
    }else{
        cout << "Error";
    }
    
}

void ejercicio_punteros() {
    mitipo estructura, * pest;
    pest = &estructura;
    estructura.a = 5;
    estructura.c = 'p';
    cout << estructura.a << endl;
    cout << pest->c << endl;
    pest->a = 50;
    cout << estructura.a << endl;
}

void ejercicio_2c(){
    int* y;
    y = new int;
    *y = 3;
    cout << &y << endl; // la dirección de memoria de la propia y
    cout << y << endl; // la dirección de memoria de la nueva caja
    cout << *y << endl; // el valor al que apunta y
    delete y;

}

void ejercicio_2d() {
    int nElem = 10;
    int* yy = new int[nElem];
    cout << yy << endl;
    cout << *yy << endl;
    *yy = 1;
    *(yy + 1) = 2;
    *(yy + 2) = 3;
    for (int i = 0; i < 3; i++) {
        cout << *(yy + i) << endl;
    }
    delete[] yy;
}

void ejercicio_2e()
{
    alumno al,* p;
    strcpy_s(al.nombre,6,"Mateo");
    al.nota = 10;
    p = &al;
    cout << p->nombre << endl;
    cout << p->nota << endl;
    cin >> al.nombre;
    cin >> al.nota;
    cout << p->nombre;
    cout << p->nota;
    cout << p->nombre << endl;
    cout << p->nota << endl;
    delete p;
}

void ejercicio_2f()
{

}

int main() {
    ejercicio_2e(); 

}