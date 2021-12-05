// Proyecto_1_historia_en_consola.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Oscar Alejandro Rios Ramirez
//proyecto 1. Historia narrada en una consola

#include <iostream>
#include <string.h>
using namespace std;

//creacion de funciones
//creacion del titulo
void titulo(string title)
{
    int i;
    int dimension;

    dimension = title.length();
    dimension = dimension + 20;


    for (i = 0; i <= dimension; i++)
    {
        cout << "";
    }

    cout << "\n  \n";

    for (i = 0; i <= dimension; i++)
    {
        cout << " ";
        if (i == 5)
        {
            cout << title;
        }
        cout << " ";
    }
    cout << "\n";


    for (i = 0; i <= dimension; i++)
    {
        cout << "";
    }

    cout << "\n \n \n";

}



int main()
{
    titulo("Bienvenidos a la hisotiria de las decisiones dudosas");
    cout << "\n \n";
    int b_inicio = 0;
    bool salir = false;
    char aux = 0;
    bool op1, op2, op3, op4, op5;

    while (salir == false)
    {
        cout << "  Seleccione una opcion, Inserte un 1 para iniciar o un 2 para salir\n 1. Iniciar \n 2. Salir \nOpcion: ";
        cin >> b_inicio;
        switch (b_inicio)
        {
        case 1:
            titulo("Iniciando");

            cout << "Estas Dormido en tu casa, de repente suena tu alarma y la apagas. \n Que deberias hacer 1- Levantarte  0- Dormir otro rato\n";
            cin >> op1;
            if (op1 == true)
            {
                cout << "Te levantas de la cama como puedes, se te complica un poco mantenerte de pie, pero tienes la energia para levantarte del todo\n";
                cout << "Te estiras y miras el caliendario del celular, es Martes, y tienes clase de Psicologia a primera hora\nasi que te preparas para ir a la gloriosa universidad Amerike\nalistas tu mochila y decides llevarte tu peluche de la suerte preferido\n";
                cout << "1- Unicornio rosa con cola de Arcoiris  0- Chibi y empoderante peluche de ALLMIGHTO\n";
                cin >> op2;
                if (op2 == true) {
                    cout << "El Unicornio suena como patito de goma al recogerlo, lo guardas y te pones en marcha hacia la Universidad!\nEn el camino vas estudiando tus apuntes de Psicologia y revisando tu progreso en tu Twitter Profesional\nTalvez sea hora de hacer una publicacion... Decides publicar:\n";
                    cout << "1- Un mensaje con gran relevancia para la materia  0- juan\n";
                    cin >> op3;
                    if (op3 == true) {
                        cout << "... Tu Tweet paso desapercibido por todos, Pero hey! Almenos estas un paso mas cerca de lograr la meta academica (:\nLlegas a la universidad y el Profesor imparte su magistral clase, +10 Inteligencia\nLas horas pasan y te preparas para la siguiente clase de Matematicas, Pero has olvidado tu libreta en casa!\n";
                        cout << "1- Hacerse bolita  0- Usa otra libreta wn\n";
                        cin >> op4;
                        if (op4 == true) {
                            cout << "Concentras toda tu energia vital en hacer absolutamente nada,\nTe encorvas lentamente mientras tus companieros te observan en silencio, te vuelves uno con la circunferencia\nEl profesor se incomoda al verte, se consterna tanto que tira su cafe sobre un equipo\nProvoas un corto circuito en toda la universidad indirectamente\nLas clases han terminado abruptamente gracias a ti, ahora te diriges a casita\n";
                            cout << "Pero en la salida observas que un par de oficiales estan ejerciendo su autoridad de una forma muy legal y civilizada en contra de un duenio de puestito del tianguis\nParece que estan culpando a su infame diablito por un apagon que ocurrio en toda la colonia, pero tu sabes la verdad... asi que:\n";
                            cout << "1- Confesar tus crimenes, aceptar tu destino y someterte al peso de la ley UnU  0- Dios le da sus mejores batallas a sus mejores guerreros (escapar vilmente)\n";
                            cin >> op5;
                            if (op5 == true) {
                                cout << "Los policias admiran enormemente tu honestidad, y te lo hacen saber mientras preparan gentilmente su macana justiciera :c\nLos nervios te traicionan y dejas caer tu mochila, De ella emerge tu peluche de Unicornio!\n...Pero no pasa nada, los oficiales ignoran el peluche y proceden a diciplinarte civilizadamente unu\n";
                                cout << "Bad Ending. :(\n";
                            }
                            else {
                                cout << "Los policias imparten justicia sobre el pobre senior, mientras te escabulles sigilosamente\nEl acto diciplniario se torna un poco... activo, y una macana policial sale volando\nEscuchas un BONK y caes dormidito al suelo, por suerte, tu peluchito de Unicornio suaviza la caida (:\n";
                                cout << "Not so Bad Ending...? De todas formas deberias sentirte mal >:(\n";
                            }
                        }
                        else {
                            cout << "No es para tanto! Decides usar otra libreta y seguir con tu dia de forma normal\nLas horas pasan y eventualmente terminan las clases\nEs hora de regresar a casita\n";
                            cout << "Camino a casa te pones a pensar que hoy ha sido un dia completamente tranquilo... algo no anda bien\nDe repente, un portal dimensional se abre frente a ti, de el emerge una versión futurista de ti mismo\n";
                            cout << "Tu yo del futuro te dispara un dardo para ponerte a dormir!\n";
                            cout << "1- Intentar esquivarlo  0- Yeah, descansito\n";
                            cin >> op5;
                            if (op5 == true) {
                                cout << "Esquivas realizando un Backflip! Pero tu yo del futuro es mas fuerte :(\nMientras estas suspendido en el aire, tu yo del futuro intenta acercarse a ti\n";
                                cout << "Pero sorpresivamente, tu unicornio sale volando accidentalmente a la mitad de tu pirueta y su cuerno se clava en el ojo de tu yo del futuro!\n";
                                cout << "Generas una fractura espacio-temporal, la realidad comienza a colapsar mientras escuchas como unicornio Unicornio suena como patito de goma, cierras los ojos y al abrirlos, estas de vuelta en tu cama 0:\n";
                                cout << "Good Ending...?\n";
                            }
                            else {
                                cout << "Aceptas el regalo de la vida, y decides dormir uwu\nEl dardo te pone a dormir y al despertar, es Martes... Y tienes Psicologia a primera hora 0:\n";
                                cout << "Doubtly Good Ending (:\n";
                            }
                        }
                    }
                    else {
                        cout << "Tu Tweet se volvio TENDENCIA, Barack Obama, Nick Cage y Will Smith lo retweetearon! 0:\nLlegas a la universidad y el Profesor imparte su magistral clase, +10 Inteligencia\nLas horas pasan y te preparas para la siguiente clase de Matematicas, ¡Pero has olvidado tu libreta en casa!\n";
                        cout << "1- Hacerse bolita  0- Usa otra libreta wn\n";
                        cin >> op4;
                        if (op4 == true) {
                            cout << "Concentras toda tu energia vital en hacer absolutamente nada,\nTe encorvas lentamente mientras tus companieros te observan en silencio, te vuelves uno con la circunferencia\nEl profesor se incomoda al verte, se consterna tanto que tira su cafe...\n";
                            cout << "Pero Nick Cage, Barack Obama y Will Smith entran al salon abruptamente, atravezando las ventanas que estaba cerradas\nY a velocidades vertiginosas, los 3 evitan que el cafe del profesor se derrame en un equipo de computo\n";
                            cout << "Te dicen que eres su idolo y que han venido a tu rescate! Wow!\n";
                            cout << "De repente despiertas! todo fue un suenio y ya llegaste tarde a la primera clase :(\nNeutral Ending";
                        }
                        else {
                            cout << "No es para tanto! Decides usar otra libreta y seguir con tu dia de forma normal\nLas horas pasan y eventualmente terminan las clases\nEs hora de regresar a casita\n";
                            cout << "De regreso a casa, Donald Trump pasa por ti en su helicoptero privado, esta muy contento por tu tweet, y te pregunta si quieres un aventon o un consejo millonario...\n";
                            cout << "Claramente le pides el aventon y te lleva a tu casita (:\nSmart Ending 0;\n";
                        }
                    }
                }
                else {
                    cout << "Puedes sentir como el poder recorre tu cuerpo al recoger al pequenio ALLMIGHTO, lo guardas y te pones en marcha hacia la Universidad!\nEn el camino vas estudiando tus apuntes de Psicologia y revisando tu progreso en tu Twitter Profesional\nTalvez sea hora de hacer una publicacion... Decides publicar:\n";
                    cout << "1- Un mensaje con gran relevancia para la materia  0- juan\n";
                    cin >> op3;
                    if (op3 == true) {
                        cout << "... Tu Tweet paso desapercibido por todos, Pero hey! Almenos estas un paso mas cerca de lograr la meta academica (:\nLlegas a la universidad y el Profesor imparte su magistral clase, +10 Inteligencia\nLas horas pasan y te preparas para la siguiente clase de Matematicas, Pero has olvidado tu libreta en casa!\n";
                        cout << "1- Hacerse bolita  0- Usa otra libreta wn\n";
                        cin >> op4;
                        if (op4 == true) {
                            cout << "Concentras toda tu energia vital en hacer absolutamente nada,\nTe encorvas lentamente mientras tus companieros te observan en silencio, te vuelves uno con la circunferencia\nMientras te haces bolita, alcanzas a Observar a ALLMIGHTO a travez de una abertura en tu mochila\n";
                            cout << "Obtienes Inspiracion +50! Sacas de tu mochila otra libreta y te pones a trabajar! A ALLMIGHTO no le gustaria verte asi...\n";
                            cout << "Logras terminar tus apuntes, tus estudios, tienes una buena vida, y en tu casamiento, ALLMIGHTO es el padrino de bodas (:\n";
                            cout << "Canon Ending\n";
                        }
                        else {
                            cout << "No es para tanto! Decides usar otra libreta y seguir con tu dia de forma normal\nLas horas pasan y eventualmente terminan las clases\nEs hora de regresar a casita\n";
                            cout << "ALLMIGHTO esta orgulloso de ti (:, pero no hubo tiempo ni presupuesto para desarrollar tu personaje y se acabo tu tiempo en escena :c\nMeh Ending :/\n";
                        }
                    }
                    else {
                        cout << "Tu Tweet se volvio TENDENCIA, Barack Obama, Nick Cage y Will Smith lo retweetearon! 0:\nLlegas a la universidad y el Profesor imparte su magistral clase, +10 Inteligencia\nLas horas pasan y te preparas para la siguiente clase de Matematicas, ¡Pero has olvidado tu libreta en casa!\n";
                        cout << "1- Hacerse bolita  0- Usa otra libreta wn\n";
                        cin >> op4;
                        if (op4 == true) {
                            cout << "Concentras toda tu energia vital en hacer absolutamente nada,\nTe encorvas lentamente mientras tus companieros te observan en silencio, te vuelves uno con la circunferencia\nMientras te haces bolita, alcanzas a Observar a ALLMIGHTO a travez de una abertura en tu mochila\nEscuchas los susurros de Morgan Freeman diciendote que no debes rendirte!\n";
                            cout << "Obtienes Inspiracion +100! Sacas de tu mochila otra libreta y te pones a trabajar! Ni a ALLMIGHTO ni a Morgan Freenaman les gustaria verte asi...\n";
                            cout << "Logras terminar tus apuntes, al salir de la escuela, Morgan Freeman esta esperando por ti, tu silueta y la de Morgan Freeman se pierden en el atardecer...\n";
                            cout << "Romantic Ending uwu\n";
                        }
                        else {
                            cout << "No es para tanto! Decides usar otra libreta y seguir con tu dia de forma normal\nLas horas pasan y eventualmente terminan las clases\nDe repente encuentras una nota con corazoncitos en tu mochila! 0:\n";
                            cout << "La nota te cita en el patio de la escuela despues de clases, firma: John Cena\nTe encuentras con John Cena y te comenta que el futuro esta en peligro, tu eres la unica esperanza ahora\n";
                            cout << "John Cena te entrena para volverte invisibke y adquirir un set de habilidades, te conviertes en un viajero de lineas temporales y emprendes tu nueva vida valientemente\n";
                            cout << "Hidden Ending";
                        }
                    }
                }
            }
            else
            {
                cout << "Decides quedarte mimido, de todas formas, puede que nada interesante pase hoy unu\n";
            }
        case 2:
            break;
        default:
            cout << "arr yu kidin me, elige una de las opciones." << endl;
        }
        cout << "Deseas quedarte a continuar jugado o prefieres salir?" << endl;
        cout << "Responde 1 para salir o 0 para continuar con la historia" << endl;
        cout << "Opcion: ";
        cin >> salir;

    }

    return 0;
}