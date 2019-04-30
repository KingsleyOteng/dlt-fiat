/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TransactionOutputIO.h
 * Author: Kwadwo Oteng-Amoako
 *
 * Created on April 29, 2019, 7:30am
 */
#pragma once
#ifndef TRANSACTIONOUTPUTIO_H
#define TRANSACTIONOUTPUTIO_H
#include <string>

class TransactionOutputIO {
public:
    TransactionOutputIO();
    TransactionOutputIO(const TransactionOutputIO& orig);
    virtual ~TransactionOutputIO();
    
    
    std::string id;
    //PublicKey recipient; //also known as the new owner of these coins.
    float value; //the amount of coins they own
    std::string parentTransactionId; //the id of the transaction this output was created in
        
private:

};

#endif /* TRANSACTIONOUTPUTIO_H */

