#ifndef CELLTRANSITIONER_H
#define CELLTRANSITIONER_H

class CellTransitioner {
public:
  Cell* transition(Cell *cell, int numOfLiveNeighbours);
};

#endif