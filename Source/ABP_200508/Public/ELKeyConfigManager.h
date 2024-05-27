#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KeyMapSettingData.h"
#include "ELKeyConfigManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELKeyConfigManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_GamepadKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_KeyboardMouseKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_SSGamepadKeyConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> m_SSKeyboardMouseKeyConfigList;
    
public:
    UELKeyConfigManager();

};

