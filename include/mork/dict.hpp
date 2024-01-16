#pragma once

#include "metaDict.hpp"
#include "alias.hpp"
#include <vector>

class Dict {
    public:
        MetaDict metaDict;
        std::vector<Alias> aliases;
};
