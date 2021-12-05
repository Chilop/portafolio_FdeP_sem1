// 2021_09_30_Practica5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Oscar Alejandro Rios Ramirez
//Representacion de 


#include <wchar.h>
#include <locale>
#include <iostream>
using namespace std;
int main()
{

    setlocale(LC_ALL, "spanish");
    string nombre = "chilo";
    string nombre_leer;
    string contrasena = "contrasena";
    string contrasena_leer;
    string registro = "zap520";
    string registro_leer;
    double calif = 0.1;
    double calif_leer;
    int edad = 19;
    int edad_leer;





    cout << "Ingresa tus datos personales para acceder al sistema, ingresa tu calificacion de progra\n" ;
    cin >> calif_leer;
    if (calif == calif_leer)
    {
        // Solicitar datos
        cout << "Ingresa tu nombre" << endl;
        cin >> nombre_leer;
        if (nombre == nombre_leer)
        {
            cout << "Bienvenido  " << nombre  << ", ingresa tu contrasena" << endl;
            cin >> contrasena_leer;
            if (contrasena == contrasena_leer)
            {
                cout << "ingresa tu edad\n";
                cin >> edad_leer;
                if (edad == edad_leer)
                {
                    cout << "¡¡¡¡sigue asi!!!,ingresa tu registro y habremos terminado\n";
                    cin >> registro_leer;
                    if (registro == registro_leer)
                    {
                        cout << "!!!!!!!Felicidades¡¡¡¡¡¡ ,completaste tu registro exitosamente n.n\n";

                    }
                    else
                    {
                        cout << "lo siento ese no es tu registro, reinicia todo desde el principio\n";
                    }
                }
                else
                {
                    cout << "creo que esa no es tu edad, nada de mentiras\n";
                }
            }
            else
            {
                cout << "la contrasena es incorrecta, sorry\n";
            }

        }
        else
        {
            cout << "Intentalo de nuevo. Nombre no reconocido" << endl;
        }
    }
    else
    {
        cout << "Esa calificacion no sacaste, no mientas" << endl;
    } 
}


