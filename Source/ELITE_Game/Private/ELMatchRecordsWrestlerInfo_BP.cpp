#include "ELMatchRecordsWrestlerInfo_BP.h"

FELMatchRecordsWrestlerInfo_BP::FELMatchRecordsWrestlerInfo_BP() {
    this->WrestlerID = EWrestlerID_N::None;
    this->Winner = false;
    this->Loser = false;
    this->UsedByHostPad = false;
    this->TeamNo = 0;
}

