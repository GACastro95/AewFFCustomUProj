#pragma once
#include "CoreMinimal.h"
#include "EEOSUserType.h"
#include "EOSInstanceBase.h"
#include "EOSIDs.generated.h"

class UEOSAuth;
class UEOSIDs;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSIDs : public UEOSInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAuth* m_pcAuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSAuth* m_pcRefAuth;
    
public:
    UEOSIDs();

    UFUNCTION(BlueprintCallable)
    bool SetIDsWithInst(UEOSIDs* _pcEOSIDs);
    
    UFUNCTION(BlueprintCallable)
    bool SetIDsWithAuth(UEOSAuth* _pcAuth);
    
    UFUNCTION(BlueprintCallable)
    bool SetIDs(const FString& _strEpicAccountID, const FString& _strLocalAccountID, const FString& _strProductUserID, EEOSUserType _enUserType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSUserType GetUserType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringOfProductUserID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringOfLocalAccountID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringOfEpicAccountID() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEOSAuth(UEOSAuth*& _ppAuth);
    
};

