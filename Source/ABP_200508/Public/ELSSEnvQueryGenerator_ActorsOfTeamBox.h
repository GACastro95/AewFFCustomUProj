#pragma once
#include "CoreMinimal.h"
#include "ELSSEnvQueryGenerator_ActorsOfClassBase.h"
#include "ESSItemBoxType.h"
#include "ELSSEnvQueryGenerator_ActorsOfTeamBox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSEnvQueryGenerator_ActorsOfTeamBox : public UELSSEnvQueryGenerator_ActorsOfClassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemBoxType ItemBoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCheckUnlockState;
    
    UELSSEnvQueryGenerator_ActorsOfTeamBox();
};

