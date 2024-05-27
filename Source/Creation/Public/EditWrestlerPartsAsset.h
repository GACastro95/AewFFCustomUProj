#pragma once
#include "CoreMinimal.h"
#include "IndexedColorList.h"
#include "ColorParameterList.h"
#include "CustomizeAssetBase.h"
#include "EditColorSettings.h"
#include "EditPartsCategoryDetails.h"
#include "EditPartsCategoryName.h"
#include "EditWrestlerPartsAsset.generated.h"

class UEditWrestlerPaintAsset;
class USkeletalMesh;

UCLASS(Blueprintable)
class CREATION_API UEditWrestlerPartsAsset : public UCustomizeAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasPartsCategoryDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEditPartsCategoryDetails PartsCategoryDetails;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditPartsCategoryName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplaceMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SubMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditColorSettings> EditColorSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTexChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEditWrestlerPaintAsset*> ReplaceTextures;
    
    UEditWrestlerPartsAsset();

    UFUNCTION(BlueprintCallable)
    void UpdateEditPartsCategoryDetails();
    
    UFUNCTION(BlueprintCallable)
    void MakeColorParamList(const FIndexedColorList& In, TMap<FName, FColorParameterList>& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMesh* GetSkeletalMeshFromIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void GetEditPartsCategoryDetails(FEditPartsCategoryDetails& Details);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColorSettingNum() const;
    
};

