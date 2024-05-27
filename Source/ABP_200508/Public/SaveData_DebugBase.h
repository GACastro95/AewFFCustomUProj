#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "SaveData_DebugDispatcherDelegate.h"
#include "SaveData_DebugBase.generated.h"

class USaveDataSystem;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_DebugBase : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveData_DebugDispatcher SaveData_DebugDispatcher;
    
    USaveData_DebugBase();

    UFUNCTION(BlueprintCallable)
    bool StartDataReset(bool _bProjectSavedDir, const FString& _strTargetFileName, USaveDataSystem* _pcSaveDataSystem);
    
    UFUNCTION(BlueprintCallable)
    bool SetServerLoginInfo(const FString& _strDevAuthSrv, const FString& _strName);
    
    UFUNCTION(BlueprintCallable)
    void SetLoggedOn(bool _bLoggedIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableOnline(bool _bEnableOnline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoggedOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOnline() const;
    
    UFUNCTION(BlueprintCallable)
    bool ImportFiles(TArray<FString> _strFileList, USaveDataSystem* _pcSaveDataSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetServerLoginInfo(FString& _strDevAuthSrv, FString& _strName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExportTexts(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName, USaveDataSystem* _pcSaveDataSystem);
    
    UFUNCTION(BlueprintCallable)
    bool ExportFiles(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName, USaveDataSystem* _pcSaveDataSystem);
    
};

