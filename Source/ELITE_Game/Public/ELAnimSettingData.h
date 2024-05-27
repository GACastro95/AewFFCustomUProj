#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "ELAnimSettingData.generated.h"

class UAnimationAsset;
class UELAnimSettingData;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_GAME_API UELAnimSettingData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHipsBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipsBlendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachBS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachSB;
    
    UELAnimSettingData();

    UFUNCTION(BlueprintCallable)
    static void TryGetAnimSettingData(UELAnimSettingData*& AnimSettingData, UAnimationAsset* Animation);
    
    UFUNCTION(BlueprintCallable)
    static void AddAnimSettingData(UELAnimSettingData*& AnimSettingData, UAnimationAsset* Animation);
    
};

