// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSExternalAccountId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSExternalAccountId() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSExternalAccountId();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EExternalAccountType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FEOSExternalAccountId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSExternalAccountId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSExternalAccountId, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSExternalAccountId"), sizeof(FEOSExternalAccountId), Get_Z_Construct_UScriptStruct_FEOSExternalAccountId_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSExternalAccountId>()
{
	return FEOSExternalAccountId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSExternalAccountId(FEOSExternalAccountId::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSExternalAccountId"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSExternalAccountId
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSExternalAccountId()
	{
		UScriptStruct::DeferCppStructOps<FEOSExternalAccountId>(FName(TEXT("EOSExternalAccountId")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSExternalAccountId;
	struct Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountIdType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountIdType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountIdType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLoginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastLoginTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSExternalAccountId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSExternalAccountId>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountIdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountIdType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountIdType = { "AccountIdType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSExternalAccountId, AccountIdType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountIdType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountIdType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSExternalAccountId, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSExternalAccountId, AccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_LastLoginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSExternalAccountId" },
		{ "ModuleRelativePath", "Public/EOSExternalAccountId.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_LastLoginTime = { "LastLoginTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSExternalAccountId, LastLoginTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_LastLoginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_LastLoginTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountIdType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountIdType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_AccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::NewProp_LastLoginTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSExternalAccountId",
		sizeof(FEOSExternalAccountId),
		alignof(FEOSExternalAccountId),
		Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSExternalAccountId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSExternalAccountId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSExternalAccountId"), sizeof(FEOSExternalAccountId), Get_Z_Construct_UScriptStruct_FEOSExternalAccountId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSExternalAccountId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSExternalAccountId_Hash() { return 1146070964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
