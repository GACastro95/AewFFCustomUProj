#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEOSSessionObjectParamType.h"
#include "EOSSessionP2PObjectParamData.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSSessionP2PObjectParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSSessionObjectParamType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UserParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kind;
    
    FEOSSessionP2PObjectParamData();
};

