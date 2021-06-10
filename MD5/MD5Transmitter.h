/***
 * Codigo basado en la implementacion de https://github.com/JackieTseng/md5
 */

#ifndef CSHA1IMP_MD5TRANSMITTER_H
#define CSHA1IMP_MD5TRANSMITTER_H
#include <iostream>
#include <cstring>
#include <cstdio>

#define blockSize 64

typedef unsigned int uInt; // 32-bit
typedef unsigned char uChar; // 8-bit(Byte)

class MD5Transmitter {
    public:
        std::string md5(const std::string);
        MD5Transmitter();
        MD5Transmitter(const std::string&);
        void update(const uChar*, uInt);
        void update(const char*, uInt);
        MD5Transmitter& finalize();
        std::string hexdigest();
        friend std::ostream& operator << (std::ostream&, MD5Transmitter);
    private:
        bool finish; // Flag to check transformation finished
        uInt count[2]; // 64-bit counter for number of bits(low, high)
        uInt state[4]; // Store A.B.C.D numbers while transforming
        uChar result[16]; // The result of MD5Transmitter
        uChar buffer[blockSize];// Bytes that didn't fit in last 64 byte chunk

        void init();
        void transform(const uChar*);
        void decode(uInt*, const uChar*, uInt);
        void encode(uChar*, const uInt*, uInt);
};


inline uInt F(uInt, uInt, uInt);
inline uInt G(uInt, uInt, uInt);
inline uInt H(uInt, uInt, uInt);
inline uInt I(uInt, uInt, uInt);
inline uInt rotate_left(uInt, int);
inline void FF(uInt&, uInt, uInt, uInt, uInt, uInt, uInt);
inline void GG(uInt&, uInt, uInt, uInt, uInt, uInt, uInt);
inline void HH(uInt&, uInt, uInt, uInt, uInt, uInt, uInt);
inline void II(uInt&, uInt, uInt, uInt, uInt, uInt, uInt);
#endif