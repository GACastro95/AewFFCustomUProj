#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EMovesCategory.h"
#include "EMovesState.h"
#include "ELMovesPlayerPosition.generated.h"

UCLASS(Blueprintable)
class CREATION_API AELMovesPlayerPosition : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMovesCategory> Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovesState MovesState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    AELMovesPlayerPosition(const FObjectInitializer& ObjectInitializer);

};

