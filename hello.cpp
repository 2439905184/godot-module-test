#include "hello.h"
void Hello::add(int p_value)
void Hello::reset()
{
    count = 0;
}
int Hello::get_total() const
{
    return count;
}
void Hello::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("add", "value"), &Hello::add);
    ClassDB::bind_method(D_METHOD("reset"), &Hello::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Hello::get_total);
}
Hello::Hello()
{
    count = 0;
}
