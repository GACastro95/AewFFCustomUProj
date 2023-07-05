#include "UtilityFunction.h"

float UUtilityFunction::TwoVectorsFromAngle(FVector _Vec1, FVector _Vec2) {
    return 0.0f;
}

void UUtilityFunction::StopLoadingScreen() {
}

TArray<AActor*> UUtilityFunction::SortArray(TArray<AActor*> _Array) {
    return TArray<AActor*>();
}

void UUtilityFunction::SetXeSS_OptionIndex(int32 Index) {
}

void UUtilityFunction::SetWindowModeWithWorld(UObject* WorldContextObject, int32 Mode) {
}

void UUtilityFunction::SetWindowMode(UObject* _pWorldContextObject, int32 _sMode) {
}

void UUtilityFunction::SetViewDistanceQuality(int32 _sQuality) {
}

void UUtilityFunction::SetTextureQuality(int32 _sQuality) {
}

void UUtilityFunction::SetShadowQuality(int32 _sQuality) {
}

void UUtilityFunction::SetScreenResolutionWithWorld(UObject* WorldContextObject, FIntPoint Resolution) {
}

void UUtilityFunction::SetScreenResolution(UObject* _pWorldContextObject, FIntPoint _Resolution) {
}

void UUtilityFunction::SetResolutionQualityWithWorld(UObject* WorldContextObject, int32 Quality) {
}

void UUtilityFunction::SetResolutionQuality(UObject* _pWorldContextObject, int32 _sQuality) {
}

void UUtilityFunction::SetPostPrecessQuality(int32 _sQuality) {
}

bool UUtilityFunction::SetMotionBlur(APlayerController* _Controller, bool _bEnable) {
    return false;
}

void UUtilityFunction::SetFoliageQuality(int32 _sQuality) {
}

void UUtilityFunction::SetEnableVSync(bool _bEnable) {
}

void UUtilityFunction::SetEnableLoadingScreen(bool _Enable) {
}

void UUtilityFunction::SetEnableDynamicShadow(UObject* _pWorldContextObject, bool _bEnable) {
}

void UUtilityFunction::SetDLSS_OptionIndex(int32 Index) {
}

void UUtilityFunction::SetAntiAliasingQuality(int32 _sQuality) {
}

void UUtilityFunction::RotateVectorToTarget(FVector _StartVec, FVector _TargetVec, FRotator& _rOutRot) {
}

bool UUtilityFunction::RequiresVirtualKeyboard() {
    return false;
}

void UUtilityFunction::PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime) {
}

void UUtilityFunction::OperationalWidgetManagerCloseAllWidgets() {
}

bool UUtilityFunction::IsTestBuild() {
    return false;
}

bool UUtilityFunction::IsSystemEnterAssignCircle() {
    return false;
}

bool UUtilityFunction::IsShipping() {
    return false;
}

bool UUtilityFunction::IsSamePlatformGroup(const UObject* WorldContextObject, EPlatformType Platform) {
    return false;
}

bool UUtilityFunction::IsPlatformXBox(const UObject* WorldContextObject) {
    return false;
}

bool UUtilityFunction::IsPlatformWindows(const UObject* WorldContextObject) {
    return false;
}

bool UUtilityFunction::IsPlatformSteam(const UObject* WorldContextObject) {
    return false;
}

bool UUtilityFunction::IsPlatformPlayStation(const UObject* WorldContextObject) {
    return false;
}

bool UUtilityFunction::IsPlatformEpic(const UObject* WorldContextObject) {
    return false;
}

bool UUtilityFunction::IsNullOnlineSubsystem(const UObject* WorldContextObject) {
    return false;
}

bool UUtilityFunction::IsLoadInGameAnimation() {
    return false;
}

bool UUtilityFunction::IsEditor_NotGame() {
    return false;
}

bool UUtilityFunction::IsEditor() {
    return false;
}

int32 UUtilityFunction::GetWindowMode(UObject* _pWorldContextObject) {
    return 0;
}

FIntPoint UUtilityFunction::GetScreenResolution(UObject* _pWorldContextObject) {
    return FIntPoint{};
}

EPlatformType UUtilityFunction::GetPlatform(const UObject* WorldContextObject) {
    return EPlatformType::PLATFORM_TYPE_WINDOWS;
}

FIntPoint UUtilityFunction::GetMaxSupportedFullscreenResolution() {
    return FIntPoint{};
}

FString UUtilityFunction::GetGpuInfo() {
    return TEXT("");
}

float UUtilityFunction::GetGameCameraAspectRatio(UObject* WorldContextObject) {
    return 0.0f;
}

FString UUtilityFunction::GetCpuInfo() {
    return TEXT("");
}

void UUtilityFunction::AdjustFullScreenResolution(UObject* _pWorldContextObject) {
}

UUtilityFunction::UUtilityFunction() {
}

