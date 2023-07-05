// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELEntranceNameplateCommentParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceNameplateCommentParameter() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FELEntranceNameplateCommentParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELEntranceNameplateCommentParameter"), sizeof(FELEntranceNameplateCommentParameter), Get_Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELEntranceNameplateCommentParameter>()
{
	return FELEntranceNameplateCommentParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceNameplateCommentParameter(FELEntranceNameplateCommentParameter::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELEntranceNameplateCommentParameter"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELEntranceNameplateCommentParameter
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELEntranceNameplateCommentParameter()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceNameplateCommentParameter>(FName(TEXT("ELEntranceNameplateCommentParameter")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELEntranceNameplateCommentParameter;
	struct Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CommentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Argument;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceNameplateCommentParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_CommentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceNameplateCommentParameter" },
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_CommentID = { "CommentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceNameplateCommentParameter, CommentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_CommentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_CommentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_Argument_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceNameplateCommentParameter" },
		{ "ModuleRelativePath", "Public/ELEntranceNameplateCommentParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceNameplateCommentParameter, Argument), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_Argument_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_CommentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::NewProp_Argument,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELEntranceNameplateCommentParameter",
		sizeof(FELEntranceNameplateCommentParameter),
		alignof(FELEntranceNameplateCommentParameter),
		Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceNameplateCommentParameter"), sizeof(FELEntranceNameplateCommentParameter), Get_Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceNameplateCommentParameter_Hash() { return 2578672192U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
