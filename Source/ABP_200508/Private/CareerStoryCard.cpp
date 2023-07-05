#include "CareerStoryCard.h"

FCareerStoryCard::FCareerStoryCard() {
    this->eSize = ECareerStoryCardSize::VeryShort;
    this->ePart = ECareerScenarioPart::NONE;
    this->ePartnerType = ECareerStoryCardWrestlerSpecify::None;
    this->ePartner = EWrestlerID_N::None;
    this->eOpponentTypeA = ECareerStoryCardWrestlerSpecify::None;
    this->eOpponentA = EWrestlerID_N::None;
    this->eOpponentTypeB = ECareerStoryCardWrestlerSpecify::None;
    this->eOpponentB = EWrestlerID_N::None;
    this->eOpponentTypeC = ECareerStoryCardWrestlerSpecify::None;
    this->eOpponentC = EWrestlerID_N::None;
    this->eOpponentTypeD = ECareerStoryCardWrestlerSpecify::None;
    this->eOpponentD = EWrestlerID_N::None;
    this->eSameWrestlerChange = EWrestlerID_N::None;
    this->ePartnerRivalTypeA = ECareerStoryCardWrestlerSpecify::None;
    this->ePartnerRivalA = EWrestlerID_N::None;
    this->ePartnerRivalTypeB = ECareerStoryCardWrestlerSpecify::None;
    this->ePartnerRivalB = EWrestlerID_N::None;
    this->ePartnerRivalTypeC = ECareerStoryCardWrestlerSpecify::None;
    this->ePartnerRivalC = EWrestlerID_N::None;
    this->ePartnerRivalTypeD = ECareerStoryCardWrestlerSpecify::None;
    this->ePartnerRivalD = EWrestlerID_N::None;
    this->eSpecialRewardA = ECareerStoryCardSpecialReward::None;
    this->eRegularRewardA1 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueA1 = 0;
    this->eRegularRewardA2 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueA2 = 0;
    this->eRegularRewardA3 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueA3 = 0;
    this->eRegularRewardA4 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueA4 = 0;
    this->eSpecialRewardB = ECareerStoryCardSpecialReward::None;
    this->eRegularRewardB1 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueB1 = 0;
    this->eRegularRewardB2 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueB2 = 0;
    this->eRegularRewardB3 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueB3 = 0;
    this->eRegularRewardB4 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueB4 = 0;
    this->eSpecialRewardC = ECareerStoryCardSpecialReward::None;
    this->eRegularRewardC1 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueC1 = 0;
    this->eRegularRewardC2 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueC2 = 0;
    this->eRegularRewardC3 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueC3 = 0;
    this->eRegularRewardC4 = ECareerStoryCardRegularReward::None;
    this->sRegularRewardValueC4 = 0;
}

