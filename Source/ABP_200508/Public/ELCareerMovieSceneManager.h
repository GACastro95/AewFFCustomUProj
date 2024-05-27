#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerMovieSceneState.h"
#include "ELCareerMovieSceneManager.generated.h"

class AELCareerSequencePlayerBase;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerMovieSceneManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELCareerSequencePlayerBase* m_pSequencePlayer;
    
    AELCareerMovieSceneManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSubtitles(const FString& TextID, float fDispTime);
    
    UFUNCTION(BlueprintCallable)
    void SetState(ECareerMovieSceneState State);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishState();
    
    UFUNCTION(BlueprintCallable)
    void DisableUpdateWidget();
    
    UFUNCTION(BlueprintCallable)
    void CheckState(int32 _value);
    
};

