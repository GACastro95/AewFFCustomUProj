#pragma once
#include "CoreMinimal.h"
#include "ELanguageType.h"
#include "DebugCareerParam_Setting.generated.h"

USTRUCT(BlueprintType)
struct FDebugCareerParam_Setting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguageType m_eLanguageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguageType m_eRequestLanguageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLanguageChangeFlag;
    
    ABP_200508_API FDebugCareerParam_Setting();
};

