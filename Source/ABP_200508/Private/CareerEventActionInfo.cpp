#include "CareerEventActionInfo.h"

FCareerEventActionInfo::FCareerEventActionInfo() {
    this->SE = ECareerSEType::NONE;
    this->BGM = ECareerBGMType::Dummy;
    this->ScreenEffect = ECareerScreenEffect::None;
    this->TalkMem = ECareerEventActionMember::NONE;
    this->MemA_Yaw = 0.00f;
    this->MemB_Yaw = 0.00f;
    this->MemC_Yaw = 0.00f;
    this->MemD_Yaw = 0.00f;
    this->MemA_Prop = ECareerProp::None;
    this->MemB_Prop = ECareerProp::None;
    this->MemC_Prop = ECareerProp::None;
    this->MemD_Prop = ECareerProp::None;
    this->MemA_Target = ECareerEventTarget::NONE;
    this->MemB_Target = ECareerEventTarget::NONE;
    this->MemC_Target = ECareerEventTarget::NONE;
    this->MemD_Target = ECareerEventTarget::NONE;
    this->MemA_Disp = ECareerEventDisp::NONE;
    this->MemB_Disp = ECareerEventDisp::NONE;
    this->MemC_Disp = ECareerEventDisp::NONE;
    this->MemD_Disp = ECareerEventDisp::NONE;
}

