#include "CareerUseTurnCursor.h"

FCareerUseTurnCursor::FCareerUseTurnCursor() {
    this->Widget = NULL;
    this->Identify = ECareerHUBMenuUseTurn::WorkoutOrHospital;
    this->EventMark = ECareerPostCommandEventMark::None;
    this->GrayOut = false;
    this->DecisionCommandOffset = 0;
    this->PanelBGTexture = NULL;
}

