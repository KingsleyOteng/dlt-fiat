/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Block.h
 * Author: Kwadwo Oteng-Amoako
 *
 * Created on April 29, 2019, 7:30am
 */
#pragma once
#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include <map>
#include <vector>
#include "WalletUtil.h"
#include "TransactionOutputIO.h"

//using namespace std

class Block {
public:
    Block();
    Block(const Block& orig);
    Block(int a, int b);
    virtual ~Block();
    static std::string newHashSignet;
    static std::string priorHashSignet;
    static std::string merkleRoot;
    std::vector<Block> blockChain;
    std::vector<TransactionUtil> transactions;
    static int miningDepth = 0x4;
    static int minimumTransaction = 0x5;
    // hashmap implementation
    //static HashItem<std::string,TransactionOutputIO> UTXOs = new HashItem<std::string,TransactionOutputIO>();
    
    // perhaps we might use an stl implementation
    static std::map<std::string, TransactionOutputIO> UTXs_stl; 
    static std::string message;
    static long timeStamp;
    static int nonce;
    
    WalletUtil WalletA;
    WalletUtil WalletB;
    
    static int minimumTransaction = 0x5;
   
    Block::Block(std::string data, std::string previousHash);
    final std::string Block::calculatedhash();
    static bool Block::isHashCodeCheckValid();
    void Block::miner(int miningDepth);
    
     
    
    

    
private:
    std::string message;
    long timeStamp;
    int nonce;
    
    
    /**
     *
     */
    
    

};

#endif /* BLOCK_H */

