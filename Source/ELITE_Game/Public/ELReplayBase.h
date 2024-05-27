#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Animation/PoseSnapshot.h"
#include "ELHighlightReplayParam.h"
#include "ELReplayBase.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_GAME_API UELReplayBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TickTime;
    
public:
    UELReplayBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopReplay();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartRec();
    
    UFUNCTION(BlueprintCallable)
    void SetSnapshotPoseTransform_N(UPARAM(Ref) FPoseSnapshot& Pose, UPARAM(Ref) FTransform& Transform);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHitParticle(UParticleSystem* Particle, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightReplayParam(const FELHighlightReplayParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageLv(int32 DamageLv, bool Critical);
    
    UFUNCTION(BlueprintCallable)
    void ResolveReplay(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RequestPlayReplay(float ReplayDuration);
    
    UFUNCTION(BlueprintCallable)
    void RequestBackupRecord(int32 Index, float DelayTime);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlowTime(float BeginTime, float EndTime) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayReplay() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalRecordTime() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void GetReplayParam(FPoseSnapshot& PlayerPose, FPoseSnapshot& PlayerNextPose, FTransform& PlayerTransform, FTransform& PlayerNextTransform, UParticleSystem*& Particle, FTransform& ParticleTransform, int32& DamageLv, bool& Critical, float& InterpolateValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELHighlightReplayParam GetHighlightReplayParam() const;
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ConvertReplayIndex_N(int32& Index, float& Rate, const float Sec) const;
    
};

