#include "hello.h"
#include <string>
string Hello::hello()
{
    return "hello";
}
void Hello::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("hello"), &Hello::hello);
}
Hello::Hello()
{

}
