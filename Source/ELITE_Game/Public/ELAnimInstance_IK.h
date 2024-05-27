#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Components/SkinnedMeshComponent.h"
#include "EELIKPartType.h"
#include "ELAttachCondition.h"
#include "ELCutsceneIKParameter.h"
#include "EWrestlerAP.h"
#include "ELAnimInstance_IK.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, NonTransient, Config=Game)
class ELITE_GAME_API UELAnimInstance_IK : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EELIKPartType, FELCutsceneIKParameter> IKParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EELIKPartType, FName> EffectBoneList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> AttachPointNameList;
    
public:
    UELAnimInstance_IK();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVector(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TransformBoneSpaceLocation(FVector& BoneSpaceLocation, const FName BoneName, const FVector InLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void StartLocationIK(EELIKPartType PartType, FELAttachCondition Condition, float BlendTime, float MaxBlendRate);
    
    UFUNCTION(BlueprintCallable)
    void StartConstraintByType(const EELIKPartType PartType, const FName AnchorNodeName, USkeletalMeshComponent* ConstraintMesh, const FName ConstraintNodeName, FELAttachCondition Condition, const float BlendTime, const float MaxBlendRate);
    
    UFUNCTION(BlueprintCallable)
    void StartConstraintBySocket(const FName AnchorNodeName, USkeletalMeshComponent* ConstraintMesh, const FName ConstraintNodeName, FELAttachCondition Condition, const float BlendTime, const float MaxBlendRate);
    
    UFUNCTION(BlueprintCallable)
    void StartConstraint(const FName IKBoneName, const FName AnchorNodeName, USkeletalMeshComponent* ConstraintMesh, const FName ConstraintNodeName, FELAttachCondition Condition, const float BlendTime, const float MaxBlendRate);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(EELIKPartType PartType, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSupportNodeName(const FName NodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlIK(const EELIKPartType PartType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPartParam(FELCutsceneIKParameter& OutParam, const EELIKPartType PartType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetIKParam(EELIKPartType PartType, FTransform& EffectTransform, float& BlendRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetEffectBoneLocation(FVector& Location, const EELIKPartType EffectBone, const TEnumAsByte<EBoneSpaces::Type> SpaceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetBoneTransform(FTransform& Transform, const FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetBoneLocation(FVector& Location, const FName BoneName, const TEnumAsByte<EBoneSpaces::Type> SpaceType) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBone2NodeName(const FName AnchorNodeName);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishIK(EELIKPartType PartType, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void FinishConstraint(const FName AnchorNodeName, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void FinishAllIK(const float BlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName ConvertWrestlerAP2NodeName(const EWrestlerAP AttachPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName ConvertPartType2NodeName(const EELIKPartType PartType) const;
    
};

