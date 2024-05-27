#include "ELGeneralFontBase.h"

UELGeneralFontBase::UELGeneralFontBase() : UUserWidget(FObjectInitializer::Get()) {
    this->m_ButtonIconType = EDisplayButtonIconType::NotSpecified;
}

void UELGeneralFontBase::ValidForceDisplayIconType(EDisplayButtonIconType _changeIconType) {
}


void UELGeneralFontBase::ReplaceUnsupportedCharacter(const UFont* Font, const FString& SourceStr, FString& OutStr) {
}

void UELGeneralFontBase::InvalidForceDisplayIconType() {
}


void UELGeneralFontBase::ChangeForceDisplayIconType_Implementation(EDisplayButtonIconType _changeIconType) {
}


