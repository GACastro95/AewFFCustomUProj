// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionUserPacketMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionUserPacketMap() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUserPacketMap();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionUser_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execFindReceivedPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PPacketBase,Z_Param_Out__pcPackets);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_UBOOL(Z_Param__bRemovePacket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindReceivedPacket(Z_Param_Out__pcPackets,Z_Param__sPacketType,Z_Param__bRemovePacket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetP2PActiveFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSP2PActiveFlag*)Z_Param__Result=P_THIS->GetP2PActiveFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetP2PConnectionStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSNatP2PConnectionStatus*)Z_Param__Result=P_THIS->GetP2PConnectionStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetReceivedPacket)
	{
		P_GET_TARRAY_REF(UEOSSessionP2PPacketBase*,Z_Param_Out__pcPackets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceivedPacket(Z_Param_Out__pcPackets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetReceivedSynchronizedPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PSynchronizedPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_OBJECT(UEOSSessionP2P,Z_Param__pcSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceivedSynchronizedPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType,Z_Param__pcSessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetSendPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_OBJECT(UEOSSessionP2P,Z_Param__pcSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSendPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType,Z_Param__pcSessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetSendPackets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,UEOSSessionP2PPacketBase*>*)Z_Param__Result=P_THIS->GetSendPackets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetSendSynchronizedPacket)
	{
		P_GET_OBJECT_REF(UEOSSessionP2PSynchronizedPacketBase,Z_Param_Out__pcPacketBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPacketType);
		P_GET_OBJECT(UEOSSessionP2P,Z_Param__pcSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSendSynchronizedPacket(Z_Param_Out__pcPacketBase,Z_Param__sPacketType,Z_Param__pcSessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetSendSynchronizedPackets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,UEOSSessionP2PSynchronizedPacketBase*>*)Z_Param__Result=P_THIS->GetSendSynchronizedPackets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execGetSessionUser)
	{
		P_GET_OBJECT_REF(UEOSSessionUser,Z_Param_Out__pcSessionUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSessionUser(Z_Param_Out__pcSessionUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execIsOwner)
	{
		P_GET_OBJECT(UEOSSessionP2P,Z_Param__pcSessionP2P);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOwner(Z_Param__pcSessionP2P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execIsSynchronizedAllPlayerPackets)
	{
		P_GET_UBOOL(Z_Param__bHost);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSynchronizedAllPlayerPackets(Z_Param__bHost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execSetP2PActiveFlag)
	{
		P_GET_ENUM(EEOSP2PActiveFlag,Z_Param__enActiveFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetP2PActiveFlag(EEOSP2PActiveFlag(Z_Param__enActiveFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execSetP2PConnectionStatus)
	{
		P_GET_ENUM(EEOSNatP2PConnectionStatus,Z_Param__enConnectionStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetP2PConnectionStatus(EEOSNatP2PConnectionStatus(Z_Param__enConnectionStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionUserPacketMap::execSetup)
	{
		P_GET_OBJECT(UEOSSessionUser,Z_Param__pcSessionUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__pcSessionUser);
		P_NATIVE_END;
	}
	void UEOSSessionUserPacketMap::StaticRegisterNativesUEOSSessionUserPacketMap()
	{
		UClass* Class = UEOSSessionUserPacketMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindReceivedPacket", &UEOSSessionUserPacketMap::execFindReceivedPacket },
			{ "GetP2PActiveFlag", &UEOSSessionUserPacketMap::execGetP2PActiveFlag },
			{ "GetP2PConnectionStatus", &UEOSSessionUserPacketMap::execGetP2PConnectionStatus },
			{ "GetReceivedPacket", &UEOSSessionUserPacketMap::execGetReceivedPacket },
			{ "GetReceivedSynchronizedPacket", &UEOSSessionUserPacketMap::execGetReceivedSynchronizedPacket },
			{ "GetSendPacket", &UEOSSessionUserPacketMap::execGetSendPacket },
			{ "GetSendPackets", &UEOSSessionUserPacketMap::execGetSendPackets },
			{ "GetSendSynchronizedPacket", &UEOSSessionUserPacketMap::execGetSendSynchronizedPacket },
			{ "GetSendSynchronizedPackets", &UEOSSessionUserPacketMap::execGetSendSynchronizedPackets },
			{ "GetSessionUser", &UEOSSessionUserPacketMap::execGetSessionUser },
			{ "IsOwner", &UEOSSessionUserPacketMap::execIsOwner },
			{ "IsSynchronizedAllPlayerPackets", &UEOSSessionUserPacketMap::execIsSynchronizedAllPlayerPackets },
			{ "SetP2PActiveFlag", &UEOSSessionUserPacketMap::execSetP2PActiveFlag },
			{ "SetP2PConnectionStatus", &UEOSSessionUserPacketMap::execSetP2PConnectionStatus },
			{ "Setup", &UEOSSessionUserPacketMap::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics
	{
		struct EOSSessionUserPacketMap_eventFindReceivedPacket_Parms
		{
			UEOSSessionP2PPacketBase* _pcPackets;
			int32 _sPacketType;
			bool _bRemovePacket;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPackets;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static void NewProp__bRemovePacket_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bRemovePacket;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__pcPackets = { "_pcPackets", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventFindReceivedPacket_Parms, _pcPackets), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventFindReceivedPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__bRemovePacket_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventFindReceivedPacket_Parms*)Obj)->_bRemovePacket = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__bRemovePacket = { "_bRemovePacket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventFindReceivedPacket_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__bRemovePacket_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventFindReceivedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventFindReceivedPacket_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__pcPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp__bRemovePacket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "FindReceivedPacket", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventFindReceivedPacket_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics
	{
		struct EOSSessionUserPacketMap_eventGetP2PActiveFlag_Parms
		{
			EEOSP2PActiveFlag ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetP2PActiveFlag_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetP2PActiveFlag", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetP2PActiveFlag_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics
	{
		struct EOSSessionUserPacketMap_eventGetP2PConnectionStatus_Parms
		{
			EEOSNatP2PConnectionStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetP2PConnectionStatus_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetP2PConnectionStatus", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetP2PConnectionStatus_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics
	{
		struct EOSSessionUserPacketMap_eventGetReceivedPacket_Parms
		{
			TArray<UEOSSessionP2PPacketBase*> _pcPackets;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPackets_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pcPackets;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp__pcPackets_Inner = { "_pcPackets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp__pcPackets = { "_pcPackets", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetReceivedPacket_Parms, _pcPackets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventGetReceivedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventGetReceivedPacket_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp__pcPackets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp__pcPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetReceivedPacket", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetReceivedPacket_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics
	{
		struct EOSSessionUserPacketMap_eventGetReceivedSynchronizedPacket_Parms
		{
			UEOSSessionP2PSynchronizedPacketBase* _pcPacketBase;
			int32 _sPacketType;
			UEOSSessionP2P* _pcSessionP2P;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetReceivedSynchronizedPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetReceivedSynchronizedPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp__pcSessionP2P = { "_pcSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetReceivedSynchronizedPacket_Parms, _pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventGetReceivedSynchronizedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventGetReceivedSynchronizedPacket_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp__pcSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetReceivedSynchronizedPacket", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetReceivedSynchronizedPacket_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics
	{
		struct EOSSessionUserPacketMap_eventGetSendPacket_Parms
		{
			UEOSSessionP2PPacketBase* _pcPacketBase;
			int32 _sPacketType;
			UEOSSessionP2P* _pcSessionP2P;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp__pcSessionP2P = { "_pcSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendPacket_Parms, _pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventGetSendPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventGetSendPacket_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp__pcSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetSendPacket", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetSendPacket_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics
	{
		struct EOSSessionUserPacketMap_eventGetSendPackets_Parms
		{
			TMap<int32,UEOSSessionP2PPacketBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendPackets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetSendPackets", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetSendPackets_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics
	{
		struct EOSSessionUserPacketMap_eventGetSendSynchronizedPacket_Parms
		{
			UEOSSessionP2PSynchronizedPacketBase* _pcPacketBase;
			int32 _sPacketType;
			UEOSSessionP2P* _pcSessionP2P;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPacketType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendSynchronizedPacket_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp__sPacketType = { "_sPacketType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendSynchronizedPacket_Parms, _sPacketType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp__pcSessionP2P = { "_pcSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendSynchronizedPacket_Parms, _pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventGetSendSynchronizedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventGetSendSynchronizedPacket_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp__sPacketType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp__pcSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetSendSynchronizedPacket", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetSendSynchronizedPacket_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics
	{
		struct EOSSessionUserPacketMap_eventGetSendSynchronizedPackets_Parms
		{
			TMap<int32,UEOSSessionP2PSynchronizedPacketBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSendSynchronizedPackets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetSendSynchronizedPackets", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetSendSynchronizedPackets_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics
	{
		struct EOSSessionUserPacketMap_eventGetSessionUser_Parms
		{
			UEOSSessionUser* _pcSessionUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::NewProp__pcSessionUser = { "_pcSessionUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventGetSessionUser_Parms, _pcSessionUser), Z_Construct_UClass_UEOSSessionUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventGetSessionUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventGetSessionUser_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::NewProp__pcSessionUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "GetSessionUser", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventGetSessionUser_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics
	{
		struct EOSSessionUserPacketMap_eventIsOwner_Parms
		{
			UEOSSessionP2P* _pcSessionP2P;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionP2P;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::NewProp__pcSessionP2P = { "_pcSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventIsOwner_Parms, _pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventIsOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventIsOwner_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::NewProp__pcSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "IsOwner", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventIsOwner_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics
	{
		struct EOSSessionUserPacketMap_eventIsSynchronizedAllPlayerPackets_Parms
		{
			bool _bHost;
			bool ReturnValue;
		};
		static void NewProp__bHost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bHost;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp__bHost_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventIsSynchronizedAllPlayerPackets_Parms*)Obj)->_bHost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp__bHost = { "_bHost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventIsSynchronizedAllPlayerPackets_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp__bHost_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventIsSynchronizedAllPlayerPackets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventIsSynchronizedAllPlayerPackets_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp__bHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "IsSynchronizedAllPlayerPackets", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventIsSynchronizedAllPlayerPackets_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics
	{
		struct EOSSessionUserPacketMap_eventSetP2PActiveFlag_Parms
		{
			EEOSP2PActiveFlag _enActiveFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enActiveFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enActiveFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp__enActiveFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp__enActiveFlag = { "_enActiveFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventSetP2PActiveFlag_Parms, _enActiveFlag), Z_Construct_UEnum_yEOSSDK_EEOSP2PActiveFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventSetP2PActiveFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventSetP2PActiveFlag_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp__enActiveFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp__enActiveFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "SetP2PActiveFlag", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventSetP2PActiveFlag_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics
	{
		struct EOSSessionUserPacketMap_eventSetP2PConnectionStatus_Parms
		{
			EEOSNatP2PConnectionStatus _enConnectionStatus;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enConnectionStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enConnectionStatus;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp__enConnectionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp__enConnectionStatus = { "_enConnectionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventSetP2PConnectionStatus_Parms, _enConnectionStatus), Z_Construct_UEnum_yEOSSDK_EEOSNatP2PConnectionStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventSetP2PConnectionStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventSetP2PConnectionStatus_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp__enConnectionStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp__enConnectionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "SetP2PConnectionStatus", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventSetP2PConnectionStatus_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics
	{
		struct EOSSessionUserPacketMap_eventSetup_Parms
		{
			UEOSSessionUser* _pcSessionUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::NewProp__pcSessionUser = { "_pcSessionUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionUserPacketMap_eventSetup_Parms, _pcSessionUser), Z_Construct_UClass_UEOSSessionUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionUserPacketMap_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionUserPacketMap_eventSetup_Parms), &Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::NewProp__pcSessionUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionUserPacketMap, nullptr, "Setup", nullptr, nullptr, sizeof(EOSSessionUserPacketMap_eventSetup_Parms), Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionUserPacketMap_NoRegister()
	{
		return UEOSSessionUserPacketMap::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionUserPacketMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSessionUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSessionUser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cReceivedPackets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cReceivedPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cReceivedPackets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cSendPackets_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cSendPackets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cSendPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cSendPackets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cReceivedSynchronizedPackets_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cReceivedSynchronizedPackets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cReceivedSynchronizedPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cReceivedSynchronizedPackets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cSendSynchronizedPackets_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_cSendSynchronizedPackets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cSendSynchronizedPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cSendSynchronizedPackets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_FindReceivedPacket, "FindReceivedPacket" }, // 609612430
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PActiveFlag, "GetP2PActiveFlag" }, // 2329851166
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetP2PConnectionStatus, "GetP2PConnectionStatus" }, // 1840744351
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedPacket, "GetReceivedPacket" }, // 3096982835
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetReceivedSynchronizedPacket, "GetReceivedSynchronizedPacket" }, // 1171678402
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPacket, "GetSendPacket" }, // 3111024469
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendPackets, "GetSendPackets" }, // 2205120237
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPacket, "GetSendSynchronizedPacket" }, // 3140296667
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSendSynchronizedPackets, "GetSendSynchronizedPackets" }, // 1621748079
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_GetSessionUser, "GetSessionUser" }, // 1296374074
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_IsOwner, "IsOwner" }, // 541172589
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_IsSynchronizedAllPlayerPackets, "IsSynchronizedAllPlayerPackets" }, // 1698731147
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PActiveFlag, "SetP2PActiveFlag" }, // 1147924302
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_SetP2PConnectionStatus, "SetP2PConnectionStatus" }, // 251659966
		{ &Z_Construct_UFunction_UEOSSessionUserPacketMap_Setup, "Setup" }, // 574342274
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionUserPacketMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_pcSessionUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionUserPacketMap" },
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_pcSessionUser = { "m_pcSessionUser", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionUserPacketMap, m_pcSessionUser), Z_Construct_UClass_UEOSSessionUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_pcSessionUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_pcSessionUser_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedPackets_Inner = { "m_cReceivedPackets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedPackets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionUserPacketMap" },
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedPackets = { "m_cReceivedPackets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cReceivedPackets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedPackets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets_ValueProp = { "m_cSendPackets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets_Key_KeyProp = { "m_cSendPackets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionUserPacketMap" },
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets = { "m_cSendPackets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cSendPackets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets_ValueProp = { "m_cReceivedSynchronizedPackets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets_Key_KeyProp = { "m_cReceivedSynchronizedPackets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionUserPacketMap" },
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets = { "m_cReceivedSynchronizedPackets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cReceivedSynchronizedPackets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets_ValueProp = { "m_cSendSynchronizedPackets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets_Key_KeyProp = { "m_cSendSynchronizedPackets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionUserPacketMap" },
		{ "ModuleRelativePath", "Public/EOSSessionUserPacketMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets = { "m_cSendSynchronizedPackets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cSendSynchronizedPackets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_pcSessionUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedPackets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cReceivedSynchronizedPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::NewProp_m_cSendSynchronizedPackets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionUserPacketMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::ClassParams = {
		&UEOSSessionUserPacketMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionUserPacketMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionUserPacketMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionUserPacketMap, 2715259057);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionUserPacketMap>()
	{
		return UEOSSessionUserPacketMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionUserPacketMap(Z_Construct_UClass_UEOSSessionUserPacketMap, &UEOSSessionUserPacketMap::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionUserPacketMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionUserPacketMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
