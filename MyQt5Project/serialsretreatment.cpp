#include "serialsretreatment.h"

SerialSretreatment::SerialSretreatment()
{

}

//判断一个字符串头或尾是否包含了某个字符串,如果同时传入了头和尾，必须保证头尾长度相等
//parm需要处理的参数
//bparmHead 头
//bparmend 尾
//checkType 1为判断头是否包含 2为判断尾是否包含 3头尾都判断
bool SerialSretreatment::IsContainsParmInEnd(std::string parm,std::string bparmHead,std::string bparmEnd,unsigned short checkType){
    unsigned short headLen=sizeof (bparmHead);
    unsigned short endLen=sizeof (bparmHead);
    bool result=true;
    switch (checkType) {
    case 1:
        for(int i=0;i<headLen;i++){
            if(bparmHead[i]!=parm[i]){
                result=  false;
            }
        }
        break;
    case 2:
        for(int i=endLen-1;i>=0;i--){
            if(bparmEnd[i]!=parm[i]){
                result=  false;
            }
        }
        break;
    case 3:
        for(int i=0;i<headLen;i++){
            if(bparmHead[i]!=parm[i] || bparmEnd[headLen]!=headLen-i){
                result=false;
            }
        }
        break;
    default:
        result= false;
    }
    return result;
}
