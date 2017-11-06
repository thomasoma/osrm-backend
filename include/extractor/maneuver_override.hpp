#ifndef MANUEVER_OVERRIDE_HPP
#define MANUEVER_OVERRIDE_HPP

#include "guidance/turn_instruction.hpp"
#include "util/typedefs.hpp"

namespace osrm
{
namespace extractor
{
struct ManeuverOverride
{
    NodeID from_edge_based_node_id;
    NodeID to_edge_based_node_id;
    OSMNodeID via_osm_node_id;
    guidance::TurnType::Enum override_type;
    guidance::DirectionModifier::Enum direction;
};
}
}
#endif
/*
from=1
to=3
via=b

      101      a      102      b        103
---------------+---------------+-------------- (way 1)
      99        \      98       \       97
             51  \ 2          50 \ 3
                  \               \
*/