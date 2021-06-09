#include <iostream>
#include <string>

#include "CSHA1/SHA1.h"
#include "CSHA1/SHA1Transmitter.h"
#include "CSHA1/SHA1Receiver.h"

using namespace std;


int main(int argc, TCHAR* argv[])
{
    // Ejemplo de SHA1
    // Ejemplo de validación de la integridad de los datos

    string message = "x8804064";
    SHA1Transmitter transmitter;
    SHA1Receiver receiver;


    string hashFromInput = transmitter.getHashToSend(message);

    //Para ver el ejemplo donde el dato es alterado se descomenta la siguiente linea
    //hashFromInput = "9F052493C87A72E91162A2815270919B9DE3A6D6";


    if (receiver.checkIntegrityFromMessage(message, hashFromInput)){
        cout << "Se logra obtener el mensaje de forma integra" << endl ;
    }else{
        cout << "El mensaje pierde su integridad en la comunicacion" << endl ;
    }


	return 0;
}

