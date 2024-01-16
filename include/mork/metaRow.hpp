#pragma once

#include <vector>

#include "cell.hpp"

namespace Mork {
class MetaRow {
    public:
        static MetaRow parse();

        std::vector<Cell> cells;
};
}
