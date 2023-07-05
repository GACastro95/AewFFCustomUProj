#pragma once
#include "CoreMinimal.h"
#include "EOSTitleStorageFileMetaData.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSTitleStorageFileMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FileSize;
    
    FEOSTitleStorageFileMetaData();
};

