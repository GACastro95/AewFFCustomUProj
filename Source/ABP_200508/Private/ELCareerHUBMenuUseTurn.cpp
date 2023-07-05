#include "ELCareerHUBMenuUseTurn.h"

void UELCareerHUBMenuUseTurn::SetMenuTopState(bool IsTop) {
}




bool UELCareerHUBMenuUseTurn::IsMenuTop() const {
    return false;
}

bool UELCareerHUBMenuUseTurn::IsEvent(ECareerPostCommandEventType _PostCommandType, int32& _StoryCardNumber) {
    return false;
}


int32 UELCareerHUBMenuUseTurn::GetPostCommandEventNumber(ECareerPostCommandEventType _PostCommandType) {
    return 0;
}

ECareerHUBMenuGotoLogo UELCareerHUBMenuUseTurn::GetGotoLogo() {
    return ECareerHUBMenuGotoLogo::GotoDynamite;
}

ECareerPostCommandEventMark UELCareerHUBMenuUseTurn::GetEventMark(ECareerPostCommandEventType _PostCommandType, int32& _StoryCardNumber) {
    return ECareerPostCommandEventMark::None;
}


UELCareerHUBMenuUseTurn::UELCareerHUBMenuUseTurn() {
}

