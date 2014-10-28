#include "CellEcology.h"

CellState LiveWithZero::transition() {
  return CellState::DEAD;
}

CellState LiveWithOne::transition() {
  return CellState::DEAD;
}

CellState LiveWithTwo::transition() {
  return CellState::ALIVE;
}

CellState LiveWithThree::transition() {
  return CellState::ALIVE;
}
