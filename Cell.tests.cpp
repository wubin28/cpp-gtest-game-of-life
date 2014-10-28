#include "Cell.h"
#include <gtest/gtest.h>

using namespace ::testing;

// TODO-intention-working-on: Any live cell with fewer than two live neighbours dies as if caused by under_population
TEST(Cell, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_under_population)
{
    ASSERT_EQ(typeid(DeadCell), typeid(*transitionedCell));
}

// TODO-intention: Any live cell with two or three live neighbours lives on to the next generation
// TODO-intention: Any live cell with more than three live neighbours dies as if by overcrowding
// TODO-intention: Any dead cell with exactly three live neighbours becomes a live cell as if by reproduction