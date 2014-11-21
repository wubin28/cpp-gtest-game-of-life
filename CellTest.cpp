#include "Cell.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Cell, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_underpopulation)
{
  LiveCell *liveCell = new LiveCell();

  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(0)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(1)));
}

// TODO: Any live cell with two or three live neighbours lives on to the next generation
TEST(Cell, Any_live_cell_with_two_or_three_live_neighbours_lives_on_to_the_next_generation)
{
  LiveCell *liveCell = new LiveCell();

  ASSERT_EQ(typeid(LiveCell), typeid(*liveCell->breedWithLiveNeighbours(2)));
  ASSERT_EQ(typeid(LiveCell), typeid(*liveCell->breedWithLiveNeighbours(3)));
}

// TODO: Any live cell with more than three live neighbours dies as if by overcrowding
// TODO: Any dead cell with exactly three live neighbours becomes a live cell
