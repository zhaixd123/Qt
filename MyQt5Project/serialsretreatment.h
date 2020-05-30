#ifndef SERIALSRETREATMENT_H
#define SERIALSRETREATMENT_H

#include "string"


class SerialSretreatment
{
public:
    SerialSretreatment();   //构造函数

    bool IsContainsParmInEnd(std::string parm,std::string bparmHead,std::string bparmEnd,unsigned short checkType);

};

#endif // SERIALSRETREATMENT_H
