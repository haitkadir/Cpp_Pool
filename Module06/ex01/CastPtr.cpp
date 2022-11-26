#include "CastPtr.hpp"

/*----------------------------------------------------------------------------*/
uintptr_t   CastPtr::serialize(Data* ptr){
    if (ptr)
        return reinterpret_cast<uintptr_t>(ptr);
    return 0;
}

/*----------------------------------------------------------------------------*/
Data*       CastPtr::deserialize(uintptr_t raw){
    if (raw)
        return reinterpret_cast<Data*>(raw);
    return NULL;
}




