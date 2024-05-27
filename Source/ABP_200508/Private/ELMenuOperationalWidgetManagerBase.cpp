#include "ELMenuOperationalWidgetManagerBase.h"

AELMenuOperationalWidgetManagerBase::AELMenuOperationalWidgetManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnableInput1P = true;
    this->IsChangeBrother = false;
    this->IsUpdateKeyConfig = false;
    this->MenuWidgetArray.AddDefaulted(75);
}

void AELMenuOperationalWidgetManagerBase::SetManagedMenuWidget(UELOperationalWidgetBase* MenuWidget, yEnMenuWidgetType Type) {
}

void AELMenuOperationalWidgetManagerBase::SetCurrentWidget(yEnMenuWidgetType Type) {
}

UELOperationalWidgetBase* AELMenuOperationalWidgetManagerBase::GetWidget(yEnMenuWidgetType eMenuWidgetType) const {
    return NULL;
}

TArray<UELOperationalWidgetBase*> AELMenuOperationalWidgetManagerBase::GetMenuWidgetArray() const {
    return TArray<UELOperationalWidgetBase*>();
}

yEnMenuWidgetType AELMenuOperationalWidgetManagerBase::GetManagedMenuWidgetType(UELOperationalWidgetBase* MenuWidget) const {
    return yEnMenuWidgetType::None;
}

yEnMenuWidgetType AELMenuOperationalWidgetManagerBase::GetCurrentWidgetType() const {
    return yEnMenuWidgetType::None;
}

UELOperationalWidgetBase* AELMenuOperationalWidgetManagerBase::GetCurrentWidget() const {
    return NULL;
}

void AELMenuOperationalWidgetManagerBase::CloseAllWidgets() {
}


