#pragma once
#include "CoreMinimal.h"
#include "ELWrestlerProfile.h"
#include "ETipsLoadingCategory.h"
#include "EWrestlerID_N.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Types/SlateEnums.h"
#include "ELanguageType.h"
#include "ESelectWreslterSortType.h"
#include "MenuSelectWreslterParam.h"
#include "ELMenuUtilityFunction.generated.h"

class UFont;
class UMyWrestlerDataObject;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELMenuUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELMenuUtilityFunction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void StartTipsLoadingScreenWithOverrideNextLevel(UObject* _pWorldContextObject, ETipsLoadingCategory _nextGameMode, const FName& _nextLevel, const FString& _nextLevelOption);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void StartTipsLoadingScreen(UObject* _pWorldContextObject, ETipsLoadingCategory _nextGameMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetUserFocusToGameViewport(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void SetGameFPS(UObject* _pWorldContextObject, int32 _fpsValue);
    
    UFUNCTION(BlueprintCallable)
    static bool PlatformTextCheck(const FText& InText, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool IsValidWrestlerSelectOnKeyboard(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidForceFailedDlcCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool IsUnlockedItemContent(UObject* _pWorldContextObject, const int32 _checkUnlockableItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_pWorldContextObject"))
    static bool IsAllControllerEnableInput(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Integer_Sort(TArray<int32> _target, bool IsDesc, TArray<int32>& _out);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static int32 GetUserIndexForKeyboard(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetOnlineUserRankImageIndex(const int32 _rankPoint, const int32 _scoreRanking);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetMenuSelectWreslterParamFromWrestlerID(UObject* _pWorldContextObject, EWrestlerID_N _targetWrestler, bool& _findParam, FMenuSelectWreslterParam& _outResult);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetMenuSelectWreslterList(UObject* _pWorldContextObject, ESelectWreslterSortType _sortType, TArray<FMenuSelectWreslterParam>& _outResult, bool _isCheckUnlockStatus);
    
    UFUNCTION(BlueprintCallable)
    static void GetMenuEditWrestlerProfile(FELWrestlerProfile& _outProfile, const UMyWrestlerDataObject* _targetWrestlerData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static UFont* GetCurrentLanguageFont(UObject* _pWorldContextObject, const UObject* BaseFont);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void GetCurrentLanguage(UObject* _pWorldContextObject, ELanguageType& _Result);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertBodyWeightUnitToLb(const float _inBodyWeight, int32& _outLbs);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertBodyHeightUnitToFoot(const float _inBodyHeight, int32& _outFoot, int32& _outInch);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ChangeUserIndexForKeyboardMouse(UObject* _pWorldContextObject, int32 _newIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ChangeLanguage(UObject* _pWorldContextObject, ELanguageType _type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ChangeEnableInputToHostControllerOnly(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    static void ChangeEnableInputToAllController(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalcTileViewScrollIndex(int32 _currentSelectIndex, int32 _currentScrollIndex, int32 _dispVerticalItemNum, int32 _dispHorizontalItemNum, TEnumAsByte<EOrientation> _orientation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcListCursor(int32 Current, int32 ChangeNum, int32 Size, bool IsRepeat, int32& Next, bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalcGridCursor(int32 Current, int32 ChangeXNum, int32 ChangeYNum, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved);
    
};

