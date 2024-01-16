#pragma once

#include <utility>
#include <vector>

#include "mork/cell.hpp"
#include "mork/mid.hpp"
#include "mork/metaRow.hpp"

namespace Mork {
class Row {
    public:
        static Row parse();

        bool removeAll;
        Mid id;
        MetaRow metaRow;
        std::vector<std::pair<bool, Cell>> cells;
};
} //namespace Mork
