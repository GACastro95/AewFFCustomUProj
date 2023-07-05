#include "EOSSessionP2PLatencyCheckPacket.h"

void UEOSSessionP2PLatencyCheckPacket::Reset() {
}

bool UEOSSessionP2PLatencyCheckPacket::MeasureAndIncremnt() {
    return false;
}

void UEOSSessionP2PLatencyCheckPacket::Measure() {
}

bool UEOSSessionP2PLatencyCheckPacket::IsStartedMeasure() const {
    return false;
}

bool UEOSSessionP2PLatencyCheckPacket::IsFirstUser() const {
    return false;
}

bool UEOSSessionP2PLatencyCheckPacket::IsEndCount() const {
    return false;
}

float UEOSSessionP2PLatencyCheckPacket::GetMin() const {
    return 0.0f;
}

float UEOSSessionP2PLatencyCheckPacket::GetMax() const {
    return 0.0f;
}

float UEOSSessionP2PLatencyCheckPacket::GetAverage() const {
    return 0.0f;
}

bool UEOSSessionP2PLatencyCheckPacket::CheckTimeout(float _fSeconds) {
    return false;
}

UEOSSessionP2PLatencyCheckPacket::UEOSSessionP2PLatencyCheckPacket() {
}

