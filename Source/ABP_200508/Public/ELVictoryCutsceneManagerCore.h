#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EELVictoryCutsceneType.h"
#include "ELNetActor.h"
#include "ELVictoryCutsceneManagerCore.generated.h"

class AELCharacter_Native;
class ALevelSequenceActor;
class UAnimMontage;
class UDataTable;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELVictoryCutsceneManagerCore : public AELNetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IntractiveVictoryParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VictoryCutsceneParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* VictoryCutsceneAnimation;
    
    AELVictoryCutsceneManagerCore(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadAssets();
    
    UFUNCTION(BlueprintCallable)
    ALevelSequenceActor* StartVictoryMotion(float MotionTime, int32 InBeltPropID);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacters(AELCharacter_Native* Winner, AELCharacter_Native* Loser);
    
    UFUNCTION(BlueprintCallable)
    void SetCastInfo(int32 CastID, AELCharacter_Native* Character, USkeletalMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnEndVictoryMotion_N();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndVictoryMotion_Impl();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompletedLoad_BP();
    
    UFUNCTION(BlueprintCallable)
    void LoadAsset(EELVictoryCutsceneType CutSceneType, int32 WrestlerNum, bool IsTagMatch, bool IsBattleRoyale, int32 WinTeamNo, int32 LoseTeamNo);
    
protected:
    UFUNCTION(BlueprintCallable)
    AELCharacter_Native* GetWinner();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetMontageParameterForReferee(UAnimMontage*& Montage, FVector& Location, FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    bool GetMontageParameter(AELCharacter_Native* Character, bool IsManager, int32 TeamNo, bool IsPlaceRing, UAnimMontage*& Montage, FVector& Location, FRotator& Rotation, int32& CastID);
    
protected:
    UFUNCTION(BlueprintCallable)
    AELCharacter_Native* GetLoser();
    
};

