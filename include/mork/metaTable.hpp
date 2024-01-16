#pragma once

#include <vector>

#include "cell.hpp"
#include "row.hpp"
#include "rowRef.hpp"

namespace Mork {
class MetaTable {
    public:
        static MetaTable parse();

        std::vector<Cell> cells;
        std::vector<Row> rows;
        std::vector<RowRef> rowRefs;
};
}
