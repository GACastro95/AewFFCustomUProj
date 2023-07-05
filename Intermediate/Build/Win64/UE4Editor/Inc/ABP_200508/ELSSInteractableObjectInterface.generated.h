// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELSSPlayer;
struct FVector;
enum class ESSInteractExecute : uint8;
#ifdef ABP_200508_ELSSInteractableObjectInterface_generated_h
#error "ELSSInteractableObjectInterface.generated.h already included, missing '#pragma once' in ELSSInteractableObjectInterface.h"
#endif
#define ABP_200508_ELSSInteractableObjectInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_RPC_WRAPPERS \
	virtual bool CanInteract_Implementation(const AELSSPlayer* inInteractPlayer) const { return false; }; \
	virtual bool CheckForSpecialCaseDoInteract_Implementation(const AELSSPlayer* inInteractPlayer) const { return false; }; \
	virtual void ExecuteInteractEffect_Implementation(AELSSPlayer* inInteractPlayer) {}; \
	virtual int32 GetDatabaseId_Implementation() const { return 0; }; \
	virtual FVector GetDotIconBaseLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual FVector GetDotIconLocationOffset_Implementation() const { return FVector(ForceInit); }; \
	virtual FVector GetIdealInteractLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual float GetInteractDuration_Implementation() const { return 0; }; \
	virtual ESSInteractExecute GetInteractExecuteType_Implementation() const { return (ESSInteractExecute)0; }; \
	virtual int32 GetInteractPriority_Implementation() const { return 0; }; \
	virtual FVector GetInteractUIOffset_Implementation() const { return FVector(ForceInit); }; \
	virtual int32 GetInteractUIValue_Implementation() const { return 0; }; \
	virtual bool NeedsCheckInteractDegree_Implementation() const { return false; }; \
	virtual void OnBeginInteract_Implementation(AELSSPlayer* inInteractPlayer) {}; \
	virtual void OnEndInteract_Implementation(AELSSPlayer* inInteractPlayer, bool inSuccess) {}; \
	virtual void OnTickInteract_Implementation(AELSSPlayer* inInteractPlayer, float inInteractRate) {}; \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execCheckForSpecialCaseDoInteract); \
	DECLARE_FUNCTION(execExecuteInteractEffect); \
	DECLARE_FUNCTION(execGetDatabaseId); \
	DECLARE_FUNCTION(execGetDotIconBaseLocation); \
	DECLARE_FUNCTION(execGetDotIconLocationOffset); \
	DECLARE_FUNCTION(execGetIdealInteractLocation); \
	DECLARE_FUNCTION(execGetInteractDuration); \
	DECLARE_FUNCTION(execGetInteractExecuteType); \
	DECLARE_FUNCTION(execGetInteractPriority); \
	DECLARE_FUNCTION(execGetInteractUIOffset); \
	DECLARE_FUNCTION(execGetInteractUIValue); \
	DECLARE_FUNCTION(execNeedsCheckInteractDegree); \
	DECLARE_FUNCTION(execOnBeginInteract); \
	DECLARE_FUNCTION(execOnEndInteract); \
	DECLARE_FUNCTION(execOnTickInteract);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanInteract_Implementation(const AELSSPlayer* inInteractPlayer) const { return false; }; \
	virtual bool CheckForSpecialCaseDoInteract_Implementation(const AELSSPlayer* inInteractPlayer) const { return false; }; \
	virtual void ExecuteInteractEffect_Implementation(AELSSPlayer* inInteractPlayer) {}; \
	virtual int32 GetDatabaseId_Implementation() const { return 0; }; \
	virtual FVector GetDotIconBaseLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual FVector GetDotIconLocationOffset_Implementation() const { return FVector(ForceInit); }; \
	virtual FVector GetIdealInteractLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual float GetInteractDuration_Implementation() const { return 0; }; \
	virtual ESSInteractExecute GetInteractExecuteType_Implementation() const { return (ESSInteractExecute)0; }; \
	virtual int32 GetInteractPriority_Implementation() const { return 0; }; \
	virtual FVector GetInteractUIOffset_Implementation() const { return FVector(ForceInit); }; \
	virtual int32 GetInteractUIValue_Implementation() const { return 0; }; \
	virtual bool NeedsCheckInteractDegree_Implementation() const { return false; }; \
	virtual void OnBeginInteract_Implementation(AELSSPlayer* inInteractPlayer) {}; \
	virtual void OnEndInteract_Implementation(AELSSPlayer* inInteractPlayer, bool inSuccess) {}; \
	virtual void OnTickInteract_Implementation(AELSSPlayer* inInteractPlayer, float inInteractRate) {}; \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execCheckForSpecialCaseDoInteract); \
	DECLARE_FUNCTION(execExecuteInteractEffect); \
	DECLARE_FUNCTION(execGetDatabaseId); \
	DECLARE_FUNCTION(execGetDotIconBaseLocation); \
	DECLARE_FUNCTION(execGetDotIconLocationOffset); \
	DECLARE_FUNCTION(execGetIdealInteractLocation); \
	DECLARE_FUNCTION(execGetInteractDuration); \
	DECLARE_FUNCTION(execGetInteractExecuteType); \
	DECLARE_FUNCTION(execGetInteractPriority); \
	DECLARE_FUNCTION(execGetInteractUIOffset); \
	DECLARE_FUNCTION(execGetInteractUIValue); \
	DECLARE_FUNCTION(execNeedsCheckInteractDegree); \
	DECLARE_FUNCTION(execOnBeginInteract); \
	DECLARE_FUNCTION(execOnEndInteract); \
	DECLARE_FUNCTION(execOnTickInteract);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_EVENT_PARMS \
	struct ELSSInteractableObjectInterface_eventCanInteract_Parms \
	{ \
		const AELSSPlayer* inInteractPlayer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventCanInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms \
	{ \
		const AELSSPlayer* inInteractPlayer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventCheckForSpecialCaseDoInteract_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventExecuteInteractEffect_Parms \
	{ \
		AELSSPlayer* inInteractPlayer; \
	}; \
	struct ELSSInteractableObjectInterface_eventGetDatabaseId_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetDatabaseId_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetDotIconBaseLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetDotIconBaseLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetDotIconLocationOffset_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetDotIconLocationOffset_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetIdealInteractLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetIdealInteractLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetInteractDuration_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetInteractDuration_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetInteractExecuteType_Parms \
	{ \
		ESSInteractExecute ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetInteractExecuteType_Parms() \
			: ReturnValue((ESSInteractExecute)0) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetInteractPriority_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetInteractPriority_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetInteractUIOffset_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetInteractUIOffset_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventGetInteractUIValue_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventGetInteractUIValue_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventNeedsCheckInteractDegree_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSInteractableObjectInterface_eventNeedsCheckInteractDegree_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSInteractableObjectInterface_eventOnBeginInteract_Parms \
	{ \
		AELSSPlayer* inInteractPlayer; \
	}; \
	struct ELSSInteractableObjectInterface_eventOnEndInteract_Parms \
	{ \
		AELSSPlayer* inInteractPlayer; \
		bool inSuccess; \
	}; \
	struct ELSSInteractableObjectInterface_eventOnTickInteract_Parms \
	{ \
		AELSSPlayer* inInteractPlayer; \
		float inInteractRate; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSInteractableObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSInteractableObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSInteractableObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSInteractableObjectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSInteractableObjectInterface(UELSSInteractableObjectInterface&&); \
	NO_API UELSSInteractableObjectInterface(const UELSSInteractableObjectInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSInteractableObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSInteractableObjectInterface(UELSSInteractableObjectInterface&&); \
	NO_API UELSSInteractableObjectInterface(const UELSSInteractableObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSInteractableObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSInteractableObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSInteractableObjectInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELSSInteractableObjectInterface(); \
	friend struct Z_Construct_UClass_UELSSInteractableObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UELSSInteractableObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSInteractableObjectInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELSSInteractableObjectInterface() {} \
public: \
	typedef UELSSInteractableObjectInterface UClassType; \
	typedef IELSSInteractableObjectInterface ThisClass; \
	static bool Execute_CanInteract(const UObject* O, const AELSSPlayer* inInteractPlayer); \
	static bool Execute_CheckForSpecialCaseDoInteract(const UObject* O, const AELSSPlayer* inInteractPlayer); \
	static void Execute_ExecuteInteractEffect(UObject* O, AELSSPlayer* inInteractPlayer); \
	static int32 Execute_GetDatabaseId(const UObject* O); \
	static FVector Execute_GetDotIconBaseLocation(const UObject* O); \
	static FVector Execute_GetDotIconLocationOffset(const UObject* O); \
	static FVector Execute_GetIdealInteractLocation(const UObject* O); \
	static float Execute_GetInteractDuration(const UObject* O); \
	static ESSInteractExecute Execute_GetInteractExecuteType(const UObject* O); \
	static int32 Execute_GetInteractPriority(const UObject* O); \
	static FVector Execute_GetInteractUIOffset(const UObject* O); \
	static int32 Execute_GetInteractUIValue(const UObject* O); \
	static bool Execute_NeedsCheckInteractDegree(const UObject* O); \
	static void Execute_OnBeginInteract(UObject* O, AELSSPlayer* inInteractPlayer); \
	static void Execute_OnEndInteract(UObject* O, AELSSPlayer* inInteractPlayer, bool inSuccess); \
	static void Execute_OnTickInteract(UObject* O, AELSSPlayer* inInteractPlayer, float inInteractRate); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IELSSInteractableObjectInterface() {} \
public: \
	typedef UELSSInteractableObjectInterface UClassType; \
	typedef IELSSInteractableObjectInterface ThisClass; \
	static bool Execute_CanInteract(const UObject* O, const AELSSPlayer* inInteractPlayer); \
	static bool Execute_CheckForSpecialCaseDoInteract(const UObject* O, const AELSSPlayer* inInteractPlayer); \
	static void Execute_ExecuteInteractEffect(UObject* O, AELSSPlayer* inInteractPlayer); \
	static int32 Execute_GetDatabaseId(const UObject* O); \
	static FVector Execute_GetDotIconBaseLocation(const UObject* O); \
	static FVector Execute_GetDotIconLocationOffset(const UObject* O); \
	static FVector Execute_GetIdealInteractLocation(const UObject* O); \
	static float Execute_GetInteractDuration(const UObject* O); \
	static ESSInteractExecute Execute_GetInteractExecuteType(const UObject* O); \
	static int32 Execute_GetInteractPriority(const UObject* O); \
	static FVector Execute_GetInteractUIOffset(const UObject* O); \
	static int32 Execute_GetInteractUIValue(const UObject* O); \
	static bool Execute_NeedsCheckInteractDegree(const UObject* O); \
	static void Execute_OnBeginInteract(UObject* O, AELSSPlayer* inInteractPlayer); \
	static void Execute_OnEndInteract(UObject* O, AELSSPlayer* inInteractPlayer, bool inSuccess); \
	static void Execute_OnTickInteract(UObject* O, AELSSPlayer* inInteractPlayer, float inInteractRate); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSInteractableObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSInteractableObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
