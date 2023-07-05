#include "MenuWidgetSubsystem.h"
#include "Templates/SubclassOf.h"

void UMenuWidgetSubsystem::SetupBottomHelpManager() {
}

void UMenuWidgetSubsystem::SetShowCommonLayoutWidget(const bool bNewValue) {
}

bool UMenuWidgetSubsystem::IsShowCommonLayoutWidget() const {
    return false;
}

UELMenuNotifyOnlineErrorManager* UMenuWidgetSubsystem::GetMenuNotifyOnlineErrorManager() const {
    return NULL;
}

UELLocalizeFontManager* UMenuWidgetSubsystem::GetLocalizeFontManager() const {
    return NULL;
}

UUserWidget* UMenuWidgetSubsystem::GetCommonLayout(bool& bResult, const TSubclassOf<UUserWidget> Class) {
    return NULL;
}

UELBottomHelpManager* UMenuWidgetSubsystem::GetBottomHelpManager() const {
    return NULL;
}

UMenuWidgetSubsystem::UMenuWidgetSubsystem() {
    this->m_BottomHelpManager = NULL;
    this->m_LocalizeFontManager = NULL;
    this->m_MenuNotifyOnlineErrorManager = NULL;
    this->bLayoutWidgetVisible = true;
}

