// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef ABP_200508_YCAM_DebugMenu_generated_h
#error "YCAM_DebugMenu.generated.h already included, missing '#pragma once' in YCAM_DebugMenu.h"
#endif
#define ABP_200508_YCAM_DebugMenu_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertTexture2DToBuffer);


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertTexture2DToBuffer);


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_EVENT_PARMS \
	struct YCAM_DebugMenu_eventEnableCAMMode_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		YCAM_DebugMenu_eventEnableCAMMode_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct YCAM_DebugMenu_eventEnableCanStartPreview_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		YCAM_DebugMenu_eventEnableCanStartPreview_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct YCAM_DebugMenu_eventEnablePlayingPreview_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		YCAM_DebugMenu_eventEnablePlayingPreview_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYCAM_DebugMenu(); \
	friend struct Z_Construct_UClass_UYCAM_DebugMenu_Statics; \
public: \
	DECLARE_CLASS(UYCAM_DebugMenu, UYCreate_DebugMenuBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYCAM_DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUYCAM_DebugMenu(); \
	friend struct Z_Construct_UClass_UYCAM_DebugMenu_Statics; \
public: \
	DECLARE_CLASS(UYCAM_DebugMenu, UYCreate_DebugMenuBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYCAM_DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYCAM_DebugMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYCAM_DebugMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYCAM_DebugMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYCAM_DebugMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYCAM_DebugMenu(UYCAM_DebugMenu&&); \
	NO_API UYCAM_DebugMenu(const UYCAM_DebugMenu&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYCAM_DebugMenu(UYCAM_DebugMenu&&); \
	NO_API UYCAM_DebugMenu(const UYCAM_DebugMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYCAM_DebugMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYCAM_DebugMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYCAM_DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__menuId() { return STRUCT_OFFSET(UYCAM_DebugMenu, menuId); } \
	FORCEINLINE static uint32 __PPO__PreviewIdxNow() { return STRUCT_OFFSET(UYCAM_DebugMenu, PreviewIdxNow); } \
	FORCEINLINE static uint32 __PPO__MaxPreview() { return STRUCT_OFFSET(UYCAM_DebugMenu, MaxPreview); } \
	FORCEINLINE static uint32 __PPO__PreviewIdxJump() { return STRUCT_OFFSET(UYCAM_DebugMenu, PreviewIdxJump); } \
	FORCEINLINE static uint32 __PPO__isDeleteDuplicateCategory() { return STRUCT_OFFSET(UYCAM_DebugMenu, isDeleteDuplicateCategory); } \
	FORCEINLINE static uint32 __PPO__isEndless() { return STRUCT_OFFSET(UYCAM_DebugMenu, isEndless); } \
	FORCEINLINE static uint32 __PPO__isScreenShot() { return STRUCT_OFFSET(UYCAM_DebugMenu, isScreenShot); } \
	FORCEINLINE static uint32 __PPO__isNotThreadTickAsyncPlayer() { return STRUCT_OFFSET(UYCAM_DebugMenu, isNotThreadTickAsyncPlayer); }


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_8_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UYCAM_DebugMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_YCAM_DebugMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
