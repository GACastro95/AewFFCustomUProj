#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "OnUpdateScheduleIdDelegate.h"
#include "SSRULE_ECheckPartyOver.h"
#include "SSRULE_ECheckTimeout.h"
#include "SSRULE_Warning.h"
#include "SSRuleSelectItem.h"
#include "ELSSRuleSelect.generated.h"

class UELSSRuleSelect;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UELSSRuleSelect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateScheduleId OnUpdateScheduleId;
    
    UELSSRuleSelect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool UpdateList(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool SyncScheduleId(const UObject* WorldContextObject, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool MakeList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemNeedRemainTime(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemAvailable(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistComingSoon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCurrentNeedRemainTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAvailableRule(const UObject* WorldContextObject, FDateTime inNowUTC, int32 inRuleId, int32& outScheduleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStrItemRuleTitle(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStrItemRuleInfo(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStrItemRemainTime_ExtractNums(FSSRuleSelectItem ITEM, FString& outHour0, FString& outHour1, FString& outMinute0, FString& outMinute1, FString& outSecond0, FString& outSecond1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStrItemRemainTime(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStrItemPartySize(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetStrCurrentRuleTitle(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetStrCurrentRemainTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetStrCurrentPartySize(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UELSSRuleSelect* GetRuleSelectInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetListNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetItemRuleTitle(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetItemRuleInfo(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetItemRuleImageS(const FSSRuleSelectItem& ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetItemRuleImageL(const FSSRuleSelectItem& ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetItemRemainTime_ExtractNums(FSSRuleSelectItem ITEM, FString& outHour0, FString& outHour1, FString& outMinute0, FString& outMinute1, FString& outSecond0, FString& outSecond1);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetItemPartySize(FSSRuleSelectItem ITEM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSSRuleSelectItem> GetItemList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSSRuleSelectItem GetItem(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCurrentTutorialName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentScheduleId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCurrentRulePartySize(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetCurrentRuleIndex(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetCurrentRuleImageS(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTexture2D* GetCurrentRuleImageL(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSSRuleSelectItem> GetCommingList() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckCurrentRuleTimeoutByUtc(const UObject* WorldContextObject, const FDateTime& inUtcTime, SSRULE_ECheckTimeout& Branch);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckCurrentRuleTimeout(const UObject* WorldContextObject, SSRULE_ECheckTimeout& Branch);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckCurrentRulePartyOver(const UObject* WorldContextObject, SSRULE_ECheckPartyOver& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanRuleSelect(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanNotDecide(const UObject* WorldContextObject, FSSRuleSelectItem ITEM, bool inCommongSoon, SSRULE_Warning& outwarning);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ApplyRule(UObject* WorldContextObject, const FSSRuleSelectItem& ITEM);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ApplyDefaultRule(UObject* WorldContextObject);
    
};

