#pragma once

#include <utility>
#include <vector>

#include "mork/mid.hpp"
#include "mork/row.hpp"
#include "mork/rowRef.hpp"
#include "mork/metaTable.hpp"

namespace Mork {
class Table {
    public:
        static Table parse();

        bool removeAll;
        Mid id;
        std::vector<std::pair<bool, Row>> rows;
        std::vector<std::pair<bool, RowRef>> rowRefs;
        MetaTable metaTable;
};
} //namespace Mork
