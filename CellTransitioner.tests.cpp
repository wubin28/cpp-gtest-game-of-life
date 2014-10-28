#include "CellState.h"
#include "CellTransitioner.h"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(CellTransitioner, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_under_population) {
  // Arrange
  CellState liveCell = CellState::ALIVE;
  CellTransitioner *cellTransitioner = new CellTransitioner;
  CellState transitionedCell = CellState::UNKNOWN;

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 0);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 1);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);
}

TEST(CellTransitioner, Any_live_cell_with_two_or_three_live_neighbours_lives_on_to_the_next_generation) {
  // Arrange
  CellState liveCell = CellState::ALIVE;
  CellTransitioner *cellTransitioner = new CellTransitioner;
  CellState transitionedCell = CellState::UNKNOWN;

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 2);

  // Assert
  ASSERT_EQ(CellState::ALIVE, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 3);

  // Assert
  ASSERT_EQ(CellState::ALIVE, transitionedCell);
}

TEST(CellTransitioner, Any_live_cell_with_more_than_three_live_neighbours_dies_as_if_by_overcrowding) {
  // Arrange
  CellState liveCell = CellState::ALIVE;
  CellTransitioner *cellTransitioner = new CellTransitioner;
  CellState transitionedCell = CellState::UNKNOWN;

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 4);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 5);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 6);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 7);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 8);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);
}

// TODO-intention: Any dead cell with exactly three live neighbours becomes a live cell as if by reproduction