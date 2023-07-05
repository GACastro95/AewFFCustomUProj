#include "EOSNatP2PSerializedObjectPacket.h"

bool UEOSNatP2PSerializedObjectPacket::SetObject(UObject* _pcObject, int32 _sType, int32 _sId) {
    return false;
}

int32 UEOSNatP2PSerializedObjectPacket::GetType() const {
    return 0;
}

int32 UEOSNatP2PSerializedObjectPacket::GetId() const {
    return 0;
}

UObject* UEOSNatP2PSerializedObjectPacket::CreateObject(UObject* Outer) {
    return NULL;
}

UEOSNatP2PSerializedObjectPacket::UEOSNatP2PSerializedObjectPacket() {
}

