#include "ai/ai.h"

#include "ai/hl/stp/stp_hl.h"
#include "ai/navigator/rrt/rrt.h"

AI::AI() : navigator(std::make_unique<RRTNav>()), high_level(std::make_unique<STP_HL>())
{
}

std::vector<std::unique_ptr<Primitive>> AI::getPrimitives(const World &world) const
{
    std::vector<std::unique_ptr<Intent>> assignedIntents =
        high_level->getIntentAssignment(world);

    std::vector<std::unique_ptr<Primitive>> assignedPrimitives =
        navigator->getAssignedPrimitives(world, assignedIntents);

    return assignedPrimitives;
}
