#include "CellEcology.h"

CellState LiveWithZero::transition() {
  return CellState::DEAD;
}
