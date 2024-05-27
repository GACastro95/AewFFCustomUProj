#include "ELMovieImageBase.h"

UELMovieImageBase::UELMovieImageBase() : UUserWidget(FObjectInitializer::Get()) {
}

void UELMovieImageBase::StopMovie_N() {
}

void UELMovieImageBase::StartPrepare_N(int32 MovieSlotID, const FName& MovieDataID, bool Loop, bool InAutoPlay, float& FadeInTime, float& FadeOutTime, float& TotalTime) {
}

void UELMovieImageBase::SetupTextureSimple_N(UImage* TargetImage, int32 MovieSlotID) {
}


void UELMovieImageBase::SetupTexture_N(UImage* TargetImage, int32 MovieSlotID) {
}

void UELMovieImageBase::SetTextureList(TArray<UManaTexture*> InTextureList) {
}

void UELMovieImageBase::PlayerEventSetVisibleOnly(EMoviePlayerEvent EventType, UELMoviePlayerBase* MoviePlayerBase) {
}

UELMoviePlayerBase* UELMovieImageBase::GetMoviePlayer() {
    return NULL;
}


