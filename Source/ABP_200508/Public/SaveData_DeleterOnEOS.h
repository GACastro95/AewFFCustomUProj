#pragma once
#include "CoreMinimal.h"
#include "EEOSUserContentsEvent.h"
#include "EOSUserContentProgress.h"
#include "SaveData_DeleterBase.h"
#include "SaveData_DeleterOnEOS.generated.h"

class UEOSUserContents;
class UEOSUserContentsBase;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_DeleterOnEOS : public USaveData_DeleterBase {
    GENERATED_BODY()
public:
    USaveData_DeleterOnEOS();
    UFUNCTION(BlueprintCallable)
    bool SetupEOS(UEOSUserContents* _pcEOSUserContents);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress);
    
};

