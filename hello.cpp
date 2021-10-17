#include "hello.h"
#include <string>
int Hello::get_num()
{
    return 8848;
}
Hello::Hello()
{

}
void Hello::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("hello"), &Hello::get_num);
}
