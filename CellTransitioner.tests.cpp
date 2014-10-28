#include "CellState.h"
#include "CellTransitioner.h"
#include "CellEcology.h"
#include <gtest/gtest.h>

using namespace ::testing;

// TODO-refactoring-working-on: Replace class CellTransitioner with class CellEcology and 18 subclasses. Each subclass stands for a situation in which the cell is connecting with some live neighbours (from 0 to 8 for a live and dead cell).
TEST(CellEcology, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_under_population) {
  // Arrange
  CellState transitionedCellState;

  // Act
  transitionedCellState = (new LiveWithZero)->transition();

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCellState);

  // Act
  transitionedCellState = (new LiveWithOne)->transition();

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCellState);
}

TEST(CellEcology, Any_live_cell_with_two_or_three_live_neighbours_lives_on_to_the_next_generation) {
  // Arrange
  CellState transitionedCellState;

  // Act
  transitionedCellState = (new LiveWithTwo)->transition();

  // Assert
  ASSERT_EQ(CellState::ALIVE, transitionedCellState);

  // Act
  transitionedCellState = (new LiveWithThree)->transition();

  // Assert
  ASSERT_EQ(CellState::ALIVE, transitionedCellState);
}

TEST(CellEcology, Any_live_cell_with_more_than_three_live_neighbours_dies_as_if_by_overcrowding) {
  // Arrange
  CellState transitionedCellState;

  // Act
  transitionedCellState = (new LiveWithFour)->transition();

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCellState);

  // Act
  transitionedCellState = (new LiveWithFive)->transition();

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCellState);

  // Act
  transitionedCellState = (new LiveWithSix)->transition();

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCellState);

  // Act
  transitionedCellState = (new LiveWithSeven)->transition();

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCellState);

  // Act
  transitionedCellState = (new LiveWithEight)->transition();

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCellState);
}

TEST(CellTransitioner, Any_dead_cell_with_exactly_three_live_neighbours_becomes_a_live_cell_as_if_by_reproduction) {
  // Arrange
  CellState deadCell = CellState::DEAD;
  CellTransitioner *cellTransitioner = new CellTransitioner;
  CellState transitionedCell = CellState::UNKNOWN;

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 1);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 2);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 3);

  // Assert
  ASSERT_EQ(CellState::ALIVE, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 4);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 5);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 6);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 7);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(deadCell, 8);

  // Assert
  ASSERT_EQ(CellState::DEAD, transitionedCell);
}

TEST(CellTransitioner, Any_live_cell_with_negative_or_more_than_eight_live_neighbours_has_unknown_state) {
  // Arrange
  CellState liveCell = CellState::ALIVE;
  CellTransitioner *cellTransitioner = new CellTransitioner;
  CellState transitionedCell = CellState::DEAD;

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, -1);

  // Assert
  ASSERT_EQ(CellState::UNKNOWN, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 9);

  // Assert
  ASSERT_EQ(CellState::UNKNOWN, transitionedCell);
}

TEST(CellTransitioner, Any_dead_cell_with_negative_or_more_than_eight_live_neighbours_has_unknown_state) {
  // Arrange
  CellState liveCell = CellState::DEAD;
  CellTransitioner *cellTransitioner = new CellTransitioner;
  CellState transitionedCell = CellState::DEAD;

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, -1);

  // Assert
  ASSERT_EQ(CellState::UNKNOWN, transitionedCell);

  // Act
  transitionedCell = cellTransitioner->transition(liveCell, 9);

  // Assert
  ASSERT_EQ(CellState::UNKNOWN, transitionedCell);
}

