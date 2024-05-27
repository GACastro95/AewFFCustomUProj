#pragma once
#include "CoreMinimal.h"
#include "EEOSAttrJudgeType.h"
#include "EEOSAttrVariableType.h"
#include "EEOSAttrVisibility.h"
#include "EOSCommon.h"
#include "EOSAttribute.generated.h"

class UEOSAttribute;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSAttribute : public UEOSCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_cString;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_sInt64;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSAttrVariableType m_enVariableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSAttrJudgeType m_enJudgeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSAttrVisibility m_enVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBool;
    
    UEOSAttribute();

    UFUNCTION(BlueprintCallable)
    void SetVisibility(EEOSAttrVisibility _enVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableType(EEOSAttrVariableType _enType);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(const FString& _strValue);
    
    UFUNCTION(BlueprintCallable)
    void SetString(const FString& _strValue);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FString& _strName);
    
    UFUNCTION(BlueprintCallable)
    void SetJudgeType(EEOSAttrJudgeType _enType);
    
    UFUNCTION(BlueprintCallable)
    void SetInt64(int64 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetInt32(int32 _sValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFloat(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolean(bool _bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSAttrVisibility GetVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSAttrVariableType GetVariableType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSAttrJudgeType GetJudgeType() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetInt64() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInt32() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolean() const;
    
    UFUNCTION(BlueprintCallable)
    static bool Create(UEOSAttribute*& _pcInst);
    
    UFUNCTION(BlueprintCallable)
    void CopyFrom(const UEOSAttribute* _pcAttr);
    
};

