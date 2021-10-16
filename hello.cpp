#include "hello.h"
void Hello::add(int p_value)
void Hello::reset()
{
    int c = 0;
}
int Hello::get_total() const
{
    return c;
}
void Hello::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("add", "value"), &Hello::add);
    ClassDB::bind_method(D_METHOD("reset"), &Hello::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Hello::get_total);
}
Hello::Hello()
{
    int c = 0;
}
