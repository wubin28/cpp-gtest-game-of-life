#ifndef CELLTRANSITIONER_H
#define CELLTRANSITIONER_H

#include "CellState.h"

class CellTransitioner {
public:
  CellState transition(CellState cellState, int numOfLiveNeighbours);
};

#endif