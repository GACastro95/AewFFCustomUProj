// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELReplicationManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELReplicationManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELNetworkGUID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetObjectGuid();
	ABP_200508_API UClass* Z_Construct_UClass_UELNatP2PRPCPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectMap_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELReplicationManager::execAddObject)
	{
		P_GET_STRUCT(FELNetworkGUID,Z_Param_Guid);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bReplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddObject(Z_Param_Guid,Z_Param_Object,Z_Param_bReplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execAddUniqueObject)
	{
		P_GET_ENUM(EELNetObjectGuid,Z_Param_Guid);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bReplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUniqueObject(EELNetObjectGuid(Z_Param_Guid),Z_Param_Object,Z_Param_bReplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execAddUniqueObjectToEmptyGuid)
	{
		P_GET_ENUM(EELNetObjectGuid,Z_Param_Guid);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_ENUM_REF(EELNetObjectGuid,Z_Param_Out_OutGuid);
		P_GET_UBOOL(Z_Param_bReplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddUniqueObjectToEmptyGuid(EELNetObjectGuid(Z_Param_Guid),Z_Param_Object,Z_Param_Count,(EELNetObjectGuid&)(Z_Param_Out_OutGuid),Z_Param_bReplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execCreateGuidFromSeedAndOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->CreateGuidFromSeedAndOffset(Z_Param_Seed,Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execCreateRPCPacket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELNatP2PRPCPacket**)Z_Param__Result=P_THIS->CreateRPCPacket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execGetFirstGuid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->GetFirstGuid(Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execGetNextGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->GetNextGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execGetRPCPacket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELNatP2PRPCPacket**)Z_Param__Result=P_THIS->GetRPCPacket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execGetSentPacketSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSentPacketSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execInitializeReplicationObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeReplicationObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execIsWaitingAllP2PConnections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWaitingAllP2PConnections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execOnReceiveRPC)
	{
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param_Transfer);
		P_GET_OBJECT(UEOSUserBase,Z_Param_UserBase);
		P_GET_OBJECT(UEOSNatP2PBinary,Z_Param_P2PBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceiveRPC(Z_Param_Transfer,Z_Param_UserBase,Z_Param_P2PBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execProcessRPC)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessRPC(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execReleaseP2P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseP2P();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execRemoveObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execSendReplications)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendReplications(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execSetEnabledReplication)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabledReplication(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execSetGuidSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->SetGuidSeed(Z_Param_Seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execSetReplicationInterval)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FIntProperty,Z_Param_Interval);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReplicationInterval(Z_Param_Object,Z_Param_Interval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execSetReplicationObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bReplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetReplicationObject(Z_Param_Object,Z_Param_bReplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execSetupP2P)
	{
		P_GET_OBJECT(UEOSNatP2P,Z_Param_InNatP2P);
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param_InNatP2PTransfer);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param_InCommnuityBase);
		P_GET_OBJECT(UEOSSessionP2P,Z_Param_InSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupP2P(Z_Param_InNatP2P,Z_Param_InNatP2PTransfer,Z_Param_InCommnuityBase,Z_Param_InSessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELReplicationManager::execUpdateSessionUsers)
	{
		P_GET_OBJECT(UEOSSessionP2P,Z_Param_InSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSessionUsers(Z_Param_InSessionP2P);
		P_NATIVE_END;
	}
	void UELReplicationManager::StaticRegisterNativesUELReplicationManager()
	{
		UClass* Class = UELReplicationManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObject", &UELReplicationManager::execAddObject },
			{ "AddUniqueObject", &UELReplicationManager::execAddUniqueObject },
			{ "AddUniqueObjectToEmptyGuid", &UELReplicationManager::execAddUniqueObjectToEmptyGuid },
			{ "CreateGuidFromSeedAndOffset", &UELReplicationManager::execCreateGuidFromSeedAndOffset },
			{ "CreateRPCPacket", &UELReplicationManager::execCreateRPCPacket },
			{ "GetFirstGuid", &UELReplicationManager::execGetFirstGuid },
			{ "GetNextGuid", &UELReplicationManager::execGetNextGuid },
			{ "GetRPCPacket", &UELReplicationManager::execGetRPCPacket },
			{ "GetSentPacketSize", &UELReplicationManager::execGetSentPacketSize },
			{ "InitializeReplicationObjects", &UELReplicationManager::execInitializeReplicationObjects },
			{ "IsWaitingAllP2PConnections", &UELReplicationManager::execIsWaitingAllP2PConnections },
			{ "OnReceiveRPC", &UELReplicationManager::execOnReceiveRPC },
			{ "ProcessRPC", &UELReplicationManager::execProcessRPC },
			{ "ReleaseP2P", &UELReplicationManager::execReleaseP2P },
			{ "RemoveObject", &UELReplicationManager::execRemoveObject },
			{ "SendReplications", &UELReplicationManager::execSendReplications },
			{ "SetEnabledReplication", &UELReplicationManager::execSetEnabledReplication },
			{ "SetGuidSeed", &UELReplicationManager::execSetGuidSeed },
			{ "SetReplicationInterval", &UELReplicationManager::execSetReplicationInterval },
			{ "SetReplicationObject", &UELReplicationManager::execSetReplicationObject },
			{ "SetupP2P", &UELReplicationManager::execSetupP2P },
			{ "Update", &UELReplicationManager::execUpdate },
			{ "UpdateSessionUsers", &UELReplicationManager::execUpdateSessionUsers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELReplicationManager_AddObject_Statics
	{
		struct ELReplicationManager_eventAddObject_Parms
		{
			FELNetworkGUID Guid;
			const UObject* Object;
			bool bReplicate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bReplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddObject_Parms, Guid), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_bReplicate_SetBit(void* Obj)
	{
		((ELReplicationManager_eventAddObject_Parms*)Obj)->bReplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_bReplicate = { "bReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventAddObject_Parms), &Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_bReplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventAddObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventAddObject_Parms), &Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_bReplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "AddObject", nullptr, nullptr, sizeof(ELReplicationManager_eventAddObject_Parms), Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_AddObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_AddObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics
	{
		struct ELReplicationManager_eventAddUniqueObject_Parms
		{
			EELNetObjectGuid Guid;
			const UObject* Object;
			bool bReplicate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Guid_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bReplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Guid_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddUniqueObject_Parms, Guid), Z_Construct_UEnum_ABP_200508_EELNetObjectGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddUniqueObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_bReplicate_SetBit(void* Obj)
	{
		((ELReplicationManager_eventAddUniqueObject_Parms*)Obj)->bReplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_bReplicate = { "bReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventAddUniqueObject_Parms), &Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_bReplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventAddUniqueObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventAddUniqueObject_Parms), &Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Guid_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_bReplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "AddUniqueObject", nullptr, nullptr, sizeof(ELReplicationManager_eventAddUniqueObject_Parms), Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_AddUniqueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_AddUniqueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics
	{
		struct ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms
		{
			EELNetObjectGuid Guid;
			const UObject* Object;
			int32 Count;
			EELNetObjectGuid OutGuid;
			bool bReplicate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Guid_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutGuid_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutGuid;
		static void NewProp_bReplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Guid_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms, Guid), Z_Construct_UEnum_ABP_200508_EELNetObjectGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_OutGuid_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_OutGuid = { "OutGuid", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms, OutGuid), Z_Construct_UEnum_ABP_200508_EELNetObjectGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_bReplicate_SetBit(void* Obj)
	{
		((ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms*)Obj)->bReplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_bReplicate = { "bReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms), &Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_bReplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms), &Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Guid_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_OutGuid_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_OutGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_bReplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "AddUniqueObjectToEmptyGuid", nullptr, nullptr, sizeof(ELReplicationManager_eventAddUniqueObjectToEmptyGuid_Parms), Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics
	{
		struct ELReplicationManager_eventCreateGuidFromSeedAndOffset_Parms
		{
			int32 Seed;
			int32 Offset;
			FELNetworkGUID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventCreateGuidFromSeedAndOffset_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventCreateGuidFromSeedAndOffset_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventCreateGuidFromSeedAndOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "CreateGuidFromSeedAndOffset", nullptr, nullptr, sizeof(ELReplicationManager_eventCreateGuidFromSeedAndOffset_Parms), Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics
	{
		struct ELReplicationManager_eventCreateRPCPacket_Parms
		{
			UELNatP2PRPCPacket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventCreateRPCPacket_Parms, ReturnValue), Z_Construct_UClass_UELNatP2PRPCPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "CreateRPCPacket", nullptr, nullptr, sizeof(ELReplicationManager_eventCreateRPCPacket_Parms), Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics
	{
		struct ELReplicationManager_eventGetFirstGuid_Parms
		{
			int32 Seed;
			FELNetworkGUID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventGetFirstGuid_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventGetFirstGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "GetFirstGuid", nullptr, nullptr, sizeof(ELReplicationManager_eventGetFirstGuid_Parms), Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_GetFirstGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_GetFirstGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics
	{
		struct ELReplicationManager_eventGetNextGuid_Parms
		{
			FELNetworkGUID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventGetNextGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "GetNextGuid", nullptr, nullptr, sizeof(ELReplicationManager_eventGetNextGuid_Parms), Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_GetNextGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_GetNextGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics
	{
		struct ELReplicationManager_eventGetRPCPacket_Parms
		{
			UELNatP2PRPCPacket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventGetRPCPacket_Parms, ReturnValue), Z_Construct_UClass_UELNatP2PRPCPacket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "GetRPCPacket", nullptr, nullptr, sizeof(ELReplicationManager_eventGetRPCPacket_Parms), Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_GetRPCPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_GetRPCPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics
	{
		struct ELReplicationManager_eventGetSentPacketSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventGetSentPacketSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "GetSentPacketSize", nullptr, nullptr, sizeof(ELReplicationManager_eventGetSentPacketSize_Parms), Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "InitializeReplicationObjects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics
	{
		struct ELReplicationManager_eventIsWaitingAllP2PConnections_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventIsWaitingAllP2PConnections_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventIsWaitingAllP2PConnections_Parms), &Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "IsWaitingAllP2PConnections", nullptr, nullptr, sizeof(ELReplicationManager_eventIsWaitingAllP2PConnections_Parms), Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics
	{
		struct ELReplicationManager_eventOnReceiveRPC_Parms
		{
			UEOSNatP2PCachedTransfer* Transfer;
			UEOSUserBase* UserBase;
			UEOSNatP2PBinary* P2PBinary;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Transfer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P2PBinary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::NewProp_Transfer = { "Transfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventOnReceiveRPC_Parms, Transfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::NewProp_UserBase = { "UserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventOnReceiveRPC_Parms, UserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::NewProp_P2PBinary = { "P2PBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventOnReceiveRPC_Parms, P2PBinary), Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::NewProp_Transfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::NewProp_UserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::NewProp_P2PBinary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "OnReceiveRPC", nullptr, nullptr, sizeof(ELReplicationManager_eventOnReceiveRPC_Parms), Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics
	{
		struct ELReplicationManager_eventProcessRPC_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventProcessRPC_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "ProcessRPC", nullptr, nullptr, sizeof(ELReplicationManager_eventProcessRPC_Parms), Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_ProcessRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_ProcessRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_ReleaseP2P_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_ReleaseP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_ReleaseP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "ReleaseP2P", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_ReleaseP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_ReleaseP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_ReleaseP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_ReleaseP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics
	{
		struct ELReplicationManager_eventRemoveObject_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventRemoveObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventRemoveObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventRemoveObject_Parms), &Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "RemoveObject", nullptr, nullptr, sizeof(ELReplicationManager_eventRemoveObject_Parms), Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_RemoveObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_RemoveObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics
	{
		struct ELReplicationManager_eventSendReplications_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSendReplications_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "SendReplications", nullptr, nullptr, sizeof(ELReplicationManager_eventSendReplications_Parms), Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_SendReplications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_SendReplications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics
	{
		struct ELReplicationManager_eventSetEnabledReplication_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELReplicationManager_eventSetEnabledReplication_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventSetEnabledReplication_Parms), &Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "SetEnabledReplication", nullptr, nullptr, sizeof(ELReplicationManager_eventSetEnabledReplication_Parms), Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics
	{
		struct ELReplicationManager_eventSetGuidSeed_Parms
		{
			int32 Seed;
			FELNetworkGUID ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetGuidSeed_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetGuidSeed_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "SetGuidSeed", nullptr, nullptr, sizeof(ELReplicationManager_eventSetGuidSeed_Parms), Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_SetGuidSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_SetGuidSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics
	{
		struct ELReplicationManager_eventSetReplicationInterval_Parms
		{
			const UObject* Object;
			int32 Interval;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Interval;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetReplicationInterval_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetReplicationInterval_Parms, Interval), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventSetReplicationInterval_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventSetReplicationInterval_Parms), &Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_Interval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "SetReplicationInterval", nullptr, nullptr, sizeof(ELReplicationManager_eventSetReplicationInterval_Parms), Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics
	{
		struct ELReplicationManager_eventSetReplicationObject_Parms
		{
			const UObject* Object;
			bool bReplicate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bReplicate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetReplicationObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_bReplicate_SetBit(void* Obj)
	{
		((ELReplicationManager_eventSetReplicationObject_Parms*)Obj)->bReplicate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_bReplicate = { "bReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventSetReplicationObject_Parms), &Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_bReplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventSetReplicationObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventSetReplicationObject_Parms), &Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_bReplicate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "SetReplicationObject", nullptr, nullptr, sizeof(ELReplicationManager_eventSetReplicationObject_Parms), Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_SetReplicationObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_SetReplicationObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics
	{
		struct ELReplicationManager_eventSetupP2P_Parms
		{
			UEOSNatP2P* InNatP2P;
			UEOSNatP2PCachedTransfer* InNatP2PTransfer;
			UEOSCommunityInfoBase* InCommnuityBase;
			UEOSSessionP2P* InSessionP2P;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InNatP2P;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InNatP2PTransfer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCommnuityBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InNatP2P = { "InNatP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetupP2P_Parms, InNatP2P), Z_Construct_UClass_UEOSNatP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InNatP2PTransfer = { "InNatP2PTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetupP2P_Parms, InNatP2PTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InCommnuityBase = { "InCommnuityBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetupP2P_Parms, InCommnuityBase), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InSessionP2P = { "InSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventSetupP2P_Parms, InSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELReplicationManager_eventSetupP2P_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELReplicationManager_eventSetupP2P_Parms), &Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InNatP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InNatP2PTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InCommnuityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_InSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "SetupP2P", nullptr, nullptr, sizeof(ELReplicationManager_eventSetupP2P_Parms), Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_SetupP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_SetupP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_Update_Statics
	{
		struct ELReplicationManager_eventUpdate_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELReplicationManager_Update_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventUpdate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_Update_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "Update", nullptr, nullptr, sizeof(ELReplicationManager_eventUpdate_Parms), Z_Construct_UFunction_UELReplicationManager_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics
	{
		struct ELReplicationManager_eventUpdateSessionUsers_Parms
		{
			UEOSSessionP2P* InSessionP2P;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSessionP2P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::NewProp_InSessionP2P = { "InSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELReplicationManager_eventUpdateSessionUsers_Parms, InSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::NewProp_InSessionP2P,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELReplicationManager, nullptr, "UpdateSessionUsers", nullptr, nullptr, sizeof(ELReplicationManager_eventUpdateSessionUsers_Parms), Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELReplicationManager_NoRegister()
	{
		return UELReplicationManager::StaticClass();
	}
	struct Z_Construct_UClass_UELReplicationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetObjectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetObjectMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NatP2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NatP2P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PRPCPacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P2PRPCPacket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2PRPCTransfer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P2PRPCTransfer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationObjects_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ReplicationObjects_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReplicationObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SocketID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GuidSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentGuidIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentGuidIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SentPacketSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SentPacketSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabledReplication_MetaData[];
#endif
		static void NewProp_bEnabledReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabledReplication;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELReplicationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELReplicationManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELReplicationManager_AddObject, "AddObject" }, // 1843117106
		{ &Z_Construct_UFunction_UELReplicationManager_AddUniqueObject, "AddUniqueObject" }, // 3697099199
		{ &Z_Construct_UFunction_UELReplicationManager_AddUniqueObjectToEmptyGuid, "AddUniqueObjectToEmptyGuid" }, // 3684547551
		{ &Z_Construct_UFunction_UELReplicationManager_CreateGuidFromSeedAndOffset, "CreateGuidFromSeedAndOffset" }, // 1505559429
		{ &Z_Construct_UFunction_UELReplicationManager_CreateRPCPacket, "CreateRPCPacket" }, // 4181286306
		{ &Z_Construct_UFunction_UELReplicationManager_GetFirstGuid, "GetFirstGuid" }, // 1409808344
		{ &Z_Construct_UFunction_UELReplicationManager_GetNextGuid, "GetNextGuid" }, // 1356047726
		{ &Z_Construct_UFunction_UELReplicationManager_GetRPCPacket, "GetRPCPacket" }, // 2927577503
		{ &Z_Construct_UFunction_UELReplicationManager_GetSentPacketSize, "GetSentPacketSize" }, // 1114288363
		{ &Z_Construct_UFunction_UELReplicationManager_InitializeReplicationObjects, "InitializeReplicationObjects" }, // 1539344584
		{ &Z_Construct_UFunction_UELReplicationManager_IsWaitingAllP2PConnections, "IsWaitingAllP2PConnections" }, // 81606999
		{ &Z_Construct_UFunction_UELReplicationManager_OnReceiveRPC, "OnReceiveRPC" }, // 1487048095
		{ &Z_Construct_UFunction_UELReplicationManager_ProcessRPC, "ProcessRPC" }, // 1068183749
		{ &Z_Construct_UFunction_UELReplicationManager_ReleaseP2P, "ReleaseP2P" }, // 3790245112
		{ &Z_Construct_UFunction_UELReplicationManager_RemoveObject, "RemoveObject" }, // 4231935708
		{ &Z_Construct_UFunction_UELReplicationManager_SendReplications, "SendReplications" }, // 1114077082
		{ &Z_Construct_UFunction_UELReplicationManager_SetEnabledReplication, "SetEnabledReplication" }, // 284495877
		{ &Z_Construct_UFunction_UELReplicationManager_SetGuidSeed, "SetGuidSeed" }, // 2907147294
		{ &Z_Construct_UFunction_UELReplicationManager_SetReplicationInterval, "SetReplicationInterval" }, // 2208133207
		{ &Z_Construct_UFunction_UELReplicationManager_SetReplicationObject, "SetReplicationObject" }, // 1119473709
		{ &Z_Construct_UFunction_UELReplicationManager_SetupP2P, "SetupP2P" }, // 2848399547
		{ &Z_Construct_UFunction_UELReplicationManager_Update, "Update" }, // 2318423569
		{ &Z_Construct_UFunction_UELReplicationManager_UpdateSessionUsers, "UpdateSessionUsers" }, // 3222215367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELReplicationManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NetObjectMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NetObjectMap = { "NetObjectMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, NetObjectMap), Z_Construct_UClass_UELNetObjectMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NetObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NetObjectMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NatP2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NatP2P = { "NatP2P", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, NatP2P), Z_Construct_UClass_UEOSNatP2P_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NatP2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NatP2P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCPacket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCPacket = { "P2PRPCPacket", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, P2PRPCPacket), Z_Construct_UClass_UELNatP2PRPCPacket_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCPacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCPacket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCTransfer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCTransfer = { "P2PRPCTransfer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, P2PRPCTransfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCTransfer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects_ValueProp = { "ReplicationObjects", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELReplicationState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects_Key_KeyProp = { "ReplicationObjects_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects = { "ReplicationObjects", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, ReplicationObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SocketID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SocketID = { "SocketID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, SocketID), METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SocketID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_GuidSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_GuidSeed = { "GuidSeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, GuidSeed), METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_GuidSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_GuidSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_CurrentGuidIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_CurrentGuidIndex = { "CurrentGuidIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, CurrentGuidIndex), METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_CurrentGuidIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_CurrentGuidIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SentPacketSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SentPacketSize = { "SentPacketSize", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELReplicationManager, SentPacketSize), METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SentPacketSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SentPacketSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELReplicationManager_Statics::NewProp_bEnabledReplication_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELReplicationManager" },
		{ "ModuleRelativePath", "Public/ELReplicationManager.h" },
	};
#endif
	void Z_Construct_UClass_UELReplicationManager_Statics::NewProp_bEnabledReplication_SetBit(void* Obj)
	{
		((UELReplicationManager*)Obj)->bEnabledReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELReplicationManager_Statics::NewProp_bEnabledReplication = { "bEnabledReplication", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELReplicationManager), &Z_Construct_UClass_UELReplicationManager_Statics::NewProp_bEnabledReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_bEnabledReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::NewProp_bEnabledReplication_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELReplicationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NetObjectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_NatP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCPacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_P2PRPCTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_ReplicationObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_GuidSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_CurrentGuidIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_SentPacketSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELReplicationManager_Statics::NewProp_bEnabledReplication,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELReplicationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELReplicationManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELReplicationManager_Statics::ClassParams = {
		&UELReplicationManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELReplicationManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELReplicationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELReplicationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELReplicationManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELReplicationManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELReplicationManager, 1505061462);
	template<> ABP_200508_API UClass* StaticClass<UELReplicationManager>()
	{
		return UELReplicationManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELReplicationManager(Z_Construct_UClass_UELReplicationManager, &UELReplicationManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELReplicationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELReplicationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
