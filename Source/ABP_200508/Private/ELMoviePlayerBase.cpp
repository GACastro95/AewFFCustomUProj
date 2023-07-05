#include "ELMoviePlayerBase.h"

bool UELMoviePlayerBase::Stop() {
    return false;
}

bool UELMoviePlayerBase::SetupWithTexturePath(int32 SlotID, const FString& TexturePath, bool IsLooping) {
    return false;
}

bool UELMoviePlayerBase::Setup(int32 SlotNo, UTexture* Texture, bool IsLooping) {
    return false;
}

bool UELMoviePlayerBase::SetLooping(bool Looping) {
    return false;
}

void UELMoviePlayerBase::SetDebugOn() {
}

void UELMoviePlayerBase::SetDebugOff() {
}

bool UELMoviePlayerBase::SetAudioVolume(float Volume) {
    return false;
}

bool UELMoviePlayerBase::Seek(float TimeSeconds) {
    return false;
}

bool UELMoviePlayerBase::Prepare() {
    return false;
}

bool UELMoviePlayerBase::Play() {
    return false;
}

bool UELMoviePlayerBase::Pause(bool StartPause) {
    return false;
}

bool UELMoviePlayerBase::IsPrepared() {
    return false;
}

bool UELMoviePlayerBase::IsPaused() {
    return false;
}

bool UELMoviePlayerBase::IsDebugOn() const {
    return false;
}

bool UELMoviePlayerBase::IsAlpha() const {
    return false;
}

bool UELMoviePlayerBase::IsActive() {
    return false;
}

FString UELMoviePlayerBase::GetTexturePath() const {
    return TEXT("");
}

bool UELMoviePlayerBase::GetStatus(EMoviePlayerStatus& Result) {
    return false;
}

int32 UELMoviePlayerBase::GetSlotNo() const {
    return 0;
}

float UELMoviePlayerBase::GetMovieTime() {
    return 0.0f;
}

FString UELMoviePlayerBase::GetMoviePath() const {
    return TEXT("");
}

int32 UELMoviePlayerBase::GetFrames(bool ByTotalPlayingTime) {
    return 0;
}

float UELMoviePlayerBase::GetDuration() {
    return 0.0f;
}

bool UELMoviePlayerBase::GetAudioVolume(float& Volume) {
    return false;
}

bool UELMoviePlayerBase::Destroy() {
    return false;
}

bool UELMoviePlayerBase::ChangeMovieResource(const FString& MoviePath) {
    return false;
}

UELMoviePlayerBase::UELMoviePlayerBase() {
}

