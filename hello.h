#ifndef HELLO_H
#define HELLO_H
#include "core/reference.h"
class Hello :public Reference
{
    GDCLASS(Hello,Reference);
    int count;
};
protected:
    static void _bind_methods();
//声明hello类的方法
public:
    void hello();
    Hello();
#endif
