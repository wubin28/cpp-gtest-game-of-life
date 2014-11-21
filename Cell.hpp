#ifndef CELL_INCLUDED
#define CELL_INCLUDED

class LiveCell {
public:
  Cell *breedWithLiveNeighbours(int numberOfLiveNeighbours);
};

class DeadCell {
};

#endif
