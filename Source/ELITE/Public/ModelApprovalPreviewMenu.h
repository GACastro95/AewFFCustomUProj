#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChangeWrestlerDelegate.h"
#include "ModelApprovalPreviewMenu.generated.h"

UCLASS(Blueprintable)
class ELITE_API AModelApprovalPreviewMenu : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeWrestler EventChangeWrestler;
    
    AModelApprovalPreviewMenu(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 GetSelectWrestlerID();
    
};

