#pragma once

#include <utility>
#include <vector>

#include "mork/cell.hpp"
#include "mork/mid.hpp"
#include "mork/metaRow.hpp"

class Row {
    public:
        bool removeAll;
        Mid id;
        MetaRow metaRow;
        std::vector<std::pair<bool, Cell>> cells;
};
