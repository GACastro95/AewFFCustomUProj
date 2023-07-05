#pragma once
#include "CoreMinimal.h"
#include "YDebugMenuSubMenuDefaultParam.generated.h"

USTRUCT(BlueprintType)
struct YDEBUG_API FYDebugMenuSubMenuDefaultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringTableNameSpace;
    
    FYDebugMenuSubMenuDefaultParam();
};

