// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboardUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboardUserData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardUserData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsRecordData();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EExternalAccountType();
// End Cross Module References
class UScriptStruct* FELLeaderboardUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELLeaderboardUserData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELLeaderboardUserData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELLeaderboardUserData"), sizeof(FELLeaderboardUserData), Get_Z_Construct_UScriptStruct_FELLeaderboardUserData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELLeaderboardUserData>()
{
	return FELLeaderboardUserData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELLeaderboardUserData(FELLeaderboardUserData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELLeaderboardUserData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELLeaderboardUserData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELLeaderboardUserData()
	{
		UScriptStruct::DeferCppStructOps<FELLeaderboardUserData>(FName(TEXT("ELLeaderboardUserData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELLeaderboardUserData;
	struct Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Record_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Record;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountIdType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountIdType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountIdType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELLeaderboardUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_Record_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserData" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELLeaderboardUserData, Record), Z_Construct_UScriptStruct_FEOSLeaderboardsRecordData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_Record_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_Record_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_AccountIdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_AccountIdType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserData" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_AccountIdType = { "AccountIdType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELLeaderboardUserData, AccountIdType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_AccountIdType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_AccountIdType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_Record,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_AccountIdType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::NewProp_AccountIdType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELLeaderboardUserData",
		sizeof(FELLeaderboardUserData),
		alignof(FELLeaderboardUserData),
		Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELLeaderboardUserData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELLeaderboardUserData"), sizeof(FELLeaderboardUserData), Get_Z_Construct_UScriptStruct_FELLeaderboardUserData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELLeaderboardUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELLeaderboardUserData_Hash() { return 727462562U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif