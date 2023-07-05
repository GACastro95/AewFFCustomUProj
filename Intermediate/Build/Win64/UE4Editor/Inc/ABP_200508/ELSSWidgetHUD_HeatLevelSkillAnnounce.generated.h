// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSHeatLevelUpInfo;
enum class ESSMoveCommand : uint8;
struct FVector2D;
#ifdef ABP_200508_ELSSWidgetHUD_HeatLevelSkillAnnounce_generated_h
#error "ELSSWidgetHUD_HeatLevelSkillAnnounce.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_HeatLevelSkillAnnounce.h"
#endif
#define ABP_200508_ELSSWidgetHUD_HeatLevelSkillAnnounce_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_RPC_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_EVENT_PARMS \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatLevelText_Parms \
	{ \
		int32 inHeatLevel; \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventApplyHeatSkillAnnounce_Parms \
	{ \
		FSSHeatLevelUpInfo InHeatLevelUpInfo; \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventGetSkillName_Parms \
	{ \
		int32 InHeatLevelSkillId; \
		FString ReturnValue; \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsPlayAnimation_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsPlayAnimation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsShow_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSWidgetHUD_HeatLevelSkillAnnounce_eventIsShow_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventMakeMoveCommandText_Parms \
	{ \
		ESSMoveCommand inMoveCommand; \
		int32 inMoveId; \
		int32 InArrayNum; \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowOpacity_Parms \
	{ \
		float InOpacity; \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventSetWIndowSize_Parms \
	{ \
		FVector2D InWindowSize; \
	}; \
	struct ELSSWidgetHUD_HeatLevelSkillAnnounce_eventUpdate_Parms \
	{ \
		float InDeltaTime; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_HeatLevelSkillAnnounce(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_HeatLevelSkillAnnounce, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_HeatLevelSkillAnnounce)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_HeatLevelSkillAnnounce(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_HeatLevelSkillAnnounce_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_HeatLevelSkillAnnounce, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_HeatLevelSkillAnnounce)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_HeatLevelSkillAnnounce(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_HeatLevelSkillAnnounce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_HeatLevelSkillAnnounce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_HeatLevelSkillAnnounce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_HeatLevelSkillAnnounce(UELSSWidgetHUD_HeatLevelSkillAnnounce&&); \
	NO_API UELSSWidgetHUD_HeatLevelSkillAnnounce(const UELSSWidgetHUD_HeatLevelSkillAnnounce&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_HeatLevelSkillAnnounce(UELSSWidgetHUD_HeatLevelSkillAnnounce&&); \
	NO_API UELSSWidgetHUD_HeatLevelSkillAnnounce(const UELSSWidgetHUD_HeatLevelSkillAnnounce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_HeatLevelSkillAnnounce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_HeatLevelSkillAnnounce); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_HeatLevelSkillAnnounce)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_HeatLevelSkillAnnounce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatLevelSkillAnnounce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
