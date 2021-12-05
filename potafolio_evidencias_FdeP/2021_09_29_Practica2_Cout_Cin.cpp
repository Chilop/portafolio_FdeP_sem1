// 2021_09_29_Practica2_Cout_Cin.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Oscar ALejandro
//En esta practica se realizaran entradas y salidas dde datos usando (Cout y Cin) junto con (Printf y Scanf)

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{//variables
    int un_int;
    float un_float;
    char un_char;
    double un_double;
    string un_string;
    //peticion y recogida de datos
    cout << "introduce un numero entero\n";
    cin >> un_int;
    printf("introduce un valor (max 2 decimales)\n");
    scanf_s("%f", &un_float);
    cout << "introduce una letra\n";
    cin >> un_char;
    cout << "introduce un valor (max 4 decimales)\n";
    cin >> un_double;
    cout << "introduce una palabra o lo que quieras escribir\n";
    cin >> un_string;

    printf("recuento de los datos insertados\n");
    cout << "Int:" << un_int << endl;
    cout << "Float:" << un_float << endl;
    cout << "Char:" << un_char << endl;
    cout << "Double:" << un_double << endl;
    cout << "String:" << un_string << endl;

    


}


