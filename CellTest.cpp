#include "Cell.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

// TODO-working-on: Any live cell with fewer than two live neighbours dies as if caused by underpopulation
TEST(Cell, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_underpopulation)
{
  LiveCell *liveCell = new LiveCell();

  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(0)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(1)));
}

// TODO: Any live cell with more than three live neighbours dies as if by overcrowding
// TODO: Any live cell with two or three live neighbours lives on to the next generation
// TODO: Any dead cell with exactly three live neighbours becomes a live cell
