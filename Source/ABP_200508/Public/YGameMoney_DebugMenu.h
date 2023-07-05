#pragma once
#include "CoreMinimal.h"
#include "EEOSUserContentsEvent.h"
#include "EOSUserContentProgress.h"
#include "ELDebugMenuRootBase.h"
#include "YGameMoney_DebugMenu.generated.h"

class UEOSUserContentsBase;

UCLASS(Blueprintable)
class ABP_200508_API UYGameMoney_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYGameMoney_DebugMenu();
    UFUNCTION(BlueprintCallable)
    void OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnUploadPossessedGold(bool _Successed);
    
};

