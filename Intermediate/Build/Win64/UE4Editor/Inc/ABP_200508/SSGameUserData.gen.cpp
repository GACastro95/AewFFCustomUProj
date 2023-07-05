// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSGameUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSGameUserData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSGameUserData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSGameUserData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSGameUserData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSGameUserData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSGameUserData"), sizeof(FSSGameUserData), Get_Z_Construct_UScriptStruct_FSSGameUserData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSGameUserData>()
{
	return FSSGameUserData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSGameUserData(FSSGameUserData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSGameUserData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameUserData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSGameUserData()
	{
		UScriptStruct::DeferCppStructOps<FSSGameUserData>(FName(TEXT("SSGameUserData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSGameUserData;
	struct Z_Construct_UScriptStruct_FSSGameUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_userUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_userUniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSGameUserData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSGameUserData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_UserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameUserData" },
		{ "ModuleRelativePath", "Public/SSGameUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameUserData, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_userUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSGameUserData" },
		{ "ModuleRelativePath", "Public/SSGameUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_userUniqueId = { "userUniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSGameUserData, userUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_userUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_userUniqueId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSGameUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_UserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSGameUserData_Statics::NewProp_userUniqueId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSGameUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSGameUserData",
		sizeof(FSSGameUserData),
		alignof(FSSGameUserData),
		Z_Construct_UScriptStruct_FSSGameUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSGameUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSGameUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSGameUserData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSGameUserData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSGameUserData"), sizeof(FSSGameUserData), Get_Z_Construct_UScriptStruct_FSSGameUserData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSGameUserData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSGameUserData_Hash() { return 99994889U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
