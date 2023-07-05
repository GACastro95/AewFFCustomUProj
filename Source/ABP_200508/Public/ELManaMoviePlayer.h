#pragma once
#include "CoreMinimal.h"
#include "ELMoviePlayerBase.h"
#include "ELManaMoviePlayer.generated.h"

class UManaMovie;
class UManaPlayer;
class UManaTexture;

UCLASS(Blueprintable)
class ABP_200508_API UELManaMoviePlayer : public UELMoviePlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UManaPlayer* m_pManaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UManaTexture> m_pManaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UManaMovie> m_pManaMovie;
    
public:
    UELManaMoviePlayer();
    UFUNCTION(BlueprintCallable)
    static bool ResourceExist(const FString& MoviePath);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTracksChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnSeekCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnPlaybackSuspended();
    
    UFUNCTION(BlueprintCallable)
    void OnPlaybackResumed();
    
    UFUNCTION(BlueprintCallable)
    void OnMovieOpenFailed(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieClosed();
    
    UFUNCTION(BlueprintCallable)
    void OnEndReached();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetManaTexture(UManaTexture*& ManaTexture);
    
    UFUNCTION(BlueprintCallable)
    bool GetManaPlayer(UManaPlayer*& ManaPlayer);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeMovieResourceForManaMovie(UManaMovie* ManaMovie);
    
};

