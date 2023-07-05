// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
enum class ESSVehicleType : uint8;
class AELSSPlayer;
#ifdef ABP_200508_ELSSVehicleInterface_generated_h
#error "ELSSVehicleInterface.generated.h already included, missing '#pragma once' in ELSSVehicleInterface.h"
#endif
#define ABP_200508_ELSSVehicleInterface_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_RPC_WRAPPERS \
	virtual FVector GetActorCameraBasisLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual int32 GetMaxDurability_Implementation() const { return 0; }; \
	virtual int32 GetRemainDurability_Implementation() const { return 0; }; \
	virtual float GetSpeedPerHour_Implementation() const { return 0; }; \
	virtual ESSVehicleType GetVehicleType_Implementation() const { return (ESSVehicleType)0; }; \
	virtual void OnGetOff_Implementation(AELSSPlayer* Player) {}; \
	virtual void OnGetOn_Implementation(AELSSPlayer* Player) {}; \
 \
	DECLARE_FUNCTION(execGetActorCameraBasisLocation); \
	DECLARE_FUNCTION(execGetMaxDurability); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execGetSpeedPerHour); \
	DECLARE_FUNCTION(execGetVehicleType); \
	DECLARE_FUNCTION(execOnGetOff); \
	DECLARE_FUNCTION(execOnGetOn);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetActorCameraBasisLocation_Implementation() const { return FVector(ForceInit); }; \
	virtual int32 GetMaxDurability_Implementation() const { return 0; }; \
	virtual int32 GetRemainDurability_Implementation() const { return 0; }; \
	virtual float GetSpeedPerHour_Implementation() const { return 0; }; \
	virtual ESSVehicleType GetVehicleType_Implementation() const { return (ESSVehicleType)0; }; \
	virtual void OnGetOff_Implementation(AELSSPlayer* Player) {}; \
	virtual void OnGetOn_Implementation(AELSSPlayer* Player) {}; \
 \
	DECLARE_FUNCTION(execGetActorCameraBasisLocation); \
	DECLARE_FUNCTION(execGetMaxDurability); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execGetSpeedPerHour); \
	DECLARE_FUNCTION(execGetVehicleType); \
	DECLARE_FUNCTION(execOnGetOff); \
	DECLARE_FUNCTION(execOnGetOn);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_EVENT_PARMS \
	struct ELSSVehicleInterface_eventGetActorCameraBasisLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSVehicleInterface_eventGetActorCameraBasisLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct ELSSVehicleInterface_eventGetMaxDurability_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSVehicleInterface_eventGetMaxDurability_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSVehicleInterface_eventGetRemainDurability_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSVehicleInterface_eventGetRemainDurability_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSVehicleInterface_eventGetSpeedPerHour_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSVehicleInterface_eventGetSpeedPerHour_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSVehicleInterface_eventGetVehicleType_Parms \
	{ \
		ESSVehicleType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSVehicleInterface_eventGetVehicleType_Parms() \
			: ReturnValue((ESSVehicleType)0) \
		{ \
		} \
	}; \
	struct ELSSVehicleInterface_eventOnGetOff_Parms \
	{ \
		AELSSPlayer* Player; \
	}; \
	struct ELSSVehicleInterface_eventOnGetOn_Parms \
	{ \
		AELSSPlayer* Player; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSVehicleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSVehicleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSVehicleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSVehicleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSVehicleInterface(UELSSVehicleInterface&&); \
	NO_API UELSSVehicleInterface(const UELSSVehicleInterface&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSVehicleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSVehicleInterface(UELSSVehicleInterface&&); \
	NO_API UELSSVehicleInterface(const UELSSVehicleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSVehicleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSVehicleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSVehicleInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUELSSVehicleInterface(); \
	friend struct Z_Construct_UClass_UELSSVehicleInterface_Statics; \
public: \
	DECLARE_CLASS(UELSSVehicleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSVehicleInterface)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IELSSVehicleInterface() {} \
public: \
	typedef UELSSVehicleInterface UClassType; \
	typedef IELSSVehicleInterface ThisClass; \
	static FVector Execute_GetActorCameraBasisLocation(const UObject* O); \
	static int32 Execute_GetMaxDurability(const UObject* O); \
	static int32 Execute_GetRemainDurability(const UObject* O); \
	static float Execute_GetSpeedPerHour(const UObject* O); \
	static ESSVehicleType Execute_GetVehicleType(const UObject* O); \
	static void Execute_OnGetOff(UObject* O, AELSSPlayer* Player); \
	static void Execute_OnGetOn(UObject* O, AELSSPlayer* Player); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IELSSVehicleInterface() {} \
public: \
	typedef UELSSVehicleInterface UClassType; \
	typedef IELSSVehicleInterface ThisClass; \
	static FVector Execute_GetActorCameraBasisLocation(const UObject* O); \
	static int32 Execute_GetMaxDurability(const UObject* O); \
	static int32 Execute_GetRemainDurability(const UObject* O); \
	static float Execute_GetSpeedPerHour(const UObject* O); \
	static ESSVehicleType Execute_GetVehicleType(const UObject* O); \
	static void Execute_OnGetOff(UObject* O, AELSSPlayer* Player); \
	static void Execute_OnGetOn(UObject* O, AELSSPlayer* Player); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSVehicleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSVehicleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
