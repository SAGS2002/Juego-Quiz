#include <iostream>
#include <string>
#include <vector>
#include <algorithm> //Include necesario para usar shuffle
#include <ctime> 

using namespace std;

//Creacion de clase para estructurar preguntas
class Pregunta {
    public:
        string enunciado;
        vector<string> opciones;
        int respuesta;                                
};

vector<Pregunta> cargarPreguntas(){
    vector<Pregunta> listaDePreguntas;

    //Pregunta 1
    Pregunta p1;
    p1.enunciado="Como se llama sancho panza";
    p1.opciones={"sancho pansa", "Zancho Pansa", "Panza sancho", "eneidel panza"};
    p1.respuesta=4;
    listaDePreguntas.push_back(p1);

    //Pregunta 2
    Pregunta p2;
    p2.enunciado="Como se llama frozono";
    p2.opciones={"alexander", "luiber", "pablo", "manuela"};
    p2.respuesta=2;
    listaDePreguntas.push_back(p2);


    return listaDePreguntas;
}

void iniciarJogo(){
    vector<Pregunta> preguntas = cargarPreguntas();
    int ingreseResp;
    int punt=0;

    srand(time(0));

    random_shuffle(preguntas.begin(), preguntas.end());

    for (int i = 0; i < preguntas.size(); i++)
    {
        //mostrar enunciado de la pregunta
        cout<<preguntas[i].enunciado<<endl;
        
        
       for (int j = 0; j < preguntas[i].opciones.size(); j++)
       {
            cout<<j+1<<" "<<preguntas[i].opciones[j]<<endl;
       }
       cout<<"Escoja su respuesta"<<endl;
       cin>>ingreseResp;

       if (ingreseResp==preguntas[i].respuesta)
       {
        cout<<"RESPUESTA CORRECTAAAA"<<endl;
        punt=punt+1000;
       }else{
        cout<<"RESPUESTA INCORRECTAAAA ESTUPIDOOOO"<<endl;
        break;
       }
       
       cout<<"========================================"<<endl;

    }
    
    cout<<"fin del juego puntaje total $"<<punt<<endl;

}

int main() { ///

    iniciarJogo();




    return 0;
}