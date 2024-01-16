#pragma once

#include <variant>

#include "hex.hpp"
#include "name.hpp"

namespace Mork {
class Mid {
    public:
        static Mid parse();

        Hex id;
        std::variant<Hex, Name> scope;
};
} //namespace Mork
