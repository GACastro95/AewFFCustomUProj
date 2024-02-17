#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Templates/SubclassOf.h"
#include "ELSSOutGameStateBase.generated.h"

class AELSSMainMenuFlow;
class AELSSOutGameDatabase;
class AELSSSaveDataManager;

UCLASS(Blueprintable)
class ABP_200508_API AELSSOutGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSOutGameDatabase> DatabaseType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSOutGameDatabase* Database;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AELSSSaveDataManager* SaveDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSSaveDataManager> SaveDataManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSMainMenuFlow* SSMainMenuFlow;
    
public:
    AELSSOutGameStateBase();
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyPrint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyLeave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyInviteApprove(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyInvite(const FString& ProductUserID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyEnd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyChangeRule(int32 RuleId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SSLobbyChangeMenuState(int32 menuStateId);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSSMainMenuFlow(AELSSMainMenuFlow* inFlow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenUpdateToBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSOutGameDatabase* GetOutGameDatabase() const;
    
};

