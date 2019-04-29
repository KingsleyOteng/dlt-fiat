/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   HashItem.cpp
 * Author: user
 * 
 * Created on April 29, 2019, 8:34 AM
 */

#include "HashItem.h"

template<typename K, typename V>
class HashItem {
public:
    
    /*
    *  constructor
    */
    HashItem::HashItem(K key, V value) {
        this->key = key;
        this->value = value;
        this->nextItem = nullptr;
    }

    /*
    * copy constructor
    */
    HashItem::HashItem(const HashItem & item) {
        this->key = item.getKey();
        this->value = item.getValue();
        this->nextItem = nullptr;
    }
    
    
    /*
    * destructor
    */
    HashItem::~HashItem() {
    }
    
    void setNext(HashItem<K, V> * item) {
        this->nextItem = item;
    }

    HashItem * getNext() {
        return nextItem;
    }

    K getKey() {
        return key;
    }

    V getValue() {
        return value;
    }

    void setValue(V value) {
        this->value = value;
    }

private:
    K key;
    V value;
    HashItem * nextItem;

};

