// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGamePlayCountInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGamePlayCountInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayCountInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGamePlayCountInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGamePlayCountInfo"), sizeof(FMiniGamePlayCountInfo), Get_Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGamePlayCountInfo>()
{
	return FMiniGamePlayCountInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGamePlayCountInfo(FMiniGamePlayCountInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGamePlayCountInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayCountInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayCountInfo()
	{
		UScriptStruct::DeferCppStructOps<FMiniGamePlayCountInfo>(FName(TEXT("MiniGamePlayCountInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayCountInfo;
	struct Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Easy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Easy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Easy;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Normal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hard;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ELITE_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELITE_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ELITE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGamePlayCountInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGamePlayCountInfo>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Easy_Inner = { "Easy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Easy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayCountInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Easy = { "Easy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayCountInfo, Easy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Easy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Easy_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Normal_Inner = { "Normal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayCountInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayCountInfo, Normal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Normal_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Hard_Inner = { "Hard", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Hard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayCountInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Hard = { "Hard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayCountInfo, Hard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Hard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Hard_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_ELITE_Inner = { "ELITE", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_ELITE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayCountInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayCountInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_ELITE = { "ELITE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayCountInfo, ELITE), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_ELITE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_ELITE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Easy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Easy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Normal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Hard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_Hard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_ELITE_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::NewProp_ELITE,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGamePlayCountInfo",
		sizeof(FMiniGamePlayCountInfo),
		alignof(FMiniGamePlayCountInfo),
		Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayCountInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGamePlayCountInfo"), sizeof(FMiniGamePlayCountInfo), Get_Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayCountInfo_Hash() { return 2019640506U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
