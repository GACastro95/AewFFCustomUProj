#include "CareerMatch.h"

FCareerMatch::FCareerMatch() {
    this->MatchType = ECareerMatchType::SINGLE;
    this->MemberTypeA = ECareerMemberType::NONE;
    this->MemberA = EWrestlerID_N::None;
    this->MemberTypeB = ECareerMemberType::NONE;
    this->MemberB = EWrestlerID_N::None;
    this->MemberTypeC = ECareerMemberType::NONE;
    this->MemberC = EWrestlerID_N::None;
    this->MemberTypeD = ECareerMemberType::NONE;
    this->MemberD = EWrestlerID_N::None;
}

