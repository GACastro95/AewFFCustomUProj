#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ELGameVersions.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=GameVersion)
class ABP_200508_API UELGameVersions : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TitleVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BuildVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SSModeVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugTitleVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugOnlineVersion;
    
    UELGameVersions();

    UFUNCTION(BlueprintCallable)
    static FString GetTitleVersionName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSSModeVersionName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSSModeVersion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetOnlineVersionName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineVersion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBuildVersionName();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBuildVersion();
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetOverrideTitleVersionName(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void Debug_SetOverrideOnlineVersionName(const FString& Value);
    
};

