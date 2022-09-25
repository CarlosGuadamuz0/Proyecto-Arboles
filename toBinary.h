//
// Created by Charlie on 9/24/2022.
//

#ifndef PROYECTOI_TOBINARY_H
#define PROYECTOI_TOBINARY_H

#include <string>

using namespace std;
class toBinary {
private:
    int binary;
public:
    explicit toBinary(int binary=0);

    string convert(int bin);

    virtual ~toBinary();
};


#endif //PROYECTOI_TOBINARY_H
