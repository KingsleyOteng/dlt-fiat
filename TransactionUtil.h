/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TransactionUtil.h
 * Author: Kwadwo Oteng-Amoako
 *
 * Created on April 29, 2019, 7:30am
 */
#pragma once
#ifndef TRANSACTIONUTIL_H
#define TRANSACTIONUTIL_H
#include "TransactionsInputIO.h"
#include "TransactionOutputIO.h"
#include <string>
#include <vector>

class TransactionUtil {
public:
    TransactionUtil();
    TransactionUtil(const TransactionUtil& orig);
    virtual ~TransactionUtil();
    
    std::string transactionId;
    // PublicKey senderAddress;
    // PublicKey recipientAddress;
    float value;
    //byte[] signet;
    
    std::vector<TransactionsInputIO> ledgerOfInputs;
    std::vector<TransactionOutputIO> ledgerOfOutputs; 
    
    int sequence = 0; 
        
private:

};

#endif /* TRANSACTIONUTIL_H */

