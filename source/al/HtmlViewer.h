#pragma once

#include "sead/prim/seadSafeString.hpp"

namespace al
{
    class HtmlViewer
    {
    public:
        void call(const char *, sead::BufferedSafeStringBase<char> *) const;
    };
};