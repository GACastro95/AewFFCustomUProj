#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEOSSessionObjectParamType.h"
#include "EOSSessionP2PObjectParamData.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PObjectParamPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PObjectParamPacket : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PObjectParamPacket();
    UFUNCTION(BlueprintCallable)
    bool SetPacketInfo(int32 _sIndex, int32 _sMaxNum);
    
    UFUNCTION(BlueprintCallable)
    bool Send();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetUserParam(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    EEOSSessionObjectParamType GetType(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    FString GetProductUserID(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetObjectData(FEOSSessionP2PObjectParamData& _stObjectParamData, int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfObjects();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfDeta();
    
    UFUNCTION(BlueprintCallable)
    int32 GetKind(int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDataIndex();
    
    UFUNCTION(BlueprintCallable)
    bool AddObject(int32 _sIndex, const FTransform& _stTransform, const FString& _strProductUserID, int32 _sKind, uint8 _sUserParam);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharacter(int32 _sIndex, const FTransform& _stTransform, const FString& _strProductUserID, int32 _sKind, uint8 _sUserParam);
    
};

