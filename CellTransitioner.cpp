#include "CellTransitioner.h"
#include "CellState.h"

CellState CellTransitioner::transition(CellState cellState, int numOfLiveNeighbours) {
  if (cellState == CellState::ALIVE) {
    if (numOfLiveNeighbours < 2) {
      return CellState::DEAD;
    }
    if (numOfLiveNeighbours < 4) {
      return CellState::ALIVE;
    }
  }
  return CellState::UNKNOWN;
}
