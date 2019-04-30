/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TransactionsIO.h
 * Author: Kwadwo Oteng-Amoako
 *
 * Created on April 29, 2019, 7:30am
 */
#pragma once
#ifndef TRANSACTIONSIO_H
#define TRANSACTIONSIO_H
#include <string>
#include "TransactionOutputIO.h"

class TransactionsInputIO {
public:
    TransactionsInputIO();
    TransactionsInputIO(const TransactionsInputIO& orig);
    virtual ~TransactionsInputIO();
    std::string transactionOutputId; //Reference to TransactionOutputs -> transactionId
    TransactionOutputIO UTXO; //Contains the Unspent transaction output
    
private:

};

#endif /* TRANSACTIONSIO_H */

