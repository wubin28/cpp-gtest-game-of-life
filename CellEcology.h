#ifndef CELLECOLOGY_H
#define CELLECOLOGY_H

class CellEcology {
public:
  bool virtual isAliveAfterTransitioned() = 0;
};

class LiveWithZero : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithOne : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithTwo : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithThree : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithFour : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithFive : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithSix : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithSeven : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class LiveWithEight : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithZero : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithOne : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithTwo : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithThree : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithFour : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithFive : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithSix : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithSeven : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

class DeadWithEight : public CellEcology {
public:
  bool isAliveAfterTransitioned() override;
};

#endif