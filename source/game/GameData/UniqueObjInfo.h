#pragma once

#include "sead/prim/seadSafeString.hpp"
#include "smootypes.h"

class UniqObjInfo {
    public:
        bool isEqual(char const *, char const *);
        void set();  

        undefined structSize[0x138];
};

static_assert(sizeof(UniqObjInfo) == 0x138);