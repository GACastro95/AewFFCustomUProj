#include "ELSSOutGameUtility.h"

EWrestlerPresetButtonType UELSSOutGameUtility::GetWrestlerPresetButtonType(const int32 btmId) {
    return EWrestlerPresetButtonType::EWrestlerPresetButtonType_Preset;
}

ESSWrestlerType UELSSOutGameUtility::GetSSWrestlerType(const int32 typeId) {
    return ESSWrestlerType::None;
}

EMainMenuTopSelectWidgetType UELSSOutGameUtility::GetSSMainMenuTopSelectWidgetType(const int32 typeId) {
    return EMainMenuTopSelectWidgetType::EMainMenuTopSelectWidgetType_Play;
}

EMainMenuSubWidgetType UELSSOutGameUtility::GetMainMenuSelectTabType(const int32 menuId) {
    return EMainMenuSubWidgetType::EMainMenuSubWidgetType_Play;
}

UELSSOutGameUtility::UELSSOutGameUtility() {
}

