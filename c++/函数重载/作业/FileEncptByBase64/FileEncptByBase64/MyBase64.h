//statment functions of Base64 encode and decode
//
///////////////////////////////////////////////////////////////////////////////

#ifndef MYBASE64_H_3A28DEA3_6E34_4878_A428_5454E437CB7B
#define MYBASE64_H_3A28DEA3_6E34_4878_A428_5454E437CB7B

#include <string>
#define IN
#define OUT
#define INOUT

std::string EncodeBase64(IN char *pData,
    IN int nLength,
    INOUT std::string strEncodeData);

std::string DecodeBase64(IN char *pData,
    IN int nByteLength,
    INOUT std::string strEncodeData);

#endif