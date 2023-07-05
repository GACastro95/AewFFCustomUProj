// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ECareerRewardEffectType : uint8;
#ifdef ABP_200508_ELMessageWindowMenuWidgetBase_generated_h
#error "ELMessageWindowMenuWidgetBase.generated.h already included, missing '#pragma once' in ELMessageWindowMenuWidgetBase.h"
#endif
#define ABP_200508_ELMessageWindowMenuWidgetBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMessageKey); \
	DECLARE_FUNCTION(execParseStringWithLinefeed); \
	DECLARE_FUNCTION(execSetMessageKey);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMessageKey); \
	DECLARE_FUNCTION(execParseStringWithLinefeed); \
	DECLARE_FUNCTION(execSetMessageKey);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_EVENT_PARMS \
	struct ELMessageWindowMenuWidgetBase_eventSetSquareEffectTexture_Parms \
	{ \
		UTexture2D* pOverWriteTexture; \
	}; \
	struct ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms \
	{ \
		FName _StringID; \
		bool _bReplace; \
		FName _ReplaceString; \
		ECareerRewardEffectType _type; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMessageWindowMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMessageWindowMenuWidgetBase, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMessageWindowMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELMessageWindowMenuWidgetBase(); \
	friend struct Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics; \
public: \
	DECLARE_CLASS(UELMessageWindowMenuWidgetBase, UELCareerWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMessageWindowMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMessageWindowMenuWidgetBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMessageWindowMenuWidgetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMessageWindowMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMessageWindowMenuWidgetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMessageWindowMenuWidgetBase(UELMessageWindowMenuWidgetBase&&); \
	NO_API UELMessageWindowMenuWidgetBase(const UELMessageWindowMenuWidgetBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMessageWindowMenuWidgetBase(UELMessageWindowMenuWidgetBase&&); \
	NO_API UELMessageWindowMenuWidgetBase(const UELMessageWindowMenuWidgetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMessageWindowMenuWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMessageWindowMenuWidgetBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMessageWindowMenuWidgetBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMessageWindowMenuWidgetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMessageWindowMenuWidgetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
