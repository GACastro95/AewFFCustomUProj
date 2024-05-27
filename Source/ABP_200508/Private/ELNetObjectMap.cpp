#include "ELNetObjectMap.h"

UELNetObjectMap::UELNetObjectMap() {
}

bool UELNetObjectMap::RemoveObjectById(FELNetworkGUID Guid) {
    return false;
}

bool UELNetObjectMap::RemoveObject(const UObject* Object) {
    return false;
}

void UELNetObjectMap::Initialize() {
}

UObject* UELNetObjectMap::GetObject(FELNetworkGUID Guid) const {
    return NULL;
}

FELNetworkGUID UELNetObjectMap::GetGuid(const UObject* Object) const {
    return FELNetworkGUID{};
}

bool UELNetObjectMap::ContainsObject(const UObject* Object) const {
    return false;
}

bool UELNetObjectMap::AddSpecialObject(EELNetObjectGuid Guid, const UObject* Object) {
    return false;
}

bool UELNetObjectMap::AddObject(FELNetworkGUID Guid, const UObject* Object) {
    return false;
}


