// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSSessionP2PAFGameFlowStep : uint8;
class UEOSSessionInfo;
class UEOSSessionP2PPacketBase;
class UEOSSessionUser;
#ifdef YEOSSDK_EOSSessionP2PAFGameFlowCallbackInterface_generated_h
#error "EOSSessionP2PAFGameFlowCallbackInterface.generated.h already included, missing '#pragma once' in EOSSessionP2PAFGameFlowCallbackInterface.h"
#endif
#define YEOSSDK_EOSSessionP2PAFGameFlowCallbackInterface_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_RPC_WRAPPERS \
	virtual bool IsPossibleToChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual uint8 OnChangedGameFlowForAllPlayers_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnReceivedSessionPacket_Implementation(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnResultForChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnResultForPossibleToChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnUserJoinInGame_Implementation(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnUserQuitGame_Implementation(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo) { return 0; }; \
 \
	DECLARE_FUNCTION(execIsPossibleToChangeGameFlow); \
	DECLARE_FUNCTION(execOnChangedGameFlowForAllPlayers); \
	DECLARE_FUNCTION(execOnChangeGameFlow); \
	DECLARE_FUNCTION(execOnReceivedSessionPacket); \
	DECLARE_FUNCTION(execOnResultForChangeGameFlow); \
	DECLARE_FUNCTION(execOnResultForPossibleToChangeGameFlow); \
	DECLARE_FUNCTION(execOnUserJoinInGame); \
	DECLARE_FUNCTION(execOnUserQuitGame);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsPossibleToChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual uint8 OnChangedGameFlowForAllPlayers_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnReceivedSessionPacket_Implementation(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnResultForChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnResultForPossibleToChangeGameFlow_Implementation(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnUserJoinInGame_Implementation(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual uint8 OnUserQuitGame_Implementation(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo) { return 0; }; \
 \
	DECLARE_FUNCTION(execIsPossibleToChangeGameFlow); \
	DECLARE_FUNCTION(execOnChangedGameFlowForAllPlayers); \
	DECLARE_FUNCTION(execOnChangeGameFlow); \
	DECLARE_FUNCTION(execOnReceivedSessionPacket); \
	DECLARE_FUNCTION(execOnResultForChangeGameFlow); \
	DECLARE_FUNCTION(execOnResultForPossibleToChangeGameFlow); \
	DECLARE_FUNCTION(execOnUserJoinInGame); \
	DECLARE_FUNCTION(execOnUserQuitGame);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_EVENT_PARMS \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms \
	{ \
		EEOSSessionP2PAFGameFlowStep GameFlowStep; \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventIsPossibleToChangeGameFlow_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms \
	{ \
		EEOSSessionP2PAFGameFlowStep GameFlowStep; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangedGameFlowForAllPlayers_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms \
	{ \
		EEOSSessionP2PAFGameFlowStep GameFlowStep; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnChangeGameFlow_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms \
	{ \
		UEOSSessionP2PPacketBase* PacketBase; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnReceivedSessionPacket_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms \
	{ \
		EEOSSessionP2PAFGameFlowStep GameFlowStep; \
		bool Result; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForChangeGameFlow_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms \
	{ \
		EEOSSessionP2PAFGameFlowStep GameFlowStep; \
		bool Result; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnResultForPossibleToChangeGameFlow_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms \
	{ \
		UEOSSessionUser* SessionUser; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserJoinInGame_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms \
	{ \
		UEOSSessionUser* SessionUser; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PAFGameFlowCallbackInterface_eventOnUserQuitGame_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PAFGameFlowCallbackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PAFGameFlowCallbackInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PAFGameFlowCallbackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PAFGameFlowCallbackInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PAFGameFlowCallbackInterface(UEOSSessionP2PAFGameFlowCallbackInterface&&); \
	NO_API UEOSSessionP2PAFGameFlowCallbackInterface(const UEOSSessionP2PAFGameFlowCallbackInterface&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PAFGameFlowCallbackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PAFGameFlowCallbackInterface(UEOSSessionP2PAFGameFlowCallbackInterface&&); \
	NO_API UEOSSessionP2PAFGameFlowCallbackInterface(const UEOSSessionP2PAFGameFlowCallbackInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PAFGameFlowCallbackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PAFGameFlowCallbackInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PAFGameFlowCallbackInterface)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEOSSessionP2PAFGameFlowCallbackInterface(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PAFGameFlowCallbackInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PAFGameFlowCallbackInterface)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEOSSessionP2PAFGameFlowCallbackInterface() {} \
public: \
	typedef UEOSSessionP2PAFGameFlowCallbackInterface UClassType; \
	typedef IEOSSessionP2PAFGameFlowCallbackInterface ThisClass; \
	static bool Execute_IsPossibleToChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnChangedGameFlowForAllPlayers(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnReceivedSessionPacket(UObject* O, UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnResultForChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnResultForPossibleToChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnUserJoinInGame(UObject* O, UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnUserQuitGame(UObject* O, UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEOSSessionP2PAFGameFlowCallbackInterface() {} \
public: \
	typedef UEOSSessionP2PAFGameFlowCallbackInterface UClassType; \
	typedef IEOSSessionP2PAFGameFlowCallbackInterface ThisClass; \
	static bool Execute_IsPossibleToChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnChangedGameFlowForAllPlayers(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnReceivedSessionPacket(UObject* O, UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnResultForChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnResultForPossibleToChangeGameFlow(UObject* O, EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnUserJoinInGame(UObject* O, UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnUserQuitGame(UObject* O, UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_11_PROLOG \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_EVENT_PARMS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionP2PAFGameFlowCallbackInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFGameFlowCallbackInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
