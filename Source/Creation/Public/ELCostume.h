#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBasicFindResult.h"
#include "ELCharacterComponent.h"
#include "AttireData.h"
#include "AttireParam.h"
#include "EEditPartsSlot.h"
#include "EditPaintData.h"
#include "EditPartsCategoryName.h"
#include "EditPartsData.h"
#include "ELCostume.generated.h"

class UEditWrestlerPartsAsset;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMesh;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CREATION_API UELCostume : public UELCharacterComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<EEditPartsSlot, USkeletalMeshComponent*> ExtraMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FEditPartsCategoryName> EquippedPartsCategorySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ForceHiddenMaterialSlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSkinTone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEyeHighlightLevel;
    
public:
    UELCostume();
    UFUNCTION(BlueprintCallable)
    void UpdateEyeHighlightParameter(float HighlightLevel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEyeColorParameter(const float Hue, const float Luminous, const float Desaturation, const bool bLeft);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDynamicMaterials(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(const FName& ParameterName, const FVector& NewValue, const FName Specific);
    
    UFUNCTION(BlueprintCallable)
    void SetupPartsMeshComponent(USkeletalMeshComponent* Parent, USkeletalMeshComponent* Child, const FName CollisionProfileName);
    
    UFUNCTION(BlueprintCallable)
    void SetupCostume(const FAttireParam& Base, const FAttireParam& Attire, const FAttireParam& Extra);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureParameter(const FName& ParameterName, UTexture* NewTexture, const FName Specific);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameter(const FName& ParameterName, const float NewValue, const FName Specific);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialSectionVisibility(USkeletalMeshComponent* SkeletalMeshComponent, const TSet<FName>& MaterialSlotNames, const bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetAdjustSkinToneEnable(const bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaterials();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemovePartsMesh(const EEditPartsSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* OnUpdateParts(const EEditPartsSlot Slot, USkeletalMesh* NewMesh, const FName InSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* OnSetupParts(const EEditPartsSlot Slot, const FEditPartsData& EditPartsData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSetupPaint(const FEditPaintData& EditPaintData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetupAttire(const FAttireData& AttireData);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAttireParam(const FAttireParam& InParam, FAttireData& Out);
    
    UFUNCTION(BlueprintCallable)
    bool IsEquippedParts(const FEditPartsCategoryName& PartsCategoryName);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetPartsMeshWithResult(const EEditPartsSlot Slot, EBasicFindResult& resultType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartsMesh(const EEditPartsSlot Slot, USkeletalMeshComponent*& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMeshes(TArray<USkeletalMeshComponent*>& List);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetMaterialInstanceDynamic(const FName& MaterialSlotName);
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetEyeMaterialInstanceDynamic(const bool bLeft);
    
    UFUNCTION(BlueprintCallable)
    void BindDynamicMaterials(USkeletalMeshComponent* SkeletalMeshComponent, UMaterialInterface* OverrideMaterial);
    
    UFUNCTION(BlueprintCallable)
    void BindDynamicMaterial(USkeletalMeshComponent* SkeletalMeshComponent, const TSet<FName>& MaterialSlotNames, UMaterialInterface* OverrideMaterial);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* AddPartsMesh(const EEditPartsSlot Slot, USkeletalMesh* NewMesh, const FName InSocketName);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* AddPartsAsset(const EEditPartsSlot Slot, UEditWrestlerPartsAsset* Asset, const int32 MeshIndex);
    
};

