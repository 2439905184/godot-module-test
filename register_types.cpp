#include "register_types.h"
#include "core/class_db.h"
#include "hello.h"

void register_hello_types() {
    ClassDB::register_class<Hello>();
}

void unregister_hello_types() {
   // Nothing to do here in this example.
}