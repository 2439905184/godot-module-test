#ifndef HELLO_H
#define HELLO_H
#include "core/reference.h"
class Hello :public Reference
{
    GDCLASS(Hello,Reference);
    protected:
        static void _bind_methods();
    public:
        int hi();
        Hello();
};

#endif
