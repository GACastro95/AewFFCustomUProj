#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELEOSSessionSearchResultWrapper.h"
#include "ESessionStatus.h"
#include "ELEOSDebugGameSession.generated.h"

class UELEOSGameSession;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;

UCLASS(Blueprintable)
class AELEOSDebugGameSession : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSGameSession* ELEOSGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESessionStatus SessionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SessionLeftTime;
    
public:
    AELEOSDebugGameSession();
private:
    UFUNCTION(BlueprintCallable)
    void OnSessionSearchStartEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionSearchEnd(FELEOSSessionSearchResultWrapper InResults);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionSearchCancelEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionLeaveEvent(UEOSCommunityInfoBase* InCommunityInfo, UEOSCommunityUserBase* InUser);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionJoinEvent(UEOSCommunityUserBase* InUser);
    
    UFUNCTION(BlueprintCallable)
    void OnSessionDestroyEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnSessionCreateEvent();
    
};

