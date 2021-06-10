#include <iostream>
#include <string>

#include "CSHA1/SHA1.h"
#include "CSHA1/SHA1Transmitter.h"
#include "CSHA1/SHA1Receiver.h"
#include "MD5/MD5Transmitter.h"
#include "MD5/MD5Receiver.h"
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

    cout<<"####    ####    ####    ####"<<endl;


    cout<<"MD5:"<<endl;
    //Ejemplo de MD5

    MD5Transmitter md5T;
    MD5Receiver md5R;

    string ms = "123456789";
    string hashMS = md5T.md5(ms);
    cout<<hashMS<<endl;

    if (md5R.checkIntegrityFromMessage(ms,hashMS)){
        cout<<"El mensaje se obtuvo de manera integra"<<endl;
    }
    else{
        cout<<"El mensaje ha pedido su integridad"<<endl;
    }


	return 0;
}

