#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELSSActorCommonInterface.h"
#include "ESSStormPositionRelation.h"
#include "ESSStormState.h"
#include "SSStormFinalParam.h"
#include "SSStormPhaseParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSStorm.generated.h"

class AELSSStormAnchor;
class AELSSStormZone;
class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API AELSSStorm : public AActor, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSStormZone> zoneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSStormZone* zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSStormAnchor*> Anchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* finalParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSStormFinalParam finalParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector finalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector finalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndShrinkSE_PlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSStormPhaseParam> StormParams;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    AELSSStorm(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateZone(float timeSinceStart);
    
public:
    UFUNCTION(BlueprintCallable)
    void Update(float timeSinceStart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSStormPositionRelation ToPositionRelation(const FVector& Location) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupCourse();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinalPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSStormZone* GetZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSStormState GetStormState(float timeSinceStart) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSStormState GetCurrentStormState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPhaseTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSStormAnchor* GetCurrentAnchor() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    AELSSStormAnchor* GetAnchor(int32 phaseLevel) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndDamageAreaSE();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetupCourse();
    
    UFUNCTION(BlueprintCallable)
    void DebugDrawCourse(float Time);
    
protected:
    UFUNCTION(BlueprintCallable)
    AELSSStormAnchor* CreateAnchor(const FSSStormPhaseParam& phaseParam, AELSSStormAnchor* prevAnchor);
    
    UFUNCTION(BlueprintCallable)
    float CalcShrinkStartTime(int32 phaseLevel);
    
    UFUNCTION(BlueprintCallable)
    float CalcShrinkEndTime(int32 phaseLevel);
    
    UFUNCTION(BlueprintCallable)
    void CalcIntersection(const FVector2D& center1, float r1, const FVector2D& center2, float r2, FVector2D& resultA, FVector2D& resultB);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 CalcCurrentPhase(float timeSinceStart) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector CalcAnchorLocation(const FSSStormPhaseParam& phaseParam, AELSSStormAnchor* prevAnchor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginDamageAreaSE();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddSchedule(int32 phaseLevel);
    

    // Fix for true pure virtual functions not being implemented
};

