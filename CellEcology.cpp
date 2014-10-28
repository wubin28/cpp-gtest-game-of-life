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

CellState DeadWithZero::transition() {
  return CellState::DEAD;
}

CellState DeadWithOne::transition() {
  return CellState::DEAD;
}

CellState DeadWithTwo::transition() {
  return CellState::DEAD;
}

CellState DeadWithThree::transition() {
  return CellState::ALIVE;
}

CellState DeadWithFour::transition() {
  return CellState::DEAD;
}

CellState DeadWithFive::transition() {
  return CellState::DEAD;
}

CellState DeadWithSix::transition() {
  return CellState::DEAD;
}

CellState DeadWithSeven::transition() {
  return CellState::DEAD;
}

CellState DeadWithEight::transition() {
  return CellState::DEAD;
}
