#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EErrDialogType.h"
#include "SSErrorTextLinkDialogMessage.generated.h"

USTRUCT(BlueprintType)
struct FSSErrorTextLinkDialogMessage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EErrDialogType LinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LinkText;
    
    ABP_200508_API FSSErrorTextLinkDialogMessage();
};

