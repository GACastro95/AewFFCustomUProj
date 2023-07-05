// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/CommentaryLoadingWrestlerResourceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommentaryLoadingWrestlerResourceInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FCommentaryLoadingWrestlerResourceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("CommentaryLoadingWrestlerResourceInfo"), sizeof(FCommentaryLoadingWrestlerResourceInfo), Get_Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FCommentaryLoadingWrestlerResourceInfo>()
{
	return FCommentaryLoadingWrestlerResourceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo(FCommentaryLoadingWrestlerResourceInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("CommentaryLoadingWrestlerResourceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingWrestlerResourceInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingWrestlerResourceInfo()
	{
		UScriptStruct::DeferCppStructOps<FCommentaryLoadingWrestlerResourceInfo>(FName(TEXT("CommentaryLoadingWrestlerResourceInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFCommentaryLoadingWrestlerResourceInfo;
	struct Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackGoundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BackGoundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerComment_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WrestlerComment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingWrestlerResourceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommentaryLoadingWrestlerResourceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_BackGoundTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingWrestlerResourceInfo" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingWrestlerResourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_BackGoundTexture = { "BackGoundTexture", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingWrestlerResourceInfo, BackGoundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_BackGoundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_BackGoundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_WrestlerComment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CommentaryLoadingWrestlerResourceInfo" },
		{ "ModuleRelativePath", "Public/CommentaryLoadingWrestlerResourceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_WrestlerComment = { "WrestlerComment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommentaryLoadingWrestlerResourceInfo, WrestlerComment), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_WrestlerComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_WrestlerComment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_BackGoundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::NewProp_WrestlerComment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"CommentaryLoadingWrestlerResourceInfo",
		sizeof(FCommentaryLoadingWrestlerResourceInfo),
		alignof(FCommentaryLoadingWrestlerResourceInfo),
		Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CommentaryLoadingWrestlerResourceInfo"), sizeof(FCommentaryLoadingWrestlerResourceInfo), Get_Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommentaryLoadingWrestlerResourceInfo_Hash() { return 3304190743U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
