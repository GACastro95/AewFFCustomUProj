#include "ELCareerRecordsWidgetBase.h"

UELCareerRecordsWidgetBase::UELCareerRecordsWidgetBase() {
}



bool UELCareerRecordsWidgetBase::IsBeltDispThumbnail(EELBelt eBelt) {
    return false;
}

EELBelt UELCareerRecordsWidgetBase::GetBeltHighestRank() {
    return EELBelt::None;
}


