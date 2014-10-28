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

CellState LiveWithFour::transition() {
  return CellState::DEAD;
}

CellState LiveWithFive::transition() {
  return CellState::DEAD;
}

CellState LiveWithSix::transition() {
  return CellState::DEAD;
}

CellState LiveWithSeven::transition() {
  return CellState::DEAD;
}

CellState LiveWithEight::transition() {
  return CellState::DEAD;
}
