#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EManaComponentStatus.h"
#include "GameFramework/Actor.h"
#include "ELMovieManagerBase.generated.h"

class UManaMovie;

UCLASS(Blueprintable)
class ABP_200508_API AELMovieManagerBase : public AActor {
    GENERATED_BODY()
public:
    AELMovieManagerBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Seek(int32 MovieSlotID, FTimespan AddTime, FName MovieDataIDName, bool IsDebug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMovie(int32 MovieSlotID, int32 MovieSlotIDAlpha, FName MovieDataIDName, bool IsMovieLoop, bool IsPlayableWhenPause, float& TotalSecond, bool& IsAlpha, float& FadeInSecond, float& FadeOutSecond);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAlpha(int32 MovieSlotID, FName MovieDataIDName, bool IsMovieLoop, bool IsPlayableWhenPause, float& TotalSecond, float& FadeInSecond, float& FadeOutSecond);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Play(int32 MovieSlotID, FName MovieDataIDName, bool IsMovieLoop, bool IsPlayableWhenPause, bool IsDebug, float& TotalSecond, float& FadeInSecond, float& FadeOutSecond);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Pause(int32 MovieSlotID, bool StartPause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    void GetStatus(bool IsAlphaMovie, int32 MovieSlotID, EManaComponentStatus& Result);
    
    UFUNCTION(BlueprintCallable)
    static TSoftObjectPtr<UManaMovie> GetManaMovie(const FString& MoviePath);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyAlpha(int32 MovieSlotID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Destroy(int32 MovieSlotID);
    
};

