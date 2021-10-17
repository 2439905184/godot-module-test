#include "hello.h"
#include <iostream>
void Hello::hi()
{
    std::cout<<"Hi im hello from custom module"<<std::endl;
}

void Hello::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("hi"), &Hello::hi);
}
Hello::Hello()
{

}