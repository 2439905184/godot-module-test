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
public:
    void add(int p_value);
    void reset();
    int get_total() const;
    Hello();
#endif
