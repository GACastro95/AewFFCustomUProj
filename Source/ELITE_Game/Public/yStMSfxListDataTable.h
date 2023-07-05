#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "yStMSfxListDataTable.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FyStMSfxListDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Memo;
    
    ELITE_GAME_API FyStMSfxListDataTable();
};

