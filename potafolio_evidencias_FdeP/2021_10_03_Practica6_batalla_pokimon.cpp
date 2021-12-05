// 2021_10_03_Practica6_batalla_pokimon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Oscar Alejandro Rios Ramirez 
//Practica de simulacion de batalla pokimon

#include <iostream>
using namespace std;

int main()
{
    bool inicio = false;
    string pokemon_1 = "Bulbasaur";
    string pokemon_2 = "Charmander";
    string pokemon_3 = "Squirtle";
    int opt = 0;
    int a, eleccion_pokemon, lucha_1,lucha_2,lucha_3;
  

    while (inicio == false)
    {

     cout << "----------- Bienvenido al simulador de batallas pokimon -------------------\n Selecciona a tu pokemon inicial" << endl;
     cout << " 1- Bulbasaur\n 2- Charizard\n 3- Squirtle" << endl;
     cin >> eleccion_pokemon;
        switch (eleccion_pokemon)
        {
        case 1:
         cout << " Felicidades uwu\n Elegiste a " << pokemon_1 << endl;
         cout << "--- Inicias tu aventura ---\n *caminas por un sendero*, casualmente te encuentras en la colonia Jalisco\n De repente escuhas algo\n" << endl;
         cout << " --------------- Hay algo en los arbustos ------------------- \n " << endl;
         cout << " que haces? \n 1- Lo ignoras\n 2- revisas los arbustos" << endl;
         cin >> a;
         cout << " ------------ Te salta un wey de la Jalisco -------------\n ------------ Te desafia a una batalla pokemon -------------" << endl;

         cout << " * Eliges a " << pokemon_1 << " para luchar *" << endl;
         cout << " * El malandro elige a charmander * " << endl;
         cout << " DEBES SOBREVIVIR 6 RONDAS PARA GANAR \n" << endl;
         for (int i = 0; i <= 5; i = i + 1)
         {
             if (i == 0)
             {
             cout << " ---------La batalla empieza---------- " << endl;
             }
             cout << "elige tu accion \n1.- placaje\n2.- proteccion\n" << endl;
             cin >> lucha_2;
             switch (lucha_2)
             {
             case 1:
                 cout << " * usaste placaje * " << endl;
                 cout << " el enemigo perdio 3 HP \n" << endl;
                 cout << " * El malandro uso aranazo * \n pierdes 2 de HP\n" << endl;
                 break;
             case 2:
                 cout << " * usaste proteccion * " << endl;
                 cout << " Bloqueas y pierdes 1 HP \n" << endl;
                 break;
             default:
                 cout << " selecciona una accion " << endl;
             }
             cout << " ------- La batalla continua ---------" << endl;
             if (i == 5)
             {
                 cout << " ------- La batalla termina -------\n tu oponente ya no puede continuar\n Ganaste (Aplausitos) !!!!!!!" << endl;
             }
         }
         
         inicio = true;
         break;
        case 2:
         cout << " felicidades uwu\n Elegiste a " << pokemon_2 << endl;
         cout << "--- Inicias tu aventura ---\n *caminas por un sendero*, casualmente te encuentras en la colonia Jalisco\n De repente escuhas algo\n" << endl;
         cout << " --------------- Hay algo en los arbustos ------------------- \n " << endl;
         cout << " que haces? \n 1- Lo ignoras\n 2- revisas los arbustos" << endl;
         cin >> a;
         cout << " ------------ Te salta un wey de la Jalisco -------------\n ------------ Te desafia a una batalla pokemon -------------" << endl;


         cout << " * Eliges a " << pokemon_2 << " para luchar *" << endl;
         cout << " * El malandro elige a Squirtle" << endl;
         cout << " DEBES SOBREVIVIR 6 RONDAS PARA GANAR \n" << endl;
         for (int i = 0; i <= 5; i = i + 1)
         {
             if (i == 0)
             {
             cout << " ---------La batalla empieza---------- " << endl;
             }
             cout << " elige tu accion\n1.- aranazo\n2.- proteccion " << endl;
             cin >> lucha_2;
             switch (lucha_2)
             {
             case 1:
                 cout << " * usaste aranazo * " << endl;
                 cout << " el enemigo perdio 3 HP \n" << endl;
                 cout << " *El malandro uso placaje * " << endl;
                 cout << " pierdes 2 de HP \n" << endl;
                 break;
             case 2:
                 cout << " * usaste proteccion * " << endl;
                 cout << " *El malandro uso endurecer * " << endl;
                 cout << " Bloqueas pierdes 1 HP \n" << endl;

                 break;
             default:
                 cout << " selecciona una accion " << endl;
             }
             cout << " ------- La batalla continua ---------" << endl;
             if (i == 5)
             {
                 cout << " ------- La batalla termina -------\n tu oponente ya no puede continuar\n Ganaste (Aplausitos) !!!!!!!" << endl;
             }

         }
         inicio = true;
         break;
         case 3:
         cout << " felicidades uwu\n Elegiste a " << pokemon_3 << endl;
         cout << "--- Inicias tu aventura ---\n *caminas por un sendero*, casualmente te encuentras en la colonia Jalisco\n De repente escuhas algo\n" << endl;
         cout << " --------------- Hay algo en los arbustos ------------------- \n " << endl;
         cout << " que haces? \n 1- Lo ignoras\n 2- revisas los arbustos" << endl;
         cin >> a;
         cout << " ------------ Te salta un wey de la Jalisco -------------\n ------------ Te desafia a una batalla pokemon -------------" << endl;
         
         cout << " * Eliges a " << pokemon_3 << " para luchar *" << endl;
         cout << " * El malandro elige a Metapod" << endl;
         cout << " DEBES SOBREVIVIR 6 RONDAS PARA GANAR \n" << endl;
         for (int i = 0; i <= 5; i = i + 1)
         {
             if (i == 0)
             {
             cout << " ---------La batalla empieza---------- " << endl;
             }
             cout << "elige tu accion \n1.- placaje\n2.- proteccion " << endl;
             cin >> lucha_3;
             switch (lucha_3)
             {
             case 1:
                 cout << " * usaste placaje * " << endl;
                 cout << " el enemigo perdio 3 HP \n" << endl;
                 cout << " *El malandro uso endurecer * " << endl;
                 break;
             case 2:
                 cout << " * usaste proteccion * " << endl;
                 cout << " *El malandro uso endurecer * " << endl;
                 cout << " Bloqueas no pierdes HP \n" << endl;
                 break;
             default:
                 cout << "selecciona una accion" << endl;
             }
             cout << " ------- La batalla continua ---------" << endl;
             if (i == 5)
             {
                 cout << " ------- La batalla termina -------\n tu oponente ya no puede continuar\n Ganaste (Aplausitos) !!!!!!!" << endl;
             }
         }
         
         inicio = true;
         break;
         default:
         cout << " Elige una de las 3 opciones disponibles, es necesario escoger un pokemon para inicar tu aventura" << endl;
         cout << " Se cuidados@ la proxima vez \n" << endl;
         cout << "Responde 0 para elegir a tu pokemon\n" << endl;
         cin >> inicio;

        }
    } 
}

