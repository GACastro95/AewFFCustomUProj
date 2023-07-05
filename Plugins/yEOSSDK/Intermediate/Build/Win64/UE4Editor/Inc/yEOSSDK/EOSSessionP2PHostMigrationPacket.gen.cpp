// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PHostMigrationPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PHostMigrationPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionInfo_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetClientResultType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionHostMigrationClientResultType*)Z_Param__Result=P_THIS->GetClientResultType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetCurrentHostPriorityIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentHostPriorityIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetHostMigrationStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionHostMigrationStep*)Z_Param__Result=P_THIS->GetHostMigrationStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetHostMigrationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionHostMigrationType*)Z_Param__Result=P_THIS->GetHostMigrationType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetMemberNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMemberNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetNextHostProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextHostProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetNextSessionID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNextSessionID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execGetOldHostProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOldHostProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execRequest)
	{
		P_GET_ENUM(EEOSSessionHostMigrationType,Z_Param__enType);
		P_GET_ENUM(EEOSSessionHostMigrationStep,Z_Param__enStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Request(EEOSSessionHostMigrationType(Z_Param__enType),EEOSSessionHostMigrationStep(Z_Param__enStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execSetClientResultType)
	{
		P_GET_ENUM(EEOSSessionHostMigrationClientResultType,Z_Param__enHostMigrationClientResultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetClientResultType(EEOSSessionHostMigrationClientResultType(Z_Param__enHostMigrationClientResultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execSetProductUserID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strOldHostPUID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strNextHostPUID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPriorityIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetProductUserID(Z_Param__strOldHostPUID,Z_Param__strNextHostPUID,Z_Param__sPriorityIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PHostMigrationPacket::execSetSessionInfo)
	{
		P_GET_OBJECT(UEOSSessionInfo,Z_Param__pcSessionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSessionInfo(Z_Param__pcSessionInfo);
		P_NATIVE_END;
	}
	void UEOSSessionP2PHostMigrationPacket::StaticRegisterNativesUEOSSessionP2PHostMigrationPacket()
	{
		UClass* Class = UEOSSessionP2PHostMigrationPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClientResultType", &UEOSSessionP2PHostMigrationPacket::execGetClientResultType },
			{ "GetCurrentHostPriorityIndex", &UEOSSessionP2PHostMigrationPacket::execGetCurrentHostPriorityIndex },
			{ "GetHostMigrationStep", &UEOSSessionP2PHostMigrationPacket::execGetHostMigrationStep },
			{ "GetHostMigrationType", &UEOSSessionP2PHostMigrationPacket::execGetHostMigrationType },
			{ "GetMemberNum", &UEOSSessionP2PHostMigrationPacket::execGetMemberNum },
			{ "GetNextHostProductUserID", &UEOSSessionP2PHostMigrationPacket::execGetNextHostProductUserID },
			{ "GetNextSessionID", &UEOSSessionP2PHostMigrationPacket::execGetNextSessionID },
			{ "GetOldHostProductUserID", &UEOSSessionP2PHostMigrationPacket::execGetOldHostProductUserID },
			{ "Request", &UEOSSessionP2PHostMigrationPacket::execRequest },
			{ "SetClientResultType", &UEOSSessionP2PHostMigrationPacket::execSetClientResultType },
			{ "SetProductUserID", &UEOSSessionP2PHostMigrationPacket::execSetProductUserID },
			{ "SetSessionInfo", &UEOSSessionP2PHostMigrationPacket::execSetSessionInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetClientResultType_Parms
		{
			EEOSSessionHostMigrationClientResultType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetClientResultType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetClientResultType", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetClientResultType_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetCurrentHostPriorityIndex_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetCurrentHostPriorityIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetCurrentHostPriorityIndex", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetCurrentHostPriorityIndex_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetHostMigrationStep_Parms
		{
			EEOSSessionHostMigrationStep ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetHostMigrationStep_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetHostMigrationStep", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetHostMigrationStep_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetHostMigrationType_Parms
		{
			EEOSSessionHostMigrationType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetHostMigrationType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetHostMigrationType", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetHostMigrationType_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetMemberNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetMemberNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetMemberNum", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetMemberNum_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetNextHostProductUserID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetNextHostProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetNextHostProductUserID", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetNextHostProductUserID_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetNextSessionID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetNextSessionID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetNextSessionID", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetNextSessionID_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventGetOldHostProductUserID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventGetOldHostProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "GetOldHostProductUserID", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventGetOldHostProductUserID_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventRequest_Parms
		{
			EEOSSessionHostMigrationType _enType;
			EEOSSessionHostMigrationStep _enStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventRequest_Parms, _enType), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enStep = { "_enStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventRequest_Parms, _enStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PHostMigrationPacket_eventRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PHostMigrationPacket_eventRequest_Parms), &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp__enStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "Request", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventRequest_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventSetClientResultType_Parms
		{
			EEOSSessionHostMigrationClientResultType _enHostMigrationClientResultType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enHostMigrationClientResultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enHostMigrationClientResultType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp__enHostMigrationClientResultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp__enHostMigrationClientResultType = { "_enHostMigrationClientResultType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventSetClientResultType_Parms, _enHostMigrationClientResultType), Z_Construct_UEnum_yEOSSDK_EEOSSessionHostMigrationClientResultType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PHostMigrationPacket_eventSetClientResultType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PHostMigrationPacket_eventSetClientResultType_Parms), &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp__enHostMigrationClientResultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp__enHostMigrationClientResultType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "SetClientResultType", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventSetClientResultType_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventSetProductUserID_Parms
		{
			FString _strOldHostPUID;
			FString _strNextHostPUID;
			int32 _sPriorityIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strOldHostPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strOldHostPUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strNextHostPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strNextHostPUID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPriorityIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strOldHostPUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strOldHostPUID = { "_strOldHostPUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventSetProductUserID_Parms, _strOldHostPUID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strOldHostPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strOldHostPUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strNextHostPUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strNextHostPUID = { "_strNextHostPUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventSetProductUserID_Parms, _strNextHostPUID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strNextHostPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strNextHostPUID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__sPriorityIndex = { "_sPriorityIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventSetProductUserID_Parms, _sPriorityIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PHostMigrationPacket_eventSetProductUserID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PHostMigrationPacket_eventSetProductUserID_Parms), &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strOldHostPUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__strNextHostPUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp__sPriorityIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "SetProductUserID", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventSetProductUserID_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics
	{
		struct EOSSessionP2PHostMigrationPacket_eventSetSessionInfo_Parms
		{
			UEOSSessionInfo* _pcSessionInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::NewProp__pcSessionInfo = { "_pcSessionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PHostMigrationPacket_eventSetSessionInfo_Parms, _pcSessionInfo), Z_Construct_UClass_UEOSSessionInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PHostMigrationPacket_eventSetSessionInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PHostMigrationPacket_eventSetSessionInfo_Parms), &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::NewProp__pcSessionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, nullptr, "SetSessionInfo", nullptr, nullptr, sizeof(EOSSessionP2PHostMigrationPacket_eventSetSessionInfo_Parms), Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_NoRegister()
	{
		return UEOSSessionP2PHostMigrationPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetClientResultType, "GetClientResultType" }, // 1364767515
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetCurrentHostPriorityIndex, "GetCurrentHostPriorityIndex" }, // 3675876494
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationStep, "GetHostMigrationStep" }, // 1449290076
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetHostMigrationType, "GetHostMigrationType" }, // 2101373170
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetMemberNum, "GetMemberNum" }, // 479393737
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextHostProductUserID, "GetNextHostProductUserID" }, // 96098997
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetNextSessionID, "GetNextSessionID" }, // 3541612747
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_GetOldHostProductUserID, "GetOldHostProductUserID" }, // 2733662919
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_Request, "Request" }, // 2718151058
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetClientResultType, "SetClientResultType" }, // 1419453657
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetProductUserID, "SetProductUserID" }, // 3965086195
		{ &Z_Construct_UFunction_UEOSSessionP2PHostMigrationPacket_SetSessionInfo, "SetSessionInfo" }, // 124589205
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PHostMigrationPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PHostMigrationPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PHostMigrationPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::ClassParams = {
		&UEOSSessionP2PHostMigrationPacket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PHostMigrationPacket, 563897540);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PHostMigrationPacket>()
	{
		return UEOSSessionP2PHostMigrationPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PHostMigrationPacket(Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket, &UEOSSessionP2PHostMigrationPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PHostMigrationPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PHostMigrationPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
