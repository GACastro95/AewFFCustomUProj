#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TitleMenu_Param.h"
#include "TitleMenu_ParamArray.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FTitleMenu_ParamArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTitleMenu_Param> m_Params;
    
    FTitleMenu_ParamArray();
};

