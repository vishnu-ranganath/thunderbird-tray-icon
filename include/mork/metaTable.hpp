#pragma once

#include <vector>

#include "cell.hpp"
#include "row.hpp"
#include "rowRef.hpp"

class MetaTable {
    public:
        std::vector<Cell> cells;
        std::vector<Row> rows;
        std::vector<RowRef> rowRefs;
};
