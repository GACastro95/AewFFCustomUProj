#include "SSPlayerStartLocatorParam.h"

FSSPlayerStartLocatorParam::FSSPlayerStartLocatorParam() {
    this->ID = 0;
    this->PlayerStartType = ESSPlayerStartLocatorType::P1;
    this->PlayerStartAreaId = ESSPlayerStartLocatorAreaId::Area_A;
    this->ForSolo = 0;
    this->For2x12 = 0;
    this->For4x6 = 0;
    this->For4x2 = 0;
    this->ForFgfOffenseRespawn = 0;
    this->ForFgfDefenseRespawn = 0;
}

