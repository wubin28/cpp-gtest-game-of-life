#ifndef CELLECOLOGY_H
#define CELLECOLOGY_H

class CellEcology {
public:
  CellState virtual transition() = 0;
};

class LiveWithZero : public CellEcology {
public:
  CellState transition() override;
};

#endif