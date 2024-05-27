#include "ELKeyConfigDeviceWidgetBase.h"

UELKeyConfigDeviceWidgetBase::UELKeyConfigDeviceWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->m_DeviceType = EKeyConfigDeviceType::NONE;
}

EKeyConfigDeviceType UELKeyConfigDeviceWidgetBase::GetDeviceType() const {
    return EKeyConfigDeviceType::NONE;
}


