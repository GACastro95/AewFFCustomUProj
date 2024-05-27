#pragma once
#include "CoreMinimal.h"
#include "EOSIDs.h"
#include "EOSVoiceAPIVersionSettings.h"
#include "EOSVoiceDeviceInfo.h"
#include "EOSVoiceEventDispatcherDelegate.h"
#include "EOSVoice.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSVoice : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSVoiceEventDispatcher VoiceEventDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strServiceUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strInputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strOutputDeviceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInputVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fOutputVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sUserIndex;
    
public:
    UEOSVoice();

    UFUNCTION(BlueprintCallable)
    bool SetOutputVolume(const float _fVolume);
    
    UFUNCTION(BlueprintCallable)
    bool SetOutputDeviceId(const FString& _strDeviceId);
    
    UFUNCTION(BlueprintCallable)
    bool SetInputVolume(const float _fVolume);
    
    UFUNCTION(BlueprintCallable)
    bool SetInputDeviceId(const FString& _strDeviceId);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSVoiceAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOutputVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutputDeviceList(TArray<FEOSVoiceDeviceInfo>& DeviceInfoList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOutputDeviceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputDeviceList(TArray<FEOSVoiceDeviceInfo>& DeviceInfoList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInputDeviceId() const;
    
};

