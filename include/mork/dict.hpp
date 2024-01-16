#pragma once

#include "metaDict.hpp"
#include "alias.hpp"
#include <vector>

namespace Mork {
class Dict {
    public:
        static Dict parse();

        MetaDict metaDict;
        std::vector<Alias> aliases;
};
} //namespace Mork
