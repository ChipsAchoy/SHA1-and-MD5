//
// Created by INTEL on 09/06/2021.
//

#ifndef CSHA1IMP_SHA1RECEIVER_H
#define CSHA1IMP_SHA1RECEIVER_H

#include "SHA1.h"
#include <iostream>
#include <string>

using namespace std;
/**
 *
 */
class SHA1Receiver {
public:
    /**
     * Revisa si el mensaje llega integro validando su hash con el mismo algoritmo
     * @param message mensaje a revisar
     * @param hash llave del mensaje
     * @return valor de verdad que indica si se revisa el mensaje
     */
    bool checkIntegrityFromMessage(string message, string hash);
private:
    /**
     * Obtiene el hash para un mensaje
     * @param message mensaje recibido
     * @return llave o hash del mensaje
     */
    string getHashFromMessage(string message);
};


#endif //CSHA1IMP_SHA1RECEIVER_H
