#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EUserProfileEditType.h"
#include "UserProfileBadgeInfo.h"
#include "UserProfileColorParam.h"
#include "UserProfileUserIconBgInfo.h"
#include "UserProfileUserIconInfo.h"
#include "UserProfileWeaponDecalInfo.h"
#include "UserProfileWeaponPlacementInfo.h"
#include "ELUserProfileManager.generated.h"

class USaveDataObject_PlayerData;
class UTexture2D;

UCLASS(Blueprintable)
class ABP_200508_API UELUserProfileManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUserProfileUserIconInfo> m_PlayerIconRefMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUserProfileUserIconBgInfo> m_PlayerIconBgRefMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUserProfileBadgeInfo> m_BadgeRefMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUserProfileWeaponDecalInfo> m_WeaponDecalRefMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserProfileWeaponPlacementInfo> m_WeaponPlacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUserProfileUserIconInfo> m_WeaponSymbolIconRefMap;
    
public:
    UELUserProfileManager();
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponSymbolIcon(int32 _iconID);
    
    UFUNCTION(BlueprintCallable)
    void UpdateWeaponDecal(int32 _decalID, FUserProfileColorParam _Param);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerIconBg(int32 _iconID, FUserProfileColorParam _Param);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerIcon(int32 _playerIconID);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBadgeList(TArray<int32> _badgeList);
    
    UFUNCTION(BlueprintCallable)
    void SetLastSelectedWeaponIndex(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponSymbolTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponSymbolIcon(int32& _outSymbolIconID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWeaponPlacementInfoNum() const;
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponPlacementInfoAt(int32 _Index, FUserProfileWeaponPlacementInfo& _outInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponPlacementAt(int32 _Index, FTransform& _outTransform);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponDecalTextureAndColor(int32 _iconID, int32 _symbolID, int32 _colorID, int32 _colorListIndex, TSoftObjectPtr<UTexture2D>& _outTexture, TSoftObjectPtr<UTexture2D>& _outSymbolTexture, FLinearColor& _outColor);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponDecalTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture);
    
    UFUNCTION(BlueprintCallable)
    void GetWeaponDecal(int32& _outDecalID, int32& _outDecalSymboiID, FUserProfileColorParam& _outColorParam);
    
    UFUNCTION(BlueprintCallable)
    void GetProfileColor(int32 _colorID, int32 _colorListIndex, EUserProfileEditType _editType, FLinearColor& _outColor);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerIconTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerIconBgTexture(int32 _iconID, TSoftObjectPtr<UTexture2D>& _outTexture);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerIconBg(int32& _outIconID, FUserProfileColorParam& _outColorParam);
    
    UFUNCTION(BlueprintCallable)
    void GetPlayerIcon(int32& _outPlayerIconID);
    
    UFUNCTION(BlueprintCallable)
    void GetMyWeaponDecalTexture(bool& _findAsset, UTexture2D*& _outWeaponSymbolTex, UTexture2D*& _outWeaponBgTex, FLinearColor& _outColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLinkageUnlockableItemID(EUserProfileEditType _editType, int32 _checkItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastSelectedWeaponIndex();
    
    UFUNCTION(BlueprintCallable)
    void GetBadgeTexture(TArray<int32> _iconIdList, TArray<TSoftObjectPtr<UTexture2D>>& _outTextureList);
    
    UFUNCTION(BlueprintCallable)
    void GetBadgeList(bool& IsEditedBadge, TArray<int32>& _outBadgeList);
    
    UFUNCTION(BlueprintCallable)
    void ApplySaveDataToParam(USaveDataObject_PlayerData* _playerData);
    
};

