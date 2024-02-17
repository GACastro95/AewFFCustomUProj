#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSPlayerStartLocatorAreaId.h"
#include "ESSPlayerStartLocatorType.h"
#include "SSPlayerStartLocatorParam.generated.h"

USTRUCT(BlueprintType)
struct FSSPlayerStartLocatorParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerStartLocatorType PlayerStartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerStartLocatorAreaId PlayerStartAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForSolo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 For2x12;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 For4x6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 For4x2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForFgfOffenseRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForFgfDefenseRespawn;
    
    ABP_200508_API FSSPlayerStartLocatorParam();
};

