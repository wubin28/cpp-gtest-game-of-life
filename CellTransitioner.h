#ifndef CELLTRANSITIONER_H
#define CELLTRANSITIONER_H

#include "Cell.h"

class CellTransitioner {
public:
  Cell* transition(Cell *cell, int numOfLiveNeighbours);
};

#endif