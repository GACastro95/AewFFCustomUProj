#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSPickupBase.h"
#include "ESSWeaponType.h"
#include "SSWeaponCommonParam.h"
#include "SSWeaponParam.h"
#include "ELSSWeaponBase.generated.h"

class AELSSPlayer;
class UELSSWeaponUserDesignComponent;
class UMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSWeaponBase : public AELSSPickupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSWeaponUserDesignComponent* UserDesignComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWeaponType WeaponType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleWhenDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultMeshRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MeshRelativeLocationOffsetWhenDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWeaponCommonParam CommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Sticked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* StickedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StickRequiredStateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StickRequiredReactionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickFinishedVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickFinishedVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickFinishedVelocityGravity;
    
public:
    AELSSWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StickToPlayer(AELSSPlayer* inTarget, int32 inRequiredStateId, const FName& inAttachParamRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(const FSSWeaponParam& weaponParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishSticking();
    
};

