// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGamePlayInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGamePlayInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGamePlayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGamePlayInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGamePlayInfo"), sizeof(FMiniGamePlayInfo), Get_Z_Construct_UScriptStruct_FMiniGamePlayInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGamePlayInfo>()
{
	return FMiniGamePlayInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGamePlayInfo(FMiniGamePlayInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGamePlayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayInfo()
	{
		UScriptStruct::DeferCppStructOps<FMiniGamePlayInfo>(FName(TEXT("MiniGamePlayInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGamePlayInfo;
	struct Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WinCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DrawCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DrawCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoseCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoseCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGamePlayInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGamePlayInfo>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_PlayCount_Inner = { "PlayCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_PlayCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_PlayCount = { "PlayCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayInfo, PlayCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_PlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_PlayCount_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_WinCount_Inner = { "WinCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_WinCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_WinCount = { "WinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayInfo, WinCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_WinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_WinCount_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_DrawCount_Inner = { "DrawCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_DrawCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_DrawCount = { "DrawCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayInfo, DrawCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_DrawCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_DrawCount_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_LoseCount_Inner = { "LoseCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_LoseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGamePlayInfo" },
		{ "ModuleRelativePath", "Public/MiniGamePlayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_LoseCount = { "LoseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGamePlayInfo, LoseCount), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_LoseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_LoseCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_PlayCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_PlayCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_WinCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_WinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_DrawCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_DrawCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_LoseCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::NewProp_LoseCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGamePlayInfo",
		sizeof(FMiniGamePlayInfo),
		alignof(FMiniGamePlayInfo),
		Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGamePlayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGamePlayInfo"), sizeof(FMiniGamePlayInfo), Get_Z_Construct_UScriptStruct_FMiniGamePlayInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGamePlayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGamePlayInfo_Hash() { return 2090768844U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
