#pragma once

#include "hex.hpp"
#include "value.hpp"

namespace Mork {
class Alias {
    public:
        static Alias parse();

        Hex key;
        Value val;
};
} //Namespace Mork
