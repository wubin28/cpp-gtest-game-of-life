#include "CellTransitioner.h"
#include "CellState.h"

CellState CellTransitioner::transition(CellState cellState, int numOfLiveNeighbours) {
  if (cellState == CellState::ALIVE) {
    if (numOfLiveNeighbours < 2) {
      return CellState::DEAD;
    }
  }
  return CellState::DEAD;
}
