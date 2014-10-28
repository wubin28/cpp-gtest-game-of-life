#include "CellTransitioner.h"
#include "CellState.h"

CellState CellTransitioner::transition(CellState cellState, int numOfLiveNeighbours) {
  // TODO-smell: No conditional statements
  // TODO-smell: No naked primitives
  if (numOfLiveNeighbours < 0) {
    return CellState::UNKNOWN;
  }
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
  if (cellState == CellState::DEAD) {
    if (numOfLiveNeighbours < 3) {
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
