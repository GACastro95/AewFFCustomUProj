// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AutoAnimInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoAnimInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAutoAnimInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
// End Cross Module References
class UScriptStruct* FAutoAnimInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FAutoAnimInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoAnimInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("AutoAnimInfo"), sizeof(FAutoAnimInfo), Get_Z_Construct_UScriptStruct_FAutoAnimInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FAutoAnimInfo>()
{
	return FAutoAnimInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoAnimInfo(FAutoAnimInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("AutoAnimInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFAutoAnimInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFAutoAnimInfo()
	{
		UScriptStruct::DeferCppStructOps<FAutoAnimInfo>(FName(TEXT("AutoAnimInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFAutoAnimInfo;
	struct Z_Construct_UScriptStruct_FAutoAnimInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Situation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Situation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutoAnimInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoAnimInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_Situation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoAnimInfo" },
		{ "ModuleRelativePath", "Public/AutoAnimInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_Situation = { "Situation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoAnimInfo, Situation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_Situation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_Situation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoAnimInfo" },
		{ "ModuleRelativePath", "Public/AutoAnimInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoAnimInfo, CategoryID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoAnimInfo" },
		{ "ModuleRelativePath", "Public/AutoAnimInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryItemID = { "CategoryItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoAnimInfo, CategoryItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_Situation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::NewProp_CategoryItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"AutoAnimInfo",
		sizeof(FAutoAnimInfo),
		alignof(FAutoAnimInfo),
		Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoAnimInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoAnimInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoAnimInfo"), sizeof(FAutoAnimInfo), Get_Z_Construct_UScriptStruct_FAutoAnimInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoAnimInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoAnimInfo_Hash() { return 986830358U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
