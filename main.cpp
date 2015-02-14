#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;


//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
    (*mi_mapa) [llave]= valor;    // se desrreferenia mi mapa y asigna elvalor dado por xyz funcion.
}

//Devuelve el valor asociado a lallave (dada) en mi_mapa (dado)

char obtenerValor(map<int,char> mi_mapa,int llave)
{
    return mi_mapa[llave];     // devuelve como resultado el valor almacenado a la llave en el mapa creado
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"
//Explicacion: Este ejercicio se resolvio unicamente agregando los datos de la tabla al mapa
map<string,int> obtenerSemana()
{
    map<string,int> semana;
    semana["lunes"]=1;       //se obtubo la cadena y se le asigno el valor 1, asi sucesivamente, al final de la asignacion se devuelve el resultado
    semana["martes"]=2;      //hasta retonar mi_mapa
    semana["miercoles"]=3;
    semana["jueves"]=4;
    semana["viernes"]=5;
    semana["sabado"]=6;
    semana["domingo"]=7;
    return semana;
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
//Explicacion: Utilize un ciclo while anidado a otro ciclo while, para recorer ambos set al mismo tiempo
//y de esa manera comparar cada valor del set1 con cada valor del set2, si los numeros son iguales, se inserta en el set3
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    set<int> ::iterator i=mi_set1.begin();  //se empieza la iteracion de mi set1c
    while(i!=mi_set1.end())                 // mentras  mi set_set1 es distinto al final se sigue recorriendo
    {
        set<int> ::iterator j=mi_set2.begin();    //empieza la segunda iteracion
        while(j!=mi_set2.end())                  // mientas el indice sea disitno al final se sigue recorriendo
        {
            if(*i==*j)                     //se compara el valor almcenado en i y j de ser asi

            {
              mi_set3.insert(*i);          // inserta un set neuvo
            }
            j++;                           //auementa para la iteracion
        }                                 //termina el ultimo ciclo comenzado
        i++;
    }                               //      termina el primer ciclo;
    return mi_set3;    //         luego que realiza la comparacion y este halla terminado el ciclo anidado se retorna lo almacenado en mi set
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;         //creacion de mi st3
    set<int> ::iterator i=mi_set1.begin();   //arranca la iteracion
    while(i!=mi_set1.end())      //comienza el ciclo
    {
        mi_set3.insert(*i);          //inserta un nuevo valor setcon un indice i
        i++;                          //el indice se va aumentando
    }
    set<int> ::iterator j=mi_set2.begin(); //  los mismo descrito arriba
    while(j!=mi_set2.end())                 //

    {
        mi_set3.insert(*j);
        j++;
    }
    return mi_set3;    // retorna los valores de mi_se1 y 2c
}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
//Explicacion: Se creo un doble ciclo anidado cada uno con un iterator diferente para recorrer ambos set
// se compara cada elemento del sub_set con cada elemento del set, si son iguales entonses se le suma +1
// a la variable conteo, si el valor de conteo es = al tamano del set significa que los valores sel sub_set
// si estan dentro del set primario.
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    set<int> ::iterator i=mi_sub_set.begin();       //   se creo un nueva iteracion
    int conteo=0; // Variable contador
    while(i!=mi_sub_set.end())           //mientras esto no estee en el final
    {
        set<int>::iterator j=mi_set.begin();     //ciclo aninado igual al ejercico tentior
        while(j!=mi_set.end())
        {
            if(*i==*j)          //            realiza la comparacion de la primer ite
            {
              conteo++;      //aumenta la variable centinela,
            }
            j++;
        }
        if(conteo==mi_sub_set.size()) // si conteo llega a ser al tamano del subset retorna vdd de lo controario retorna false
        {
            return true;
        }
        i++;
    }
    return false;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}
