#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ChangedInputDeviceDelegate.h"
#include "ClosedDisconnectedDialogDelegateDelegate.h"
#include "EInputDeviceGameFlowType.h"
#include "InputDeviceInfo.h"
#include "OpenedDisconnectedDialogDelegateDelegate.h"
#include "ELInputDeviceObserveManager.generated.h"

class AELNotifyGamepadDisconnected;
class APlayerController;

UCLASS(Blueprintable)
class ABP_200508_API UELInputDeviceObserveManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedInputDevice OnChangedInputDeviceEventHandler;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenedDisconnectedDialogDelegate OnOpenedDisconnectedDialogHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClosedDisconnectedDialogDelegate OnClosedDisconnectedDialogHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FInputDeviceInfo> m_InputDeviceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FInputDeviceInfo> m_DrawDeviceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> m_ExhibitionPlayerIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_JoinedLocalExhibitionControllerIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FInputDeviceInfo> m_ReserveNotifyDisconnectedInputDeviceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputDeviceInfo m_ReserveNotifyDisconnectedHostController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELNotifyGamepadDisconnected* m_NotifyGamepadDisconnectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputDeviceGameFlowType m_GameFlowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_GameHostControllerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ManipulateKeyboardeMode;
    
public:
    UELInputDeviceObserveManager();

    UFUNCTION(BlueprintCallable)
    void UpdateInputDeviceMap(const int32 _updateSrcDeviceIndex, const int32 _updateDstDeviceIndex);
    
    UFUNCTION(BlueprintCallable)
    void StartCheckConnectionStatus();
    
    UFUNCTION(BlueprintCallable)
    void SetShowDisconnectedDeviceId(const int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    void SetManipulateKeyboardeMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetLightbarColor(int32 ControllerId, FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetExhibitionPlayerIndex(int32 _targetControllerID, int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void SetDecideMatchControllerID(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignHostPad(int32 _targetControllerID);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenedDisconnectedDialog();
    
    UFUNCTION(BlueprintCallable)
    void OnManipulateDecideBtn(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnManipulateCursor(bool _isLeft);
    
    UFUNCTION(BlueprintCallable)
    void OnClosedDisconnectedDialog();
    
    UFUNCTION(BlueprintCallable)
    bool IsJoyCon(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsHandheldStyle(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedHostPad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedDevice(int32 _targetControllerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckingConnectionStatus() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAssignedExhibitionPlayerIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveNotifyDisconnectedDialog();
    
    UFUNCTION(BlueprintCallable)
    void GetJoinedLocalExhibitionControllerIdList(TArray<int32>& _Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputControllerNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGameHostPadID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetExhibitionPlayerIndex(int32 _targetControllerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputDeviceGameFlowType GetCurrentGameFlowStatus();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentControllerIds(TArray<int32>& _Result);
    
    UFUNCTION(BlueprintCallable)
    void GetBindControllerUserNameList(const TArray<int32>& _targetControllerIdList, TArray<FText>& _Result);
    
    UFUNCTION(BlueprintCallable)
    void GetBindControllerUserName(const int32 _targetControllerID, FText& _Result);
    
    UFUNCTION(BlueprintCallable)
    void EndCheckConnectionStatus();
    
    UFUNCTION(BlueprintCallable)
    void ClearJoinLocalExhibition();
    
    UFUNCTION(BlueprintCallable)
    void ClearGameFlowStatus();
    
    UFUNCTION(BlueprintCallable)
    void ClearExhibitionPlayerIndexMap();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    void CheckLocalConnectedDevice(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void CheckExistHostController();
    
    UFUNCTION(BlueprintCallable)
    void ChangeGameFlowStatus(EInputDeviceGameFlowType _type);
    
    UFUNCTION(BlueprintCallable)
    void BackupOldDeviceInfo();
    
    UFUNCTION(BlueprintCallable)
    void AddJoinLocalExhibition(int32 _targetControllerID);
    
};

