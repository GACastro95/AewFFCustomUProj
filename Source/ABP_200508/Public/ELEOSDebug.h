#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELEOSDebug.generated.h"

class AELEOSDebugCommon;
class AELEOSDebugFriend;
class AELEOSDebugGameSession;
class AELEOSDebugLobby;
class AELEOSDebugUser;
class UELEOSManager;

UCLASS(Blueprintable)
class UELEOSDebug : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELEOSManager* ELEOSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELEOSDebugUser* ELEOSDebugUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELEOSDebugLobby* ELEOSDebugLobby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELEOSDebugGameSession* ELEOSDebugGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELEOSDebugFriend* ELEOSDebugFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELEOSDebugCommon* ELEOSDebugCommon;
    
public:
    UELEOSDebug();
    UFUNCTION(BlueprintCallable)
    void ToggleDebugUser();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugLobby();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugGameSession();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugFriend();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDebugCommon();
    
    UFUNCTION(BlueprintCallable)
    void DispDebugUser(bool Disp);
    
    UFUNCTION(BlueprintCallable)
    void DispDebugLobby(bool Disp);
    
    UFUNCTION(BlueprintCallable)
    void DispDebugGameSession(bool Disp);
    
    UFUNCTION(BlueprintCallable)
    void DispDebugFriend(bool Disp);
    
    UFUNCTION(BlueprintCallable)
    void DispDebugCommon(bool Disp);
    
};

