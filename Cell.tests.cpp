#include "Cell.h"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Cell, Life_the_universe_and_everything)
{
    // a simple example to start you off
    ASSERT_EQ(42, answer());
}

// TODO-intention: Any live cell with fewer than two live neighbours dies as if caused by under-population
// TODO-intention: Any live cell with two or three live neighbours lives on to the next generation
// TODO-intention: Any live cell with more than three live neighbours dies as if by overcrowding
// TODO-intention: Any dead cell with exactly three live neighbours becomes a live cell as if by reproduction