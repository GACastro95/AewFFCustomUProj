#pragma once
#include "CoreMinimal.h"
#include "EEditPartsSlot.h"
#include "ELWrestlerProfile.h"
#include "EWrestlerID_N.h"
#include "GameFramework/Character.h"
#include "SSWrestlerSetupParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSCharacter.generated.h"

class UAnimMontage;
class UCharacterProfilesBase;
class UELBuildBody;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELBuildBody* BuildBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* SpawnedMeshChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> ExtraMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> InsignificateMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* HairMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerProfile WrestlerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCharacterProfilesBase> CharacterProfilesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharacterProfilesBase* CharacterProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultIdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SrcMeshesToMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SrcMeshComponentsToMerge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MergedMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleMergedMesh;
    
public:
    AELSSCharacter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPlayFootstepSound() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetWrestlerProfile(const FELWrestlerProfile& InWrestlerProfile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCharacterMesh(EWrestlerID_N inWrestlerId, const FSSWrestlerSetupParam& inWrestlerSetupParam);
    
    UFUNCTION(BlueprintCallable)
    void SetSrcMeshComponentsToMerge(TArray<USkeletalMeshComponent*> inSrcMeshCompsToMerge);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnedMeshChara(ACharacter* inChara);
    
    UFUNCTION(BlueprintCallable)
    void SetInsignificateMeshes(TArray<USkeletalMeshComponent*> inMeshes);
    
    UFUNCTION(BlueprintCallable)
    void SetHairMesh(USkeletalMeshComponent* inHairMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraMeshes(TArray<USkeletalMeshComponent*> inExtraMeshes);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableVisibleMergedMesh(bool flg, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void ReductionBodyMaterial(USkeletalMeshComponent* inBodyMesh);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontage(UAnimMontage* inMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlayDefaultIdleMontage();
    
    UFUNCTION(BlueprintCallable)
    USkeletalMesh* MergeMeshes(TArray<USkeletalMesh*> inMeshesToMerge, TArray<USkeletalMeshComponent*> inMeshCompsToMerge);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FELWrestlerProfile GetWrestlerProfile() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetVoiceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetSystemMotionRowNameByWrestlerType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetSystemMotionRowNameByWrestlerProfile();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetActiveMontage();
    
    UFUNCTION(BlueprintCallable)
    void ApplySourceMeshMaterials(USkeletalMeshComponent* inMergedMesh, const EEditPartsSlot Slot, USkeletalMeshComponent* inSrcMesh);
    
};

