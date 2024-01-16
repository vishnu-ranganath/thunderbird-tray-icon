#pragma once

#include <vector>

#include "cell.hpp"

namespace Mork {
class MetaDict {
    public:
        static MetaDict parse();

        std::vector<Cell> cells;
};
} //namespace Mork
