#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "ELSSLobbyMatchPlayerDataToClient.h"
#include "SSWrestlerSetupParam.h"
#include "ELSSCreateHottestPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FELSSCreateHottestPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSLobbyMatchPlayerDataToClient datPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSetupParam datSetupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N datWrestlerID;
    
    ABP_200508_API FELSSCreateHottestPlayerData();
};

