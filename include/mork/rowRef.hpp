#pragma once

#include "hex.hpp"

namespace Mork {
class RowRef {
    public:
        static RowRef parse();

        Hex id;
        Hex scope;
};
} //namespace Mork
