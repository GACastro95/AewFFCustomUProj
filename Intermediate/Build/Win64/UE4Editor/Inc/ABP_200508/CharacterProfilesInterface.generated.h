// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBodyHeightType : uint8;
enum class EBodyType : uint8;
enum class EBodyWeightType : uint8;
enum class EGender : uint8;
struct FGuid;
#ifdef ABP_200508_CharacterProfilesInterface_generated_h
#error "CharacterProfilesInterface.generated.h already included, missing '#pragma once' in CharacterProfilesInterface.h"
#endif
#define ABP_200508_CharacterProfilesInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_RPC_WRAPPERS \
	virtual float GetBodyHeight_Implementation() const { return 0; }; \
	virtual EBodyHeightType GetBodyHeightType_Implementation() const { return (EBodyHeightType)0; }; \
	virtual EBodyType GetBodyType_Implementation() const { return (EBodyType)0; }; \
	virtual float GetBodyWeight_Implementation() const { return 0; }; \
	virtual EBodyWeightType GetBodyWeightType_Implementation() const { return (EBodyWeightType)0; }; \
	virtual FText GetCharacterNameText_Implementation(bool bUpper) const { return FText::GetEmpty(); }; \
	virtual FText GetDisplayBodyHeightText_Implementation() const { return FText::GetEmpty(); }; \
	virtual FText GetDisplayBodyWeightText_Implementation() const { return FText::GetEmpty(); }; \
	virtual EGender GetGender_Implementation() const { return (EGender)0; }; \
	virtual FGuid GetUID_Implementation() const { return FGuid(); }; \
	virtual int32 GetVoiceType_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetBodyHeight); \
	DECLARE_FUNCTION(execGetBodyHeightType); \
	DECLARE_FUNCTION(execGetBodyType); \
	DECLARE_FUNCTION(execGetBodyWeight); \
	DECLARE_FUNCTION(execGetBodyWeightType); \
	DECLARE_FUNCTION(execGetCharacterNameText); \
	DECLARE_FUNCTION(execGetDisplayBodyHeightText); \
	DECLARE_FUNCTION(execGetDisplayBodyWeightText); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUID); \
	DECLARE_FUNCTION(execGetVoiceType);


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetBodyHeight_Implementation() const { return 0; }; \
	virtual EBodyHeightType GetBodyHeightType_Implementation() const { return (EBodyHeightType)0; }; \
	virtual EBodyType GetBodyType_Implementation() const { return (EBodyType)0; }; \
	virtual float GetBodyWeight_Implementation() const { return 0; }; \
	virtual EBodyWeightType GetBodyWeightType_Implementation() const { return (EBodyWeightType)0; }; \
	virtual FText GetCharacterNameText_Implementation(bool bUpper) const { return FText::GetEmpty(); }; \
	virtual FText GetDisplayBodyHeightText_Implementation() const { return FText::GetEmpty(); }; \
	virtual FText GetDisplayBodyWeightText_Implementation() const { return FText::GetEmpty(); }; \
	virtual EGender GetGender_Implementation() const { return (EGender)0; }; \
	virtual FGuid GetUID_Implementation() const { return FGuid(); }; \
	virtual int32 GetVoiceType_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetBodyHeight); \
	DECLARE_FUNCTION(execGetBodyHeightType); \
	DECLARE_FUNCTION(execGetBodyType); \
	DECLARE_FUNCTION(execGetBodyWeight); \
	DECLARE_FUNCTION(execGetBodyWeightType); \
	DECLARE_FUNCTION(execGetCharacterNameText); \
	DECLARE_FUNCTION(execGetDisplayBodyHeightText); \
	DECLARE_FUNCTION(execGetDisplayBodyWeightText); \
	DECLARE_FUNCTION(execGetGender); \
	DECLARE_FUNCTION(execGetUID); \
	DECLARE_FUNCTION(execGetVoiceType);


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_EVENT_PARMS \
	struct CharacterProfilesInterface_eventGetBodyHeight_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterProfilesInterface_eventGetBodyHeight_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct CharacterProfilesInterface_eventGetBodyHeightType_Parms \
	{ \
		EBodyHeightType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterProfilesInterface_eventGetBodyHeightType_Parms() \
			: ReturnValue((EBodyHeightType)0) \
		{ \
		} \
	}; \
	struct CharacterProfilesInterface_eventGetBodyType_Parms \
	{ \
		EBodyType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterProfilesInterface_eventGetBodyType_Parms() \
			: ReturnValue((EBodyType)0) \
		{ \
		} \
	}; \
	struct CharacterProfilesInterface_eventGetBodyWeight_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterProfilesInterface_eventGetBodyWeight_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct CharacterProfilesInterface_eventGetBodyWeightType_Parms \
	{ \
		EBodyWeightType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterProfilesInterface_eventGetBodyWeightType_Parms() \
			: ReturnValue((EBodyWeightType)0) \
		{ \
		} \
	}; \
	struct CharacterProfilesInterface_eventGetCharacterNameText_Parms \
	{ \
		bool bUpper; \
		FText ReturnValue; \
	}; \
	struct CharacterProfilesInterface_eventGetDisplayBodyHeightText_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct CharacterProfilesInterface_eventGetDisplayBodyWeightText_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct CharacterProfilesInterface_eventGetGender_Parms \
	{ \
		EGender ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterProfilesInterface_eventGetGender_Parms() \
			: ReturnValue((EGender)0) \
		{ \
		} \
	}; \
	struct CharacterProfilesInterface_eventGetUID_Parms \
	{ \
		FGuid ReturnValue; \
	}; \
	struct CharacterProfilesInterface_eventGetVoiceType_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CharacterProfilesInterface_eventGetVoiceType_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterProfilesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterProfilesInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterProfilesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterProfilesInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterProfilesInterface(UCharacterProfilesInterface&&); \
	NO_API UCharacterProfilesInterface(const UCharacterProfilesInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterProfilesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterProfilesInterface(UCharacterProfilesInterface&&); \
	NO_API UCharacterProfilesInterface(const UCharacterProfilesInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterProfilesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterProfilesInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterProfilesInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCharacterProfilesInterface(); \
	friend struct Z_Construct_UClass_UCharacterProfilesInterface_Statics; \
public: \
	DECLARE_CLASS(UCharacterProfilesInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UCharacterProfilesInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICharacterProfilesInterface() {} \
public: \
	typedef UCharacterProfilesInterface UClassType; \
	typedef ICharacterProfilesInterface ThisClass; \
	static float Execute_GetBodyHeight(const UObject* O); \
	static EBodyHeightType Execute_GetBodyHeightType(const UObject* O); \
	static EBodyType Execute_GetBodyType(const UObject* O); \
	static float Execute_GetBodyWeight(const UObject* O); \
	static EBodyWeightType Execute_GetBodyWeightType(const UObject* O); \
	static FText Execute_GetCharacterNameText(const UObject* O, bool bUpper); \
	static FText Execute_GetDisplayBodyHeightText(const UObject* O); \
	static FText Execute_GetDisplayBodyWeightText(const UObject* O); \
	static EGender Execute_GetGender(const UObject* O); \
	static FGuid Execute_GetUID(const UObject* O); \
	static int32 Execute_GetVoiceType(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICharacterProfilesInterface() {} \
public: \
	typedef UCharacterProfilesInterface UClassType; \
	typedef ICharacterProfilesInterface ThisClass; \
	static float Execute_GetBodyHeight(const UObject* O); \
	static EBodyHeightType Execute_GetBodyHeightType(const UObject* O); \
	static EBodyType Execute_GetBodyType(const UObject* O); \
	static float Execute_GetBodyWeight(const UObject* O); \
	static EBodyWeightType Execute_GetBodyWeightType(const UObject* O); \
	static FText Execute_GetCharacterNameText(const UObject* O, bool bUpper); \
	static FText Execute_GetDisplayBodyHeightText(const UObject* O); \
	static FText Execute_GetDisplayBodyWeightText(const UObject* O); \
	static EGender Execute_GetGender(const UObject* O); \
	static FGuid Execute_GetUID(const UObject* O); \
	static int32 Execute_GetVoiceType(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UCharacterProfilesInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CharacterProfilesInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
