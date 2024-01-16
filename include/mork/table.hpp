#pragma once

#include <utility>
#include <vector>

#include "mork/mid.hpp"
#include "mork/row.hpp"
#include "mork/rowRef.hpp"
#include "mork/metaTable.hpp"

class Table {
    public:
        bool removeAll;
        Mid id;
        std::vector<std::pair<bool, Row>> rows;
        std::vector<std::pair<bool, RowRef>> rowRefs;
        MetaTable metaTable;
};
