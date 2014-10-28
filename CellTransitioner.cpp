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
    if (numOfLiveNeighbours < 9) {
      return CellState::DEAD;
    }
  }
  return CellState::UNKNOWN;
}
