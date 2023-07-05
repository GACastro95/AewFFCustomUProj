#include "ELShopTestWidgetBase.h"

void UELShopTestWidgetBase::UpdataGoldNum(int32 _value) {
}

void UELShopTestWidgetBase::SetShopItemNum(int32 _num) {
}

void UELShopTestWidgetBase::SetDispHorizontalListNum(int32 _num) {
}

void UELShopTestWidgetBase::OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress) {
}







ERequestGoldCheckType UELShopTestWidgetBase::GetRequestGoldCheckType() {
    return ERequestGoldCheckType::NONE;
}

USaveDataObjectBase* UELShopTestWidgetBase::GetLocalPlayerDataObject() const {
    return NULL;
}

void UELShopTestWidgetBase::CreateLocalPlayerDataObject(USaveDataSystem* _saveDataSystem) {
}

void UELShopTestWidgetBase::CheckCurrentGoldNum(ERequestGoldCheckType _checkType) {
}

UELShopTestWidgetBase::UELShopTestWidgetBase() {
    this->m_pcPlayerDataObject = NULL;
}

