#pragma once
#include "CoreMinimal.h"
#include "AutoMatchSettings.h"
#include "DebugCameraSettings.h"
#include "ELBugReportSettings.h"
#include "EYDebugMenuUITypeForIngame.h"
#include "YDebugMenuParamForIngame.generated.h"

class UAudioOption_MenuSettings;
class UGameMoney_MenuSettings;
class UGraphicsOptions_MenuSettings;
class USaveDataSystem;
class UYCAA_DebugMenu;
class UYCAM_DebugMenu;
class UYCAW_DebugMenu;
class UYMiniGameOptions_MenuSettings;

USTRUCT(BlueprintType)
struct ABP_200508_API FYDebugMenuParamForIngame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYDebugMenuUITypeForIngame> UITypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELBugReportSettings BugReportSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveDataSystem* SaveDataSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioOption_MenuSettings* AudioOption_MenuSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGraphicsOptions_MenuSettings* GraphicsOptionsMenuSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameMoney_MenuSettings* GameMoney_MenuSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoMatchSettings AutoMatchSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYMiniGameOptions_MenuSettings* MiniGameOptions_MenuSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCAW_DebugMenu* CAW_DebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCAA_DebugMenu* CAA_DebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYCAM_DebugMenu* CAM_DebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugCameraSettings DebugCameraSettings;
    
    FYDebugMenuParamForIngame();
};

