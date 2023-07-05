// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionInfo;
class UEOSSessionP2PPacketBase;
class UEOSSessionP2P;
#ifdef YEOSSDK_EOSSessionP2PCallbackInterface_generated_h
#error "EOSSessionP2PCallbackInterface.generated.h already included, missing '#pragma once' in EOSSessionP2PCallbackInterface.h"
#endif
#define YEOSSDK_EOSSessionP2PCallbackInterface_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_RPC_WRAPPERS \
	virtual bool IsDoneSessionGamePause_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool IsDoneSessionGameSetup_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual uint8 OnReceivedSessionPacket_Implementation(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual bool OnSessionDispose_Implementation() { return false; }; \
	virtual bool OnSessionGameEnd_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGamePause_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGameResume_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGameSetup_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGameStart_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionLogout_Implementation() { return false; }; \
	virtual bool OnSessionSetup_Implementation(UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P) { return false; }; \
	virtual bool OnSessionSyncRequest_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
 \
	DECLARE_FUNCTION(execIsDoneSessionGamePause); \
	DECLARE_FUNCTION(execIsDoneSessionGameSetup); \
	DECLARE_FUNCTION(execOnReceivedSessionPacket); \
	DECLARE_FUNCTION(execOnSessionDispose); \
	DECLARE_FUNCTION(execOnSessionGameEnd); \
	DECLARE_FUNCTION(execOnSessionGamePause); \
	DECLARE_FUNCTION(execOnSessionGameResume); \
	DECLARE_FUNCTION(execOnSessionGameSetup); \
	DECLARE_FUNCTION(execOnSessionGameStart); \
	DECLARE_FUNCTION(execOnSessionLogout); \
	DECLARE_FUNCTION(execOnSessionSetup); \
	DECLARE_FUNCTION(execOnSessionSyncRequest);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsDoneSessionGamePause_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool IsDoneSessionGameSetup_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual uint8 OnReceivedSessionPacket_Implementation(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo) { return 0; }; \
	virtual bool OnSessionDispose_Implementation() { return false; }; \
	virtual bool OnSessionGameEnd_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGamePause_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGameResume_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGameSetup_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionGameStart_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
	virtual bool OnSessionLogout_Implementation() { return false; }; \
	virtual bool OnSessionSetup_Implementation(UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P) { return false; }; \
	virtual bool OnSessionSyncRequest_Implementation(UEOSSessionInfo* SessionInfo) { return false; }; \
 \
	DECLARE_FUNCTION(execIsDoneSessionGamePause); \
	DECLARE_FUNCTION(execIsDoneSessionGameSetup); \
	DECLARE_FUNCTION(execOnReceivedSessionPacket); \
	DECLARE_FUNCTION(execOnSessionDispose); \
	DECLARE_FUNCTION(execOnSessionGameEnd); \
	DECLARE_FUNCTION(execOnSessionGamePause); \
	DECLARE_FUNCTION(execOnSessionGameResume); \
	DECLARE_FUNCTION(execOnSessionGameSetup); \
	DECLARE_FUNCTION(execOnSessionGameStart); \
	DECLARE_FUNCTION(execOnSessionLogout); \
	DECLARE_FUNCTION(execOnSessionSetup); \
	DECLARE_FUNCTION(execOnSessionSyncRequest);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_EVENT_PARMS \
	struct EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventIsDoneSessionGamePause_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventIsDoneSessionGameSetup_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms \
	{ \
		UEOSSessionP2PPacketBase* PacketBase; \
		UEOSSessionInfo* SessionInfo; \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnReceivedSessionPacket_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionDispose_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionDispose_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionGameEnd_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionGamePause_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionGameResume_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionGameSetup_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionGameStart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionLogout_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionLogout_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		UEOSSessionP2P* SessionP2P; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionSetup_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms \
	{ \
		UEOSSessionInfo* SessionInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EOSSessionP2PCallbackInterface_eventOnSessionSyncRequest_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PCallbackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PCallbackInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PCallbackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PCallbackInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PCallbackInterface(UEOSSessionP2PCallbackInterface&&); \
	NO_API UEOSSessionP2PCallbackInterface(const UEOSSessionP2PCallbackInterface&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PCallbackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PCallbackInterface(UEOSSessionP2PCallbackInterface&&); \
	NO_API UEOSSessionP2PCallbackInterface(const UEOSSessionP2PCallbackInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PCallbackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PCallbackInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PCallbackInterface)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEOSSessionP2PCallbackInterface(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PCallbackInterface_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PCallbackInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PCallbackInterface)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_GENERATED_UINTERFACE_BODY() \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEOSSessionP2PCallbackInterface() {} \
public: \
	typedef UEOSSessionP2PCallbackInterface UClassType; \
	typedef IEOSSessionP2PCallbackInterface ThisClass; \
	static bool Execute_IsDoneSessionGamePause(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_IsDoneSessionGameSetup(UObject* O, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnReceivedSessionPacket(UObject* O, UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionDispose(UObject* O); \
	static bool Execute_OnSessionGameEnd(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGamePause(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGameResume(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGameSetup(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGameStart(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionLogout(UObject* O); \
	static bool Execute_OnSessionSetup(UObject* O, UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P); \
	static bool Execute_OnSessionSyncRequest(UObject* O, UEOSSessionInfo* SessionInfo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IEOSSessionP2PCallbackInterface() {} \
public: \
	typedef UEOSSessionP2PCallbackInterface UClassType; \
	typedef IEOSSessionP2PCallbackInterface ThisClass; \
	static bool Execute_IsDoneSessionGamePause(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_IsDoneSessionGameSetup(UObject* O, UEOSSessionInfo* SessionInfo); \
	static uint8 Execute_OnReceivedSessionPacket(UObject* O, UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionDispose(UObject* O); \
	static bool Execute_OnSessionGameEnd(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGamePause(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGameResume(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGameSetup(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionGameStart(UObject* O, UEOSSessionInfo* SessionInfo); \
	static bool Execute_OnSessionLogout(UObject* O); \
	static bool Execute_OnSessionSetup(UObject* O, UEOSSessionInfo* SessionInfo, UEOSSessionP2P* SessionP2P); \
	static bool Execute_OnSessionSyncRequest(UObject* O, UEOSSessionInfo* SessionInfo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_10_PROLOG \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_EVENT_PARMS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionP2PCallbackInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PCallbackInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
