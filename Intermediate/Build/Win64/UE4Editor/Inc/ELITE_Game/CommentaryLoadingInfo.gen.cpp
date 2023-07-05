// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/CommentaryLoadingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommentaryLoadingInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FCommentaryLoadingInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCommentaryLoadingInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCommentaryLoadingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommentaryLoadingInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("CommentaryLoadingInfo"), sizeof(FCommentaryLoadingInfo), Get_Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FCommentaryLoadingInfo>()
{
	return FCommentaryLoadingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommentaryLoadingInfo(FCommentaryLoadingInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("CommentaryLoadingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingInfo()
	{
		UScriptStruct::DeferCppStructOps<FCommentaryLoadingInfo>(FName(TEXT("CommentaryLoadingInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingInfo;
	struct Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_NameTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResourceList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResourceList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommentaryLoadingInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingInfo" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingInfo, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_NameTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingInfo" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_NameTexture = { "NameTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingInfo, NameTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_NameTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_NameTexture_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_ResourceList_Inner = { "ResourceList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_ResourceList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingInfo" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_ResourceList = { "ResourceList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingInfo, ResourceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_ResourceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_ResourceList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_NameTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_ResourceList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::NewProp_ResourceList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CommentaryLoadingInfo",
		sizeof(FCommentaryLoadingInfo),
		alignof(FCommentaryLoadingInfo),
		Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommentaryLoadingInfo"), sizeof(FCommentaryLoadingInfo), Get_Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingInfo_Hash() { return 1714396766U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
