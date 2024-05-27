#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SSVictoryCutsceneCharaSetting.h"
#include "SSVictoryCutsceneParam.h"
#include "SSWrestlerSetupParam.h"
#include "ELSSVictoryCutscene.generated.h"

class ACharacter;
class ALevelSequenceActor;
class UAnimMontage;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSVictoryCutscene : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* LSPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LSActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Locator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSVictoryCutsceneParam CutsceneParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDonePlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSVictoryCutsceneCharaSetting> CharaSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> SpawnedCharas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamCharaPlaceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TeamCharaEffectTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamCharaEffectDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeamCharaMotionDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> TeamMontages;
    
public:
    AELSSVictoryCutscene(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopBGM();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnCharaEffect(const FTransform& inWorldTransform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ACharacter* SpawnChara(const FSSVictoryCutsceneCharaSetting& inSetting);
    
    UFUNCTION(BlueprintCallable)
    void Skip();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Prepare(const TArray<FSSVictoryCutsceneCharaSetting>& inCharaSettings);
    
    UFUNCTION(BlueprintCallable)
    bool PlayCutscene();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGM(const FSSWrestlerSetupParam& inSSWrestlerSetupParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEditWrestlerMusicId(bool& out_success, int32& out_musicId) const;
    
};

