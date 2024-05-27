#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "OnChangePauseResumeDelegate.h"
#include "OnScrollMenuDelegate.h"
#include "YCredit_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYCredit_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScrollMenu OnScrollMenu_DebugDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangePauseResume OnChangePauseResume_DebugDelegate;
    
    UYCredit_DebugMenu();

};

