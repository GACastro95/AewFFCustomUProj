#pragma once
#include "CoreMinimal.h"
#include "YDBGMailHeader.generated.h"

USTRUCT(BlueprintType)
struct YDEBUG_API FYDBGMailHeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> To;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Cc;
    
    FYDBGMailHeader();
};

