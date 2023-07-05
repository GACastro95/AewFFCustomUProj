#include "ABPBuild.h"

FString UABPBuild::GetVersion(bool _bGetSubminorVersion) {
    return TEXT("");
}

int32 UABPBuild::GetSubMinorVersion() {
    return 0;
}

int32 UABPBuild::GetMinorVersion() {
    return 0;
}

int32 UABPBuild::GetMajorVersion() {
    return 0;
}

FString UABPBuild::GetBuildTime() {
    return TEXT("");
}

FString UABPBuild::GetBuildDate_Numeric() {
    return TEXT("");
}

FString UABPBuild::GetBuildDate() {
    return TEXT("");
}

bool UABPBuild::CreateABPBuild(UABPBuild*& _pcInst) {
    return false;
}

UABPBuild::UABPBuild() {
}

