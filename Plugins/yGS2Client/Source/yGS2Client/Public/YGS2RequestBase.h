#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGS2Api.h"
#include "EYGS2ErrorType.h"
#include "EYGS2RequestOptionType.h"
#include "ErrorRequestRetryEventDelegate.h"
#include "HttpRequest_ErrDialogData.h"
#include "YGS2ClientSetupParam.h"
#include "YGS2ResponseDispatcherDelegate.h"
#include "YGS2RequestBase.generated.h"

class UYGS2RequestBase;

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2RequestBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGS2ResponseDispatcher YGS2ResponseDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHttpRequest_ErrDialogData mErrDialogData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FErrorRequestRetryEvent mErrRetryEvent;
    
    UYGS2RequestBase();
    UFUNCTION(BlueprintCallable)
    static FString YGS2GenIDForDebug(int32 _uLength);
    
    UFUNCTION(BlueprintCallable)
    void SetYGS2UserAuthKey(const FString& _strUserId, const FString& _strKey, const FString& _strSecret, const FString& _strAuthToken, const FString& _strCustomData);
    
    UFUNCTION(BlueprintCallable)
    void SetYGS2EOSIDs(const FString& _strEpicAccountID, const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    static bool SetYGS2ClientSetupParam(const FYGS2ClientSetupParam& _stParam);
    
    UFUNCTION(BlueprintCallable)
    void SetYGS2AppAuthKey(const FString& _strKey, const FString& _strSecret);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUserData(UObject* _pcUserObject);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimeout(float _uTimeOut);
    
    UFUNCTION(BlueprintCallable)
    void SetSSDebugForceError(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetOptionalURLArgument(const FString& _strArgs);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetOption(FString& _rstrURL, EYGS2RequestOptionType _enOption);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRetry(int32 _sMaxRetryNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisableSession(bool UseDisableSession);
    
    UFUNCTION(BlueprintCallable)
    bool RequestWithArgs(const TMap<FString, FString>& _rstArguments);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool RequestRead();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDelete();
    
    UFUNCTION(BlueprintCallable)
    bool RequestCreate();
    
    UFUNCTION(BlueprintCallable)
    bool Request();
    
    UFUNCTION(BlueprintCallable)
    void RemRef();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool OnEndUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool OnEndRead();
    
    UFUNCTION(BlueprintCallable)
    bool OnEndDelete();
    
    UFUNCTION(BlueprintCallable)
    bool OnEndCreate();
    
    UFUNCTION(BlueprintCallable)
    bool OnBeginUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool OnBeginRead();
    
    UFUNCTION(BlueprintCallable)
    bool OnBeginDelete();
    
    UFUNCTION(BlueprintCallable)
    bool OnBeginCreate();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSuccess();
    
    UFUNCTION(BlueprintCallable)
    bool IsRef();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnableClientParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanceled() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBusy();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuthorizedUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserID() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUserData(UObject*& _pcUserObject);
    
    UFUNCTION(BlueprintCallable)
    void GetUrl(FString& _rstrURL, const TMap<FString, FString>& _rstArguments);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYGS2Api GetRequestApi() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetListTotalNum() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYGS2ErrorType GetErrorType() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetErrorString();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYGS2Request(UYGS2RequestBase*& _pcInst, EYGS2Api _enApi);
    
    UFUNCTION(BlueprintCallable)
    void ClearYGS2AuthCache();
    
    UFUNCTION(BlueprintCallable)
    void AddRef();
    
};

