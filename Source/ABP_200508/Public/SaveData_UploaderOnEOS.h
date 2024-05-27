#pragma once
#include "CoreMinimal.h"
#include "EEOSUserContentsEvent.h"
#include "EOSUserContentProgress.h"
#include "SaveData_UploaderBase.h"
#include "SaveData_UploaderOnEOS.generated.h"

class UEOSUserContents;
class UEOSUserContentsBase;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_UploaderOnEOS : public USaveData_UploaderBase {
    GENERATED_BODY()
public:
    USaveData_UploaderOnEOS();

    UFUNCTION(BlueprintCallable)
    bool SetupEOS(UEOSUserContents* _pcEOSUserContents);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress);
    
};

