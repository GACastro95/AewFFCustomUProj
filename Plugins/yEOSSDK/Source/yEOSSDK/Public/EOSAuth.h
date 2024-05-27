#pragma once
#include "CoreMinimal.h"
#include "EEOSExternalCredentialType.h"
#include "EEOSLoginStatus.h"
#include "EEOSLoginType.h"
#include "EOSAuthAPIVersionSettings.h"
#include "EOSAuthEventDispatcherDelegate.h"
#include "EOSAuthPinGrantInfo.h"
#include "EOSIDs.h"
#include "EOSAuth.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAuth : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAuthEventDispatcher AuthEventDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAuthPinGrantInfo m_stPinGrantInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strRefreshToken;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strUserDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strExternalAccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sConnectLoggingCount;
    
public:
    UEOSAuth();

    UFUNCTION(BlueprintCallable)
    void SetLoginUserDisplayName(const FString& _strDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void SetLoginExternalAccountId(const FString& _strExternalAccountId);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSAuthAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestPersistentAuthLogin(const FString& _cToken);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLogout();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLogin(const FString& _cUserID, const FString& _cPassword);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLinkEpicAccount();
    
    UFUNCTION(BlueprintCallable)
    bool RequestExternalConnectLoginWithBinaryToken(EEOSExternalCredentialType _enType, const TArray<uint8>& _pcToken);
    
    UFUNCTION(BlueprintCallable)
    bool RequestExternalConnectLogin(EEOSExternalCredentialType _enType, const FString& _cToken);
    
    UFUNCTION(BlueprintCallable)
    bool RequestExternalAuthLoginWithBinaryToken(EEOSExternalCredentialType _enType, const TArray<uint8>& _pcToken);
    
    UFUNCTION(BlueprintCallable)
    bool RequestExternalAuthLogin(EEOSExternalCredentialType _enType, const FString& _cToken);
    
    UFUNCTION(BlueprintCallable)
    bool RequestExchangeCodeLogin(const FString& _cExchangeCode);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeviceCodeLogin();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDevAuthLogin(const FString& _cID, const FString& _cToken);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCreateUser();
    
    UFUNCTION(BlueprintCallable)
    bool RequestConnectUnlinkAccount();
    
    UFUNCTION(BlueprintCallable)
    bool RequestConnectLogin();
    
    UFUNCTION(BlueprintCallable)
    bool RequestConnectLinkAccount();
    
    UFUNCTION(BlueprintCallable)
    bool RequestAccountPortalLogin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRefreshToken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEOSAuthPinGrantInfo GetPinGrantInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoginUserDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLoginStatus GetLoginStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoginExternalAccountId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSLoginType GetLastLoginType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSExternalCredentialType GetLastCredentialType() const;
    
    UFUNCTION(BlueprintCallable)
    EEOSLoginStatus GetConnectLoginStatus(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    EEOSLoginStatus GetAuthLoginStatus(const FString& _strEpicAccountID);
    
};

