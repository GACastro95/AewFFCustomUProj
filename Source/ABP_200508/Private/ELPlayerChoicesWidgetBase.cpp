#include "ELPlayerChoicesWidgetBase.h"

void UELPlayerChoicesWidgetBase::SetTitleText(FText _TitleText) {
}

void UELPlayerChoicesWidgetBase::SetTitleKey(const FString& _TitleKey) {
}

void UELPlayerChoicesWidgetBase::SetPlayerChoiceWidgetOpen(bool _bOpen) {
}

void UELPlayerChoicesWidgetBase::SetPlayerChoicesText(TArray<FText> _PlayerChoicesText) {
}

void UELPlayerChoicesWidgetBase::SetDecision(bool _bDecision) {
}

bool UELPlayerChoicesWidgetBase::IsPlayerChoiceWidgetOpen() {
    return false;
}

bool UELPlayerChoicesWidgetBase::IsDecision() {
    return false;
}

FText UELPlayerChoicesWidgetBase::GetTitleText() {
    return FText::GetEmpty();
}

FString UELPlayerChoicesWidgetBase::GetTitleKey() {
    return TEXT("");
}

TArray<FText> UELPlayerChoicesWidgetBase::GetPlayerChoicesText() {
    return TArray<FText>();
}

UELPlayerChoicesWidgetBase::UELPlayerChoicesWidgetBase() {
}

