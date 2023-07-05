// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDisplayButtonIconType : uint8;
class UFont;
#ifdef ABP_200508_ELGeneralFontBase_generated_h
#error "ELGeneralFontBase.generated.h already included, missing '#pragma once' in ELGeneralFontBase.h"
#endif
#define ABP_200508_ELGeneralFontBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_RPC_WRAPPERS \
	virtual void ChangeForceDisplayIconType_Implementation(EDisplayButtonIconType _changeIconType); \
 \
	DECLARE_FUNCTION(execChangeForceDisplayIconType); \
	DECLARE_FUNCTION(execInvalidForceDisplayIconType); \
	DECLARE_FUNCTION(execReplaceUnsupportedCharacter); \
	DECLARE_FUNCTION(execValidForceDisplayIconType);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ChangeForceDisplayIconType_Implementation(EDisplayButtonIconType _changeIconType); \
 \
	DECLARE_FUNCTION(execChangeForceDisplayIconType); \
	DECLARE_FUNCTION(execInvalidForceDisplayIconType); \
	DECLARE_FUNCTION(execReplaceUnsupportedCharacter); \
	DECLARE_FUNCTION(execValidForceDisplayIconType);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_EVENT_PARMS \
	struct ELGeneralFontBase_eventChangeForceDisplayIconType_Parms \
	{ \
		EDisplayButtonIconType _changeIconType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELGeneralFontBase(); \
	friend struct Z_Construct_UClass_UELGeneralFontBase_Statics; \
public: \
	DECLARE_CLASS(UELGeneralFontBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGeneralFontBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELGeneralFontBase(); \
	friend struct Z_Construct_UClass_UELGeneralFontBase_Statics; \
public: \
	DECLARE_CLASS(UELGeneralFontBase, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGeneralFontBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELGeneralFontBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELGeneralFontBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGeneralFontBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGeneralFontBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGeneralFontBase(UELGeneralFontBase&&); \
	NO_API UELGeneralFontBase(const UELGeneralFontBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGeneralFontBase(UELGeneralFontBase&&); \
	NO_API UELGeneralFontBase(const UELGeneralFontBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGeneralFontBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGeneralFontBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELGeneralFontBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ButtonIconType() { return STRUCT_OFFSET(UELGeneralFontBase, m_ButtonIconType); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELGeneralFontBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGeneralFontBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
