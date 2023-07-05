// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAbilityScoreType : uint8;
enum class EBodyType : uint8;
struct FELMoves;
enum class EFanReaction : uint8;
struct FELMoves_Finisher;
struct FHomeTownID;
class UTexture;
enum class EReversalMotionType : uint8;
struct FWrestlerSetupParam;
enum class ESystemMotionType : uint8;
enum class EWrestlerID_N : uint8;
#ifdef ABP_200508_WrestlerProfilesInterface_generated_h
#error "WrestlerProfilesInterface.generated.h already included, missing '#pragma once' in WrestlerProfilesInterface.h"
#endif
#define ABP_200508_WrestlerProfilesInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_RPC_WRAPPERS \
	virtual int32 GetAbilityScore_Implementation(const EAbilityScoreType AbilityScoreType) const { return 0; }; \
	virtual EBodyType GetBodyType_Implementation() const { return (EBodyType)0; }; \
	virtual void GetDefaultMoves_Implementation(FELMoves& Out) const {}; \
	virtual EFanReaction GetFanReaction_Implementation() const { return (EFanReaction)0; }; \
	virtual int32 GetFavoriteProps_Implementation() const { return 0; }; \
	virtual int32 GetFightStyle_Implementation() const { return 0; }; \
	virtual void GetFinisherMoves_Implementation(FELMoves_Finisher& Out) const {}; \
	virtual void GetHomeTownID_Implementation(FHomeTownID& Out) const {}; \
	virtual FText GetHomeTownText_Implementation(bool bUpper) const { return FText::GetEmpty(); }; \
	virtual UTexture* GetHudTexture_Implementation() const { return NULL; }; \
	virtual EReversalMotionType GetReversalMotionType_Implementation() const { return (EReversalMotionType)0; }; \
	virtual bool GetSetupParam_Implementation(FWrestlerSetupParam& Out) const { return false; }; \
	virtual void GetSignatureMoves_Implementation(FELMoves_Finisher& Out) const {}; \
	virtual FText GetSocialNetworkName_Implementation() const { return FText::GetEmpty(); }; \
	virtual ESystemMotionType GetSystemMotionType_Implementation() const { return (ESystemMotionType)0; }; \
	virtual EWrestlerID_N GetWrestlerID_Implementation() const { return (EWrestlerID_N)0; }; \
	virtual FText GetWrestlerName_Implementation(bool bUpper, bool bMultiLined) const { return FText::GetEmpty(); }; \
	virtual bool HasActionSkill_Implementation(const int32 ActionSkillID) const { return false; }; \
	virtual bool HasPassiveSkill_Implementation(const int32 PassiveSkillID) const { return false; }; \
	virtual void Setup_Implementation(FWrestlerSetupParam const& NewParam) {}; \
 \
	DECLARE_FUNCTION(execGetAbilityScore); \
	DECLARE_FUNCTION(execGetBodyType); \
	DECLARE_FUNCTION(execGetDefaultMoves); \
	DECLARE_FUNCTION(execGetFanReaction); \
	DECLARE_FUNCTION(execGetFavoriteProps); \
	DECLARE_FUNCTION(execGetFightStyle); \
	DECLARE_FUNCTION(execGetFinisherMoves); \
	DECLARE_FUNCTION(execGetHomeTownID); \
	DECLARE_FUNCTION(execGetHomeTownText); \
	DECLARE_FUNCTION(execGetHudTexture); \
	DECLARE_FUNCTION(execGetReversalMotionType); \
	DECLARE_FUNCTION(execGetSetupParam); \
	DECLARE_FUNCTION(execGetSignatureMoves); \
	DECLARE_FUNCTION(execGetSocialNetworkName); \
	DECLARE_FUNCTION(execGetSystemMotionType); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerName); \
	DECLARE_FUNCTION(execHasActionSkill); \
	DECLARE_FUNCTION(execHasPassiveSkill); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetAbilityScore_Implementation(const EAbilityScoreType AbilityScoreType) const { return 0; }; \
	virtual EBodyType GetBodyType_Implementation() const { return (EBodyType)0; }; \
	virtual void GetDefaultMoves_Implementation(FELMoves& Out) const {}; \
	virtual EFanReaction GetFanReaction_Implementation() const { return (EFanReaction)0; }; \
	virtual int32 GetFavoriteProps_Implementation() const { return 0; }; \
	virtual int32 GetFightStyle_Implementation() const { return 0; }; \
	virtual void GetFinisherMoves_Implementation(FELMoves_Finisher& Out) const {}; \
	virtual void GetHomeTownID_Implementation(FHomeTownID& Out) const {}; \
	virtual FText GetHomeTownText_Implementation(bool bUpper) const { return FText::GetEmpty(); }; \
	virtual UTexture* GetHudTexture_Implementation() const { return NULL; }; \
	virtual EReversalMotionType GetReversalMotionType_Implementation() const { return (EReversalMotionType)0; }; \
	virtual bool GetSetupParam_Implementation(FWrestlerSetupParam& Out) const { return false; }; \
	virtual void GetSignatureMoves_Implementation(FELMoves_Finisher& Out) const {}; \
	virtual FText GetSocialNetworkName_Implementation() const { return FText::GetEmpty(); }; \
	virtual ESystemMotionType GetSystemMotionType_Implementation() const { return (ESystemMotionType)0; }; \
	virtual EWrestlerID_N GetWrestlerID_Implementation() const { return (EWrestlerID_N)0; }; \
	virtual FText GetWrestlerName_Implementation(bool bUpper, bool bMultiLined) const { return FText::GetEmpty(); }; \
	virtual bool HasActionSkill_Implementation(const int32 ActionSkillID) const { return false; }; \
	virtual bool HasPassiveSkill_Implementation(const int32 PassiveSkillID) const { return false; }; \
	virtual void Setup_Implementation(FWrestlerSetupParam const& NewParam) {}; \
 \
	DECLARE_FUNCTION(execGetAbilityScore); \
	DECLARE_FUNCTION(execGetBodyType); \
	DECLARE_FUNCTION(execGetDefaultMoves); \
	DECLARE_FUNCTION(execGetFanReaction); \
	DECLARE_FUNCTION(execGetFavoriteProps); \
	DECLARE_FUNCTION(execGetFightStyle); \
	DECLARE_FUNCTION(execGetFinisherMoves); \
	DECLARE_FUNCTION(execGetHomeTownID); \
	DECLARE_FUNCTION(execGetHomeTownText); \
	DECLARE_FUNCTION(execGetHudTexture); \
	DECLARE_FUNCTION(execGetReversalMotionType); \
	DECLARE_FUNCTION(execGetSetupParam); \
	DECLARE_FUNCTION(execGetSignatureMoves); \
	DECLARE_FUNCTION(execGetSocialNetworkName); \
	DECLARE_FUNCTION(execGetSystemMotionType); \
	DECLARE_FUNCTION(execGetWrestlerID); \
	DECLARE_FUNCTION(execGetWrestlerName); \
	DECLARE_FUNCTION(execHasActionSkill); \
	DECLARE_FUNCTION(execHasPassiveSkill); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_EVENT_PARMS \
	struct WrestlerProfilesInterface_eventGetAbilityScore_Parms \
	{ \
		EAbilityScoreType AbilityScoreType; \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetAbilityScore_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetBodyType_Parms \
	{ \
		EBodyType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetBodyType_Parms() \
			: ReturnValue((EBodyType)0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetDefaultMoves_Parms \
	{ \
		FELMoves Out; \
	}; \
	struct WrestlerProfilesInterface_eventGetFanReaction_Parms \
	{ \
		EFanReaction ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetFanReaction_Parms() \
			: ReturnValue((EFanReaction)0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetFavoriteProps_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetFavoriteProps_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetFightStyle_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetFightStyle_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetFinisherMoves_Parms \
	{ \
		FELMoves_Finisher Out; \
	}; \
	struct WrestlerProfilesInterface_eventGetHomeTownID_Parms \
	{ \
		FHomeTownID Out; \
	}; \
	struct WrestlerProfilesInterface_eventGetHomeTownText_Parms \
	{ \
		bool bUpper; \
		FText ReturnValue; \
	}; \
	struct WrestlerProfilesInterface_eventGetHudTexture_Parms \
	{ \
		UTexture* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetHudTexture_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetReversalMotionType_Parms \
	{ \
		EReversalMotionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetReversalMotionType_Parms() \
			: ReturnValue((EReversalMotionType)0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetSetupParam_Parms \
	{ \
		FWrestlerSetupParam Out; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetSetupParam_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetSignatureMoves_Parms \
	{ \
		FELMoves_Finisher Out; \
	}; \
	struct WrestlerProfilesInterface_eventGetSocialNetworkName_Parms \
	{ \
		FText ReturnValue; \
	}; \
	struct WrestlerProfilesInterface_eventGetSystemMotionType_Parms \
	{ \
		ESystemMotionType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetSystemMotionType_Parms() \
			: ReturnValue((ESystemMotionType)0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetWrestlerID_Parms \
	{ \
		EWrestlerID_N ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventGetWrestlerID_Parms() \
			: ReturnValue((EWrestlerID_N)0) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventGetWrestlerName_Parms \
	{ \
		bool bUpper; \
		bool bMultiLined; \
		FText ReturnValue; \
	}; \
	struct WrestlerProfilesInterface_eventHasActionSkill_Parms \
	{ \
		int32 ActionSkillID; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventHasActionSkill_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventHasPassiveSkill_Parms \
	{ \
		int32 PassiveSkillID; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		WrestlerProfilesInterface_eventHasPassiveSkill_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct WrestlerProfilesInterface_eventSetup_Parms \
	{ \
		FWrestlerSetupParam NewParam; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrestlerProfilesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrestlerProfilesInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrestlerProfilesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrestlerProfilesInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrestlerProfilesInterface(UWrestlerProfilesInterface&&); \
	NO_API UWrestlerProfilesInterface(const UWrestlerProfilesInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWrestlerProfilesInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWrestlerProfilesInterface(UWrestlerProfilesInterface&&); \
	NO_API UWrestlerProfilesInterface(const UWrestlerProfilesInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWrestlerProfilesInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWrestlerProfilesInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWrestlerProfilesInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWrestlerProfilesInterface(); \
	friend struct Z_Construct_UClass_UWrestlerProfilesInterface_Statics; \
public: \
	DECLARE_CLASS(UWrestlerProfilesInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UWrestlerProfilesInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWrestlerProfilesInterface() {} \
public: \
	typedef UWrestlerProfilesInterface UClassType; \
	typedef IWrestlerProfilesInterface ThisClass; \
	static int32 Execute_GetAbilityScore(const UObject* O, const EAbilityScoreType AbilityScoreType); \
	static EBodyType Execute_GetBodyType(const UObject* O); \
	static void Execute_GetDefaultMoves(const UObject* O, FELMoves& Out); \
	static EFanReaction Execute_GetFanReaction(const UObject* O); \
	static int32 Execute_GetFavoriteProps(const UObject* O); \
	static int32 Execute_GetFightStyle(const UObject* O); \
	static void Execute_GetFinisherMoves(const UObject* O, FELMoves_Finisher& Out); \
	static void Execute_GetHomeTownID(const UObject* O, FHomeTownID& Out); \
	static FText Execute_GetHomeTownText(const UObject* O, bool bUpper); \
	static UTexture* Execute_GetHudTexture(const UObject* O); \
	static EReversalMotionType Execute_GetReversalMotionType(const UObject* O); \
	static bool Execute_GetSetupParam(const UObject* O, FWrestlerSetupParam& Out); \
	static void Execute_GetSignatureMoves(const UObject* O, FELMoves_Finisher& Out); \
	static FText Execute_GetSocialNetworkName(const UObject* O); \
	static ESystemMotionType Execute_GetSystemMotionType(const UObject* O); \
	static EWrestlerID_N Execute_GetWrestlerID(const UObject* O); \
	static FText Execute_GetWrestlerName(const UObject* O, bool bUpper, bool bMultiLined); \
	static bool Execute_HasActionSkill(const UObject* O, const int32 ActionSkillID); \
	static bool Execute_HasPassiveSkill(const UObject* O, const int32 PassiveSkillID); \
	static void Execute_Setup(UObject* O, FWrestlerSetupParam const& NewParam); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IWrestlerProfilesInterface() {} \
public: \
	typedef UWrestlerProfilesInterface UClassType; \
	typedef IWrestlerProfilesInterface ThisClass; \
	static int32 Execute_GetAbilityScore(const UObject* O, const EAbilityScoreType AbilityScoreType); \
	static EBodyType Execute_GetBodyType(const UObject* O); \
	static void Execute_GetDefaultMoves(const UObject* O, FELMoves& Out); \
	static EFanReaction Execute_GetFanReaction(const UObject* O); \
	static int32 Execute_GetFavoriteProps(const UObject* O); \
	static int32 Execute_GetFightStyle(const UObject* O); \
	static void Execute_GetFinisherMoves(const UObject* O, FELMoves_Finisher& Out); \
	static void Execute_GetHomeTownID(const UObject* O, FHomeTownID& Out); \
	static FText Execute_GetHomeTownText(const UObject* O, bool bUpper); \
	static UTexture* Execute_GetHudTexture(const UObject* O); \
	static EReversalMotionType Execute_GetReversalMotionType(const UObject* O); \
	static bool Execute_GetSetupParam(const UObject* O, FWrestlerSetupParam& Out); \
	static void Execute_GetSignatureMoves(const UObject* O, FELMoves_Finisher& Out); \
	static FText Execute_GetSocialNetworkName(const UObject* O); \
	static ESystemMotionType Execute_GetSystemMotionType(const UObject* O); \
	static EWrestlerID_N Execute_GetWrestlerID(const UObject* O); \
	static FText Execute_GetWrestlerName(const UObject* O, bool bUpper, bool bMultiLined); \
	static bool Execute_HasActionSkill(const UObject* O, const int32 ActionSkillID); \
	static bool Execute_HasPassiveSkill(const UObject* O, const int32 PassiveSkillID); \
	static void Execute_Setup(UObject* O, FWrestlerSetupParam const& NewParam); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_18_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UWrestlerProfilesInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_WrestlerProfilesInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
