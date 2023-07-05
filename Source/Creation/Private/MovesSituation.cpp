#include "MovesSituation.h"

FMovesSituation::FMovesSituation() {
    this->DataIndex = 0;
    this->DT_ID = 0;
    this->EnableTranslation = false;
    this->UnlockUniqueID = 0;
    this->SortOrder = 0;
    this->MovesCategory = 0;
    this->MovesTag_AttackType = 0;
    this->MovesTag_Function = 0;
    this->MovesTag_MovesType = 0;
    this->MovesTag_DamagePart = 0;
    this->Finisher = EFinisher_Type::None;
    this->Signature = EFinisher_Type::None;
    this->TagFinisher = EFinisher_Type::None;
    this->SpecialRestriction = EMoves_SpecialRestriction::None;
    this->TriggerDistance = 0.00f;
    this->EnableMovesMenu = false;
    this->DistanceOffsetType = EMoves_PreviewDistOffsetType::None;
    this->DistanceOffset = 0.00f;
    this->AllLocationOffsetY = 0.00f;
    this->IsDownRotate2P = false;
}

