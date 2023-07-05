// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveDataObject_PlayerData;
class UTexture2D;
enum class EUserProfileEditType : uint8;
struct FLinearColor;
struct FUserProfileColorParam;
struct FTransform;
struct FUserProfileWeaponPlacementInfo;
#ifdef ABP_200508_ELUserProfileManager_generated_h
#error "ELUserProfileManager.generated.h already included, missing '#pragma once' in ELUserProfileManager.h"
#endif
#define ABP_200508_ELUserProfileManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySaveDataToParam); \
	DECLARE_FUNCTION(execGetBadgeList); \
	DECLARE_FUNCTION(execGetBadgeTexture); \
	DECLARE_FUNCTION(execGetLastSelectedWeaponIndex); \
	DECLARE_FUNCTION(execGetLinkageUnlockableItemID); \
	DECLARE_FUNCTION(execGetMyWeaponDecalTexture); \
	DECLARE_FUNCTION(execGetPlayerIcon); \
	DECLARE_FUNCTION(execGetPlayerIconBg); \
	DECLARE_FUNCTION(execGetPlayerIconBgTexture); \
	DECLARE_FUNCTION(execGetPlayerIconTexture); \
	DECLARE_FUNCTION(execGetProfileColor); \
	DECLARE_FUNCTION(execGetWeaponDecal); \
	DECLARE_FUNCTION(execGetWeaponDecalTexture); \
	DECLARE_FUNCTION(execGetWeaponDecalTextureAndColor); \
	DECLARE_FUNCTION(execGetWeaponPlacementAt); \
	DECLARE_FUNCTION(execGetWeaponPlacementInfoAt); \
	DECLARE_FUNCTION(execGetWeaponPlacementInfoNum); \
	DECLARE_FUNCTION(execGetWeaponSymbolIcon); \
	DECLARE_FUNCTION(execGetWeaponSymbolTexture); \
	DECLARE_FUNCTION(execSetLastSelectedWeaponIndex); \
	DECLARE_FUNCTION(execUpdateBadgeList); \
	DECLARE_FUNCTION(execUpdatePlayerIcon); \
	DECLARE_FUNCTION(execUpdatePlayerIconBg); \
	DECLARE_FUNCTION(execUpdateWeaponDecal); \
	DECLARE_FUNCTION(execUpdateWeaponSymbolIcon);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySaveDataToParam); \
	DECLARE_FUNCTION(execGetBadgeList); \
	DECLARE_FUNCTION(execGetBadgeTexture); \
	DECLARE_FUNCTION(execGetLastSelectedWeaponIndex); \
	DECLARE_FUNCTION(execGetLinkageUnlockableItemID); \
	DECLARE_FUNCTION(execGetMyWeaponDecalTexture); \
	DECLARE_FUNCTION(execGetPlayerIcon); \
	DECLARE_FUNCTION(execGetPlayerIconBg); \
	DECLARE_FUNCTION(execGetPlayerIconBgTexture); \
	DECLARE_FUNCTION(execGetPlayerIconTexture); \
	DECLARE_FUNCTION(execGetProfileColor); \
	DECLARE_FUNCTION(execGetWeaponDecal); \
	DECLARE_FUNCTION(execGetWeaponDecalTexture); \
	DECLARE_FUNCTION(execGetWeaponDecalTextureAndColor); \
	DECLARE_FUNCTION(execGetWeaponPlacementAt); \
	DECLARE_FUNCTION(execGetWeaponPlacementInfoAt); \
	DECLARE_FUNCTION(execGetWeaponPlacementInfoNum); \
	DECLARE_FUNCTION(execGetWeaponSymbolIcon); \
	DECLARE_FUNCTION(execGetWeaponSymbolTexture); \
	DECLARE_FUNCTION(execSetLastSelectedWeaponIndex); \
	DECLARE_FUNCTION(execUpdateBadgeList); \
	DECLARE_FUNCTION(execUpdatePlayerIcon); \
	DECLARE_FUNCTION(execUpdatePlayerIconBg); \
	DECLARE_FUNCTION(execUpdateWeaponDecal); \
	DECLARE_FUNCTION(execUpdateWeaponSymbolIcon);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELUserProfileManager(); \
	friend struct Z_Construct_UClass_UELUserProfileManager_Statics; \
public: \
	DECLARE_CLASS(UELUserProfileManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELUserProfileManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUELUserProfileManager(); \
	friend struct Z_Construct_UClass_UELUserProfileManager_Statics; \
public: \
	DECLARE_CLASS(UELUserProfileManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELUserProfileManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELUserProfileManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELUserProfileManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELUserProfileManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELUserProfileManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELUserProfileManager(UELUserProfileManager&&); \
	NO_API UELUserProfileManager(const UELUserProfileManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELUserProfileManager(UELUserProfileManager&&); \
	NO_API UELUserProfileManager(const UELUserProfileManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELUserProfileManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELUserProfileManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELUserProfileManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_PlayerIconRefMap() { return STRUCT_OFFSET(UELUserProfileManager, m_PlayerIconRefMap); } \
	FORCEINLINE static uint32 __PPO__m_PlayerIconBgRefMap() { return STRUCT_OFFSET(UELUserProfileManager, m_PlayerIconBgRefMap); } \
	FORCEINLINE static uint32 __PPO__m_BadgeRefMap() { return STRUCT_OFFSET(UELUserProfileManager, m_BadgeRefMap); } \
	FORCEINLINE static uint32 __PPO__m_WeaponDecalRefMap() { return STRUCT_OFFSET(UELUserProfileManager, m_WeaponDecalRefMap); } \
	FORCEINLINE static uint32 __PPO__m_WeaponPlacements() { return STRUCT_OFFSET(UELUserProfileManager, m_WeaponPlacements); } \
	FORCEINLINE static uint32 __PPO__m_WeaponSymbolIconRefMap() { return STRUCT_OFFSET(UELUserProfileManager, m_WeaponSymbolIconRefMap); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_18_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELUserProfileManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELUserProfileManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
