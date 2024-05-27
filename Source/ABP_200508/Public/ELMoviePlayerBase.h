#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMoviePlayerStatus.h"
#include "MoviePlayerEventDelegate.h"
#include "ELMoviePlayerBase.generated.h"

class UTexture;

UCLASS(Blueprintable)
class ABP_200508_API UELMoviePlayerBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoviePlayerEvent OnMoviePlayerEvent;
    
    UELMoviePlayerBase();

    UFUNCTION(BlueprintCallable)
    bool Stop();
    
    UFUNCTION(BlueprintCallable)
    bool SetupWithTexturePath(int32 SlotID, const FString& TexturePath, bool IsLooping);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(int32 SlotNo, UTexture* Texture, bool IsLooping);
    
    UFUNCTION(BlueprintCallable)
    bool SetLooping(bool Looping);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugOn();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugOff();
    
    UFUNCTION(BlueprintCallable)
    bool SetAudioVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(float TimeSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool Prepare();
    
    UFUNCTION(BlueprintCallable)
    bool Play();
    
    UFUNCTION(BlueprintCallable)
    bool Pause(bool StartPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsPrepared();
    
    UFUNCTION(BlueprintCallable)
    bool IsPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTexturePath() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetStatus(EMoviePlayerStatus& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotNo() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMovieTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMoviePath() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFrames(bool ByTotalPlayingTime);
    
    UFUNCTION(BlueprintCallable)
    float GetDuration();
    
    UFUNCTION(BlueprintCallable)
    bool GetAudioVolume(float& Volume);
    
    UFUNCTION(BlueprintCallable)
    bool Destroy();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeMovieResource(const FString& MoviePath);
    
};

