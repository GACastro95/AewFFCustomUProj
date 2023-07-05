#pragma once
#include "CoreMinimal.h"
#include "EEOSTitleStorageEvent.h"
#include "EEOSUserContentsEvent.h"
#include "EOSTitleStorageProgress.h"
#include "EOSUserContentProgress.h"
#include "SaveData_DownloaderBase.h"
#include "SaveData_DownloaderOnEOS.generated.h"

class UEOSTitleStorage;
class UEOSTitleStorageBase;
class UEOSUserContents;
class UEOSUserContentsBase;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_DownloaderOnEOS : public USaveData_DownloaderBase {
    GENERATED_BODY()
public:
    USaveData_DownloaderOnEOS();
    UFUNCTION(BlueprintCallable)
    bool SetupEOS(UEOSUserContents* _pcEOSUserContents, UEOSTitleStorage* _pcEOSTitleStorage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnTitleStorageEvent(EEOSTitleStorageEvent _enTitleStorageEvent, UEOSTitleStorageBase* _pcTitleStorageBase, const FEOSTitleStorageProgress& _rstProgress);
    
};

