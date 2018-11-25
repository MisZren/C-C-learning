// FileEncptByBase64.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "MyBase64.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

int main()
{ 
    char *pString = "zymilo1210";
    std::string strEncodeData;
    char *pEncodeString = NULL;

    strEncodeData = EncodeBase64(pString, strlen(pString), strEncodeData);
    //pEncodeString = (char *)strEncodeData.c_str();

    std::cout << strEncodeData << std::endl;

    //std::string filename = "test.bin";
    //std::fstream s(filename, s.binary | s.trunc | s.in | s.out);
    //if (!s.is_open())
    //{
    //    std::cout << "failed to open " << filename << '\n';
    //}
    //else
    //{
    //    // write
    //    double d = 3.14;
    //    s.write(reinterpret_cast<char*>(&d), sizeof d); // binary output
    //    s << 123 << "abc";                              // text output

    //                                                    // for fstream, this moves the file position pointer (both put and get)
    //    s.seekp(0);

    //    // read
    //    s.read(reinterpret_cast<char*>(&d), sizeof d); // binary input
    //    int n;
    //    std::string str;
    //    if (s >> n >> str)                             // text input
    //        std::cout << "read back from file: " << d << ' ' << n << ' ' << str << '\n';
    //}

    //char *token = strtok(str, ",");


    //while (token != NULL)
    //{
    //    std::cout << token << std::endl;
    //    token = strtok(NULL, ",");
    //}

    //std::cout << "put string:" << std::endl;

    //char str[] = "15110050916----zymilo1210";
    //char * pch;
    //printf("Splitting string \"%s\" into tokens:\n", str);
    //pch = strtok(str, "----");
    //while (pch != NULL)
    //{
    //    printf("%s\n", pch);
    //    pch = strtok(NULL, "----");
    //}
=======================================================
    //std::ifstream fsIn("data.txt");
    //std::ofstream fsOutBase64("test_base64_encode.txt");
    //std::string strEncodeLine;

    //if (fsIn)
    //{
    //    while (std::getline(fsIn, strEncodeLine))
    //    {
    //        char *pData = NULL;
    //        char * pch = NULL;

    //        pch = strtok((char *)strEncodeLine.c_str(), "----");
    //        fsOutBase64 << pch << "----";
    //        

    //        while (pch != NULL)
    //        {

    //            pch = strtok(NULL, "----");
    //            if (pch == NULL)
    //            {
    //                break;
    //            }

    //            std::string strEncodeData(pch);
    //            int nLenEncode = strEncodeData.length();

    //            pData = (char *)malloc((nLenEncode + 1) * sizeof(char));
    //            strEncodeData.copy(pData, nLenEncode, 0);
    //            *(pData + nLenEncode) = '\0';
    //            std::cout << pData << std::endl;
    //            std::string strEncodeDataTmp = EncodeBase64(pData, strlen(pData), strEncodeData);
    //            std::cout << strEncodeDataTmp << std::endl;
    //            fsOutBase64 << strEncodeDataTmp << std::endl;

    //            free(pData);
    //        }

    //    }
    //}
    //else
    //{
    //    std::cout << "no such file" << std::endl;
    //}

    //fsIn.close();
    //fsOutBase64.close();

    return 0;
}

