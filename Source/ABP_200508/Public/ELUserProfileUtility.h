#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELUserProfileUtility.generated.h"

class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class ABP_200508_API UELUserProfileUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELUserProfileUtility();

    UFUNCTION(BlueprintCallable)
    static void SetUserDesignToWeaponPreCreatedMID(UPARAM(Ref) UMaterialInstanceDynamic*& InDynamicMaterial_Logo, UPARAM(Ref) UMaterialInstanceDynamic*& InDynamicMaterial_Base, const FLinearColor& InUserColor, UTexture* InUserTexture, UTexture* InSymbolTexture);
    
    UFUNCTION(BlueprintCallable)
    static void SetUserDesignToWeapon(UPARAM(Ref) UMaterialInstanceDynamic*& InDynamicMaterial_Logo, UPARAM(Ref) UMaterialInstanceDynamic*& InDynamicMaterial_Base, const FLinearColor& InUserColor, UTexture* InUserTexture, UTexture* InSymbolTexture, USkeletalMeshComponent* InTargetSkeletalMesh, UStaticMeshComponent* InTargetStaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveUserDesignFromWeapon(UMaterialInstanceDynamic* InDynamicMaterial_Logo, UMaterialInstanceDynamic* InDynamicMaterial_Base);
    
};

