#include "Cell.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Cell, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_underpopulation)
{
  LiveCell *liveCell = new LiveCell();

  ASSERT_EQ(typeid(ZombieCell), typeid(*liveCell->breedWithLiveNeighbours(-1)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(0)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(1)));
}

TEST(Cell, Any_live_cell_with_two_or_three_live_neighbours_lives_on_to_the_next_generation)
{
  LiveCell *liveCell = new LiveCell();

  ASSERT_EQ(typeid(LiveCell), typeid(*liveCell->breedWithLiveNeighbours(2)));
  ASSERT_EQ(typeid(LiveCell), typeid(*liveCell->breedWithLiveNeighbours(3)));
}

TEST(Cell, Any_live_cell_with_more_than_three_live_neighbours_dies_as_if_by_overcrowding)
{
  LiveCell *liveCell = new LiveCell();

  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(4)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(5)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(6)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(7)));
  ASSERT_EQ(typeid(DeadCell), typeid(*liveCell->breedWithLiveNeighbours(8)));
  ASSERT_EQ(typeid(ZombieCell), typeid(*liveCell->breedWithLiveNeighbours(9)));
}

// TODO-working-on: Any dead cell with exactly three live neighbours becomes a live cell
TEST(Cell, Any_dead_cell_with_exactly_three_live_neighbours_becomes_a_live_cell)
{
  DeadCell *deadCell = new DeadCell();

  ASSERT_EQ(typeid(ZombieCell), typeid(*deadCell->breedWithLiveNeighbours(-1)));
  ASSERT_EQ(typeid(DeadCell), typeid(*deadCell->breedWithLiveNeighbours(0)));
  ASSERT_EQ(typeid(DeadCell), typeid(*deadCell->breedWithLiveNeighbours(1)));
  ASSERT_EQ(typeid(DeadCell), typeid(*deadCell->breedWithLiveNeighbours(2)));
  ASSERT_EQ(typeid(LiveCell), typeid(*deadCell->breedWithLiveNeighbours(3)));
  ASSERT_EQ(typeid(LiveCell), typeid(*deadCell->breedWithLiveNeighbours(4)));
  ASSERT_EQ(typeid(LiveCell), typeid(*deadCell->breedWithLiveNeighbours(5)));
  ASSERT_EQ(typeid(LiveCell), typeid(*deadCell->breedWithLiveNeighbours(6)));
  ASSERT_EQ(typeid(LiveCell), typeid(*deadCell->breedWithLiveNeighbours(7)));
  ASSERT_EQ(typeid(LiveCell), typeid(*deadCell->breedWithLiveNeighbours(8)));
  ASSERT_EQ(typeid(ZombieCell), typeid(*deadCell->breedWithLiveNeighbours(9)));
}





