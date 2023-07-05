#include "ELKeyConfigDeviceWidgetBase.h"

EKeyConfigDeviceType UELKeyConfigDeviceWidgetBase::GetDeviceType() const {
    return EKeyConfigDeviceType::NONE;
}

UELKeyConfigDeviceWidgetBase::UELKeyConfigDeviceWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->m_DeviceType = EKeyConfigDeviceType::NONE;
}

