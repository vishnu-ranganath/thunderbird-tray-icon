#pragma once

#include "mid.hpp"
#include "name.hpp"
#include "value.hpp"

union CellKey {
    Mid mid;
    Name name;
};

union CellValue {
    Value value;
    Mid mid;
};

class Cell {
    public:
        CellKey key;
        CellValue val;
};
