/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Block.h
 * Author: Kwadwo Oteng-Amoako
 *
 * Created on April 26, 2019, 1:10 PM
 */

#ifndef BLOCK_H
#define BLOCK_H
#include <string>

class Block {
public:
    Block();
    Block(const Block& orig);
    Block(int a, int b);
    virtual ~Block();
    std::string newHashSignet;
    std::string priorHashSignet;
    
private:
    std::string message;
    long timeStamp;
    int nonce;

};

#endif /* BLOCK_H */

