#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>

#include "RSA.h"
#include "ende_code_file.h"

int main()
{
    RSA rsa;
    RSA::code_key ck = rsa.key_generate( 1000 );

    /*
    std::string test = " ";
    std::vector< int > test_word_value;
    const char *aa = test.c_str();

    for( int i = 0; i < sizeof( aa ); i++ )
    {
        test_word_value.push_back( rsa.powmod( aa[i], ck.public_key_1, ck.public_key_2) );
    }

    char te[ test_word_value.size() ];

    for( int i = 0; i < sizeof( te ); i++ )
    {
        te[i] = rsa.powmod( test_word_value[i], ck.secret_key, ck.public_key_2 );
    }

    std::cout<< aa;
    std::cout<< te;
    */
    
    //code().encode_file( "test.txt", ck.public_key_1, ck.public_key_2 );
    code().decode_file( "test.txt", 373373, 2558123);
    std::cout<< "公開鍵1 " << ck.public_key_1 <<"\n";
    std::cout<< "公開鍵2 " << ck.public_key_2 <<"\n";
    std::cout<< "秘密鍵 " << ck.secret_key <<"\n";
    //std::cout<< "メッセージ " << test <<"\n";
    //std::cout<< "暗号化 " << e_test <<"\n";
    //std::cout<< "復号 " << d_test <<"\n";

}
