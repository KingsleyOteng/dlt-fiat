/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SignatureUtil.h
 * Author: Kwadwo Oteng-Amoako
 *
 * Created on April 29, 2019, 7:30am
 */
#pragma once
#ifndef SIGNATUREUTIL_H
#define SIGNATUREUTIL_H
#include <string>

class SignatureUtil {
public:
    SignatureUtil();
    SignatureUtil(const SignatureUtil& orig);
    virtual ~SignatureUtil();
    
    static std::string applySha256(std::string message);
    static std::string getStringFromKey(std::string keyLL);
    static byte applyECDSASig(std::string privateKeyLL, std::string inputLL);
    static bool verifyECDSASig(std::string publicKey, std::string message, byte signet);
    static std::string getMerkleRoot(std::string transactionsLL);
    
    
private:

};

#endif /* SIGNATUREUTIL_H */

