#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETitleMenu_QuickSettingsCommand.h"
#include "TitleMenu_Param.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FTitleMenu_Param : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETitleMenu_QuickSettingsCommand eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Disp_String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CallBack_FancName;
    
    FTitleMenu_Param();
};

