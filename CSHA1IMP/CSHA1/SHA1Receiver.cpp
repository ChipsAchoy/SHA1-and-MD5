//
// Created by INTEL on 09/06/2021.
//

#include "SHA1Receiver.h"


bool SHA1Receiver::checkIntegrityFromMessage(string message, string hash) {

    cout << "Hash from incoming message is: \n" << hash << endl;
    string hashReceiver = this->getHashFromMessage(message);
    if (hashReceiver == hash){
        return true;
    }else{
        return false;
    }
}

string SHA1Receiver::getHashFromMessage(string message) {
    string str = message;

    CSHA1 sha1;
    string strReport;

    sha1.Update((UINT_8*)str.c_str(), str.size() * sizeof(TCHAR));
    sha1.Final();
    sha1.ReportHashStl(strReport, CSHA1::REPORT_HEX_SHORT);
    cout << _T("String hashed to:") << endl;
    cout << strReport << endl;
    return strReport;
}
