#pragma once
#include "CoreMinimal.h"
#include "YDBGMailAttachment.h"
#include "YDBGMailBody.generated.h"

USTRUCT(BlueprintType)
struct YDEBUG_API FYDBGMailBody {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHTMLFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDBGMailAttachment> Attachments;
    
    FYDBGMailBody();
};

