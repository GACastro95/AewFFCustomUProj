#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "GameFramework/Actor.h"
#include "ESSWrestlerType.h"
#include "SSVictoryCutsceneParam.h"
#include "ELSSVictoryCutscene.generated.h"

class ACharacter;
class AELSSPlayer;
class ALevelSequenceActor;
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
    FSSVictoryCutsceneParam CutsceneParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* targetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDonePlay;
    
public:
    AELSSVictoryCutscene();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void Skip();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Prepare(EWrestlerID_N NewWrestlerID, ESSWrestlerType WrestlerType, ACharacter* NewTargetCharacter, AELSSPlayer* TargetPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlaySoundAnnounce();
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterMontage();
    
    UFUNCTION(BlueprintCallable)
    void PlayCharacterLoopMontage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBGM();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Play();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFinishedPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEditWrestlerMusicId(bool& out_success, int32& out_musicId) const;
    
};

