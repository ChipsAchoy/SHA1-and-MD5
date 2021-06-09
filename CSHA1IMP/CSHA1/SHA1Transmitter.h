//
// Created by INTEL on 09/06/2021.
//

#ifndef CSHA1IMP_SHA1TRANSMITTER_H
#define CSHA1IMP_SHA1TRANSMITTER_H

#include "SHA1.h"
#include <string>
#include <iostream>

using namespace std;

/**
 * Clase emisora de mensajes con su respectivo hash obtenido por medio de SHA 1
 */

class SHA1Transmitter {
public:
    /**
     * Obtiene un hash para un mensaje que sera enviado
     * @param message mensaje a enviar
     * @return llave o hash del mensaje
     */
    string getHashToSend(string message);
};


#endif //CSHA1IMP_SHA1TRANSMITTER_H
