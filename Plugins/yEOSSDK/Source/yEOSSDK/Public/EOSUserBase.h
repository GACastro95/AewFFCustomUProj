#pragma once
#include "CoreMinimal.h"
#include "EEOSNatP2PConnectionStatus.h"
#include "EExternalAccountType.h"
#include "EOSIDs.h"
#include "EOSUserEventDispatcherDelegate.h"
#include "EOSUserInfoAPIVersionSettings.h"
#include "EOSUserBase.generated.h"

class UEOSUserContentsBase;
class UObject;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUserBase : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSUserEventDispatcher UserEventDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strExternalAccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strExternalDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExternalAccountType m_sExternalPlatformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserContentsBase* m_pcContents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> m_cCustomData;
    
public:
    UEOSUserBase();

    UFUNCTION(BlueprintCallable)
    void SetExternalPlatformType(EExternalAccountType _sExternalPlatformType);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalDisplayName(const FString& _strExternalDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalAccountId(const FString& _strExternalAccountId);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomData(const FString& _strName, UObject* _pObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSUserInfoAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetAccountDisplayName(const FString& _strDispName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameExternalPlatformType() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasExternalDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSNatP2PConnectionStatus GetP2PConnectionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EExternalAccountType GetExternalPlatformType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetExternalDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetExternalAccountId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEpicAccountDisplayName() const;
    
    UFUNCTION(BlueprintCallable)
    UEOSUserContentsBase* GetEOSUserContent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAccountDisplayName() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* FindCustomData(const FString& _strName);
    
    UFUNCTION(BlueprintCallable)
    bool CheckSendPacket();
    
};

