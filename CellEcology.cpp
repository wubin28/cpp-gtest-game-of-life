#include "CellEcology.h"

CellState LiveWithZero::transition() {
  return CellState::DEAD;
}

CellState LiveWithOne::transition() {
  return CellState::DEAD;
}
