//
// Created by Charlie on 9/24/2022.
//

#include <algorithm>
#include "toBinary.h"

toBinary::toBinary(int binary) : binary(binary) {}

toBinary::~toBinary() {

}

string toBinary::convert(int bin) {
    bin;
    string r;
    while(bin!=0){
        r+= (bin%2==0?"0":"1");
        bin/=2;

    }
    reverse(r.begin(),r.end());
    return r;
}
