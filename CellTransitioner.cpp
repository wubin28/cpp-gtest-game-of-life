#include "CellTransitioner.h"
#include "Cell.h"
#include <typeinfo>

Cell* CellTransitioner::transition(Cell *cell, int numOfLiveNeighbours) {
  if (typeid(*cell) == typeid(LiveCell)) {
    if (numOfLiveNeighbours < 2) {
      return new DeadCell;
    }
  }
  return nullptr;
}
