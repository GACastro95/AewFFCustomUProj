#include "ELManaMoviePlayer.h"

UELManaMoviePlayer::UELManaMoviePlayer() {
    this->m_pManaPlayer = NULL;
}

bool UELManaMoviePlayer::ResourceExist(const FString& MoviePath) {
    return false;
}

void UELManaMoviePlayer::OnTracksChanged() {
}

void UELManaMoviePlayer::OnSeekCompleted() {
}

void UELManaMoviePlayer::OnPlaybackSuspended() {
}

void UELManaMoviePlayer::OnPlaybackResumed() {
}

void UELManaMoviePlayer::OnMovieOpenFailed(const FString& OpenedUrl) {
}

void UELManaMoviePlayer::OnMovieOpened(const FString& OpenedUrl) {
}

void UELManaMoviePlayer::OnMovieClosed() {
}

void UELManaMoviePlayer::OnEndReached() {
}

bool UELManaMoviePlayer::GetManaTexture(UManaTexture*& ManaTexture) {
    return false;
}

bool UELManaMoviePlayer::GetManaPlayer(UManaPlayer*& ManaPlayer) {
    return false;
}

bool UELManaMoviePlayer::ChangeMovieResourceForManaMovie(UManaMovie* ManaMovie) {
    return false;
}


