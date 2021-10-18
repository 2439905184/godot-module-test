#include "hello.h"
#include <iostream>
int Hello::hi()
{
   // std::cout<<"Hi im hello from custom module"<<std::endl;
   return 8848;
}

void Hello::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("hi"), &Hello::hi);
}
Hello::Hello()
{

}