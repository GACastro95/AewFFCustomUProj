#include "ELMovieControlBase.h"

UELMovieControlBase::UELMovieControlBase() {
}

bool UELMovieControlBase::SuspendAll(TArray<int32> Excludes) {
    return false;
}

bool UELMovieControlBase::StopAll(TArray<int32> Excludes) {
    return false;
}

UELMoviePlayerBase* UELMovieControlBase::StartPrepare(int32 MovieSlotID, FName MovieDataID, bool Loop) {
    return NULL;
}

bool UELMovieControlBase::SetupWithTexturePath(UELMoviePlayerBase*& Player, int32 SlotNo, const FString& TexturePath, bool IsLooping, bool DropOldMovie, EMovieType MovieType) {
    return false;
}

bool UELMovieControlBase::SetupWithTexture(UELMoviePlayerBase*& Player, int32 SlotNo, UTexture* Texture, bool IsLooping, bool DropOldMovie, EMovieType MovieType) {
    return false;
}

bool UELMovieControlBase::Setup(UELMoviePlayerBase*& Player, int32 SlotNo, bool IsLooping, bool DropOldMovie, EMovieType MovieType) {
    return false;
}

bool UELMovieControlBase::SetTexturePathList(TMap<int32, FString> TexturePaths) {
    return false;
}

bool UELMovieControlBase::SetTextureList(TMap<int32, UTexture*> Textures) {
    return false;
}

bool UELMovieControlBase::SeekAll(float Time, TArray<int32> Excludes) {
    return false;
}

bool UELMovieControlBase::ResumeAll(TArray<int32> Excludes) {
    return false;
}

bool UELMovieControlBase::PlayAll(TArray<int32> Excludes) {
    return false;
}

bool UELMovieControlBase::IsStreamerMode() {
    return false;
}

bool UELMovieControlBase::IsPreparedAll(TArray<int32> Excludes) {
    return false;
}

bool UELMovieControlBase::IsAlphaMovie(int32 MovieSlotID) const {
    return false;
}

bool UELMovieControlBase::GetPlayer(UELMoviePlayerBase*& Player, int32 SlotNo) {
    return false;
}



bool UELMovieControlBase::DestroyAll() {
    return false;
}

bool UELMovieControlBase::Destroy(int32 SlotNo) {
    return false;
}

bool UELMovieControlBase::CreateMovieControl(UELMovieControlBase* ELMovieControlBase) {
    return false;
}

bool UELMovieControlBase::ChangeMovieResource(UELMoviePlayerBase*& Player, int32 SlotNo, const FString& MoviePath, bool IsLooping) {
    return false;
}


