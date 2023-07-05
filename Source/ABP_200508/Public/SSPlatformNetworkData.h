#pragma once
#include "CoreMinimal.h"
#include "HttpRequest_ErrDialogData.h"
#include "EELApplicationStatus.h"
#include "EELNetworkConnectionStatus.h"
#include "EELNetworkStatus.h"
#include "EELNetworkType.h"
#include "EELServerType.h"
#include "SSNetworkErrorInfo.h"
#include "SSPlatformNetworkData.generated.h"

USTRUCT(BlueprintType)
struct FSSPlatformNetworkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELApplicationStatus AppStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetworkStatus NetworkStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetworkType networkInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetworkConnectionStatus serverConnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELServerType ServerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSNetworkErrorInfo errData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHttpRequest_ErrDialogData errDialogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString errTmpID;
    
    ABP_200508_API FSSPlatformNetworkData();
};

