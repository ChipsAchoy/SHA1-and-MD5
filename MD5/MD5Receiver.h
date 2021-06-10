//
// Created by jpabl on 09-jun.-21.
//

#ifndef CSHA1IMP_MD5RECEIVER_H
#define CSHA1IMP_MD5RECEIVER_H
#include "string"
#include "MD5Transmitter.h"
using namespace std;

class MD5Receiver {

public:
    bool checkIntegrityFromMessage(string inData, string hash);

private:
    MD5Transmitter md5Transmitter;
};


#endif //CSHA1IMP_MD5RECEIVER_H
