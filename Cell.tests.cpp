#include "CellState.h"
#include "CellTransitioner.h"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Cell, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_under_population)
{
  // Arrange
  CellState liveCell = CellState::ALIVE;
  CellTransitioner *cellTransitioner = new CellTransitioner;

  // Act
  CellState transitionedCell = cellTransitioner->transition(liveCell, 1);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 0);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);
}

// TODO-intention: Any live cell with two or three live neighbours lives on to the next generation
// TODO-intention: Any live cell with more than three live neighbours dies as if by overcrowding
// TODO-intention: Any dead cell with exactly three live neighbours becomes a live cell as if by reproduction