#include "CellEcology.h"
#include <gtest/gtest.h>

using namespace ::testing;

// TODO-refactoring: Refactoring to lambda.
TEST(CellEcology, Any_live_cell_with_fewer_than_two_live_neighbours_dies_as_if_caused_by_under_population) {
  // Assert
  ASSERT_FALSE((new LiveWithZero)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new LiveWithOne)->isAliveAfterTransitioned());
}

TEST(CellEcology, Any_live_cell_with_two_or_three_live_neighbours_lives_on_to_the_next_generation) {
  // Assert
  ASSERT_TRUE((new LiveWithTwo)->isAliveAfterTransitioned());

  // Assert
  ASSERT_TRUE((new LiveWithThree)->isAliveAfterTransitioned());
}

TEST(CellEcology, Any_live_cell_with_more_than_three_live_neighbours_dies_as_if_by_overcrowding) {
  // Assert
  ASSERT_FALSE((new LiveWithFour)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new LiveWithFive)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new LiveWithSix)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new LiveWithSeven)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new LiveWithEight)->isAliveAfterTransitioned());
}

TEST(CellEcology, Any_dead_cell_with_exactly_three_live_neighbours_becomes_a_live_cell_as_if_by_reproduction) {
  // Assert
  ASSERT_FALSE((new DeadWithZero)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new DeadWithOne)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new DeadWithTwo)->isAliveAfterTransitioned());

  // Assert
  ASSERT_TRUE((new DeadWithThree)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new DeadWithFour)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new DeadWithFive)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new DeadWithSix)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new DeadWithSeven)->isAliveAfterTransitioned());

  // Assert
  ASSERT_FALSE((new DeadWithEight)->isAliveAfterTransitioned());
}
