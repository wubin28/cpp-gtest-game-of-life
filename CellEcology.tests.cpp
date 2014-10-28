#include "CellState.h"
#include "CellEcology.h"
#include <gtest/gtest.h>

using namespace ::testing;

// TODO-smell-working-on: Unnecessary CellState. Refactoring to lambda.
TEST(CellEcology, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_under_population) {
  // Assert
  ASSERT_FALSE((new LiveWithZero)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new LiveWithOne)->isAliveAfterTransitioned());
}

TEST(CellEcology, Any_live_cell_with_two_or_three_live_neighbours_lives_on_to_the_next_generation) {
  // Assert
  ASSERT_EQ(CellState::ALIVE, (new LiveWithTwo)->transition());

  // Assert
  ASSERT_EQ(CellState::ALIVE, (new LiveWithThree)->transition());
}

TEST(CellEcology, Any_live_cell_with_more_than_three_live_neighbours_dies_as_if_by_overcrowding) {
  // Assert
  ASSERT_EQ(CellState::DEAD, (new LiveWithFour)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new LiveWithFive)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new LiveWithSix)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new LiveWithSeven)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new LiveWithEight)->transition());
}

TEST(CellEcology, Any_dead_cell_with_exactly_three_live_neighbours_becomes_a_live_cell_as_if_by_reproduction) {
  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithZero)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithOne)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithTwo)->transition());

  // Assert
  ASSERT_EQ(CellState::ALIVE, (new DeadWithThree)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithFour)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithFive)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithSix)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithSeven)->transition());

  // Assert
  ASSERT_EQ(CellState::DEAD, (new DeadWithEight)->transition());
}

