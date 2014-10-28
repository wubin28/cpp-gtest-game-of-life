#ifndef CELLECOLOGY_H
#define CELLECOLOGY_H

#include "CellState.h"

class CellEcology {
public:
  CellState virtual transition() = 0;
};

class LiveWithZero : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithOne : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithTwo : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithThree : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithFour : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithFive : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithSix : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithSeven : public CellEcology {
public:
  CellState transition() override;
};

class LiveWithEight : public CellEcology {
public:
  CellState transition() override;
};

#endif