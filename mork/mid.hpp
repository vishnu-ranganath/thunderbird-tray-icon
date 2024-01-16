#pragma once

#include "hex.hpp"
#include "name.hpp"

union MidScope {
    Hex hex;
    Name name;
};

class Mid {
    public:
        Hex id;
        MidScope scope;
};
