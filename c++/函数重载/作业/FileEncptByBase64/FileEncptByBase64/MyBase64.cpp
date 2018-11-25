//realize encode and decode to string
//
///////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <iostream>
#include "MyBase64.h"

//将字符串内容编码
//pData:编码的字符串
//nByteLength：编码字符串的长度，单位byte
//strEncodeData：保存编码后的内容
//返回值：编码后的内容
//
std::string EncodeBase64(IN char *pData,
    IN int nByteLength,
    INOUT std::string strEncodeData)
{
    //编码表
    char chEncodeTable[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx"
        "yz0123456789+/";
    char TmpData[3] = { 0 };
    int nLoopCount = nByteLength / 3;
    //赋值下标
    int TmpIndex_1 = 0;
    int TmpIndex_2 = 0;
    int TmpIndex_3 = 0;
    int TmpIndex_4 = 0;

    //编码可以对齐的部分
    for (int nCount = 0; nCount < nLoopCount; nCount++)
    {
        TmpData[0] = *(pData++);
        TmpData[1] = *(pData++);
        TmpData[2] = *(pData++);

        TmpIndex_1 = TmpData[0] >> 2;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_1];
        TmpIndex_2 = ((TmpData[0] << 4) | (TmpData[1] >> 4)) & 0x3F;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_2];
        TmpIndex_3 = ((TmpData[1] << 2) | (TmpData[2] >> 6)) & 0x3F;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_3];
        TmpIndex_4 = TmpData[2] & 0x3F;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_4];
    }

    //编码对不齐的后几位
    int nDev = nByteLength % 3;

    if (nDev == 1)
    {
        TmpData[0] = *pData;

        TmpIndex_1 = TmpData[0] >> 2;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_1];
        TmpIndex_2 = (TmpData[0] << 4) & 0x30;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_2];
        strEncodeData = strEncodeData + "==";
    }
    else if (nDev == 2)
    {
        TmpData[0] = *(pData++);
        TmpData[1] = *pData;

        TmpIndex_1 = TmpData[0] >> 2;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_1];
        TmpIndex_2 = ((TmpData[0] << 4) | (TmpData[1] >> 4)) & 0x3F;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_2];
        TmpIndex_3 = (TmpData[1] << 2) & 0x3C;
        strEncodeData = strEncodeData + chEncodeTable[TmpIndex_3];
        strEncodeData = strEncodeData + "=";
    }

    std::cout << strEncodeData << std::endl;
    return strEncodeData;
}

//将编码的字符串解码
//
//
//
std::string DecodeBase64(IN char *pData,
    IN int nByteLength,
    INOUT std::string strEncodeData)
{
    //解码表
    char chDecodeTable[] = {
        +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0,
        +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0, +0,
        +0, +0, +0, +0, +0, +0, +0, 62, +0, +0, +0, 63, 52, 53, 54, 55, 56, 57,
        58, 59, 60, 61, +0, +0, +0, +0, +0, +0, +0,  0,  1,  2,  3,  4,  5,  6,
        7,  8,  9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
        25, +0, +0, +0, +0, +0, +0, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
        37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51
    };
    //赋值下标
    int TmpIndex_1 = 0;
    int TmpIndex_2 = 0;
    int TmpIndex_3 = 0;
    int TmpIndex_4 = 0;
    char chTmpEncodeData[4] = { 0 };
    char chTmpDecodeData[3] = { 0 };
    char chTmp[4] = { 0 };
    int nCount = 0;

    while (nCount < nByteLength)
    {
        if (*pData != '\r' && *pData != '\n')
        {
            TmpIndex_1 = *(pData++);
            TmpIndex_2 = *(pData++);
            TmpIndex_3 = *(pData++);
            TmpIndex_4 = *(pData++);

            chTmpEncodeData[0] = chDecodeTable[TmpIndex_1] << 2;
            chTmpEncodeData[1] = chDecodeTable[TmpIndex_2] >> 4;
            chTmpDecodeData[0] = chTmpEncodeData[0] | chTmpEncodeData[1];
            strEncodeData = strEncodeData + chTmpDecodeData[0];

            if (TmpIndex_3 != '=')
            {
                chTmpEncodeData[1] = chDecodeTable[TmpIndex_2] << 4;
                chTmpEncodeData[2] = chDecodeTable[TmpIndex_3] >> 2;
                chTmpDecodeData[1] = chTmpEncodeData[1] | chTmpEncodeData[2];
                strEncodeData = strEncodeData + chTmpDecodeData[1];

                if (TmpIndex_4 != '=')
                {
                    chTmpEncodeData[2] = chDecodeTable[TmpIndex_3] << 6;
                    chTmpEncodeData[3] = chDecodeTable[TmpIndex_4];
                    chTmpDecodeData[2] = chTmpEncodeData[2] | chTmpEncodeData[3];
                    strEncodeData = strEncodeData + chTmpDecodeData[2];
                }
            }
            nCount = nCount + 4;
        }
        else
        {
            pData++;
            nCount++;
        }
    }

    return strEncodeData;
}