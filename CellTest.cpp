#include "hiker.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Cell, Conways_game_of_life)
{
    ASSERT_EQ(42, answer());
}

// TODO: Any live cell with fewer than two live neighbours dies as if caused by underpopulation
// TODO: Any live cell with more than three live neighbours dies as if by overcrowding
// TODO: Any live cell with two or three live neighbours lives on to the next generation
// TODO: Any dead cell with exactly three live neighbours becomes a live cell
