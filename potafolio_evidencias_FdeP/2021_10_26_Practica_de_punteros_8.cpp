// 2021_10_26_Practica_de_punteros_9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Oscar Alejandro RIos Ramirez
//La practica consiste en el uso de los punteros y como funcionan dependiendo de su acomodo
#include <iostream>
#include <locale>
#include <conio.h>
using namespace std;

int matriz[3][2];

int main()
{
    setlocale(LC_ALL, "spanish");
    srand(time(NULL));
    //codigo de muestra de mau
    /*
    int edad_3p = 20;
    int* Apuntador_edad_3p = &edad_3p;
    */

    /*
    * //uso del apuntador en diferentes formas y el resultado de estas
    cout << "el apuntador sin asterisco imprime: " << Apuntador_edad_3p << " Direccion de memoria" << endl;
    cout << "el apuntador con asterisco imprime: " << *Apuntador_edad_3p << " El valor de la direccion apuntada" << endl;
    cout << "el apuntador con ampersand imprime: " << &Apuntador_edad_3p << " Direccion de memoria propia" << endl;
    cout << "Edad de JP:" << *Apuntador_edad_3p << endl;
    */

    int filas_matriz1 = (sizeof(matriz) / sizeof(matriz[0]));
    int columnas_matriz1 = (sizeof(matriz[0]) / sizeof(matriz[0][0]));

    int j = 0;
    int i = 0;
    // metodo de relleno
    cout << "Aqui se presenta la matriz 3*2 rellenado con numeros ramdom" << endl;
    cout << "Matriz generada" << endl;
    
    for (int i = 0; i < filas_matriz1; i = i + 1)
    {
        for (int j = 0; j < columnas_matriz1; j = j + 1)
        {
            int b;
            matriz[i][j] = 1 + rand() % (250 - 1);
            cout << "|" << matriz[i][j] << "|";

        }
        cout << endl;
    }
    



    // Aqui esta la matriz que el usuario elige cuantas filas y columnas va haber y rellena los datos el mismo usuario
    
    int matriz_de_usuario[20][20], filas_usuario, columnas_usuario;
    //se le dice al usuario max 20, ya que es agotador meter muchos datos
    cout << "para empezar con el programa de matrices colocara el numero filas y columnas que desea  (MAX 20 por cada una)" << endl;
    cout << "Ingrese el numero de filas " << endl;
    cin >> filas_usuario;
    cout << "Ingrese el numero de columnas " << endl;
    cin >> columnas_usuario;
    cout << "matriz generada" << endl;
    cout << "                    F   C " << endl;

    //colocacion de datos por parte del usuario
    for (int i = 0; i < filas_usuario; i++)
    {

        for (int j = 0; j < columnas_usuario; j++)
        {
            cout << "Coloque un numero  [" << i << "] [" << j << "] :" ;
            cin >> matriz_de_usuario[i][j]; 

        }

    }


    //impresion de datos
    for (int i =0; i<filas_usuario; i++)
    {
        for (int j = 0; j < columnas_usuario; j++)
        {
            cout << "{" << matriz_de_usuario[i][j] <<  "}";
        }
        cout << endl;
    }

    
    // BONUS,BONUS, STAGE BONUS
    //Aqui se presenta la matriz donde el usuario da una matriz n*m y se va a rellenar con datos aleaorios
    int matriz_bonus[20][20], filas_bonus, columnas_bonus;
    cout << "Para empezar con el programa de matrices colocara el numero filas y columnas que desea (MAX 20 por cada una)" << endl;
    cout << "Ingrese el numero de filas " << endl;
    cin >> filas_bonus;
    cout << "Ingrese el numero de columnas " << endl;
    cin >> columnas_bonus;
    cout << "El programa rellenara automaticamente los datos con numeros al azar entre numeros del 1 al 150" << endl;
    cout << "matriz generada" << endl;

    //colocacion de datos aleatorios en la matriz
    for (int i = 0; i < filas_bonus; i++)
    {

        for (int j = 0; j < columnas_bonus; j++)
        {
          matriz_bonus[i][j] = 1 + rand() % (150 - 1);

        }

    }


    //impresion de datos
    for (int i = 0; i < filas_bonus; i++)
    {
        for (int j = 0; j < columnas_bonus; j++)
        {
            cout << "{" << matriz_bonus[i][j] << "}";
        }
        cout << endl;
    }

    cout << "Se presentaron diferentes formas de hacer una matriz n.n" << endl;
}

