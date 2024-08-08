//
// Created by warde on 8/8/2024.
//


#ifndef SHOPINVENTORY_ITEMS_H
#define SHOPINVENTORY_ITEMS_H
#include<cmath>
#include <string>
#include<map>
 using namespace std;

class ITEMS {
private:
  map<string,int> items;
public:
    ITEMS();
    virtual ~ITEMS();

    void printItems();
    void buyItems();

};



#endif //SHOPINVENTORY_ITEMS_H
