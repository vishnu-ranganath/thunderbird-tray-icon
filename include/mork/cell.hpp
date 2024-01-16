#pragma once

#include "mid.hpp"
#include "name.hpp"
#include "value.hpp"
#include <variant>

namespace Mork {
class Cell {
    public:
        static Cell parse();

        std::variant<Mid, Name> key;
        std::variant<Value, Mid> val;
};
} //namespace Mork
