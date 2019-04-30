/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   WalletUtil.h
 * Author: Kwadwo Oteng-Amoako
 *
 * Created on April 29, 2019, 7:30am
 */
#pragma once
#ifndef WALLETUTIL_H
#define WALLETUTIL_H
#include "TransactionOutputIO.h"
#include <string>
#include <map>

class WalletUtil {
public:
    WalletUtil();
    WalletUtil(const WalletUtil& orig);
    virtual ~WalletUtil();
    
    std::map<std::string, TransactionOutputIO> UTXOs;
   
private:

};

#endif /* WALLETUTIL_H */

