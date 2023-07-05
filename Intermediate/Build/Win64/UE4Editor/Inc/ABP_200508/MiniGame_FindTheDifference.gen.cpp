// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_FindTheDifference.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_FindTheDifference() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_FindTheDifference();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FMiniGame_FindTheDifference::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_FindTheDifference"), sizeof(FMiniGame_FindTheDifference), Get_Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_FindTheDifference>()
{
	return FMiniGame_FindTheDifference::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_FindTheDifference(FMiniGame_FindTheDifference::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_FindTheDifference"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_FindTheDifference
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_FindTheDifference()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_FindTheDifference>(FName(TEXT("MiniGame_FindTheDifference")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_FindTheDifference;
	struct Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugDispCorrect_MetaData[];
#endif
		static void NewProp_bIsDebugDispCorrect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugDispCorrect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugCheckTexture_MetaData[];
#endif
		static void NewProp_bIsDebugCheckTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugCheckTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCheckTextureIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugCheckTextureIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_FindTheDifference.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_FindTheDifference>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugDispCorrect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_FindTheDifference" },
		{ "ModuleRelativePath", "Public/MiniGame_FindTheDifference.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugDispCorrect_SetBit(void* Obj)
	{
		((FMiniGame_FindTheDifference*)Obj)->bIsDebugDispCorrect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugDispCorrect = { "bIsDebugDispCorrect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_FindTheDifference), &Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugDispCorrect_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugDispCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugDispCorrect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugCheckTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_FindTheDifference" },
		{ "ModuleRelativePath", "Public/MiniGame_FindTheDifference.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugCheckTexture_SetBit(void* Obj)
	{
		((FMiniGame_FindTheDifference*)Obj)->bIsDebugCheckTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugCheckTexture = { "bIsDebugCheckTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_FindTheDifference), &Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugCheckTexture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugCheckTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugCheckTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_DebugCheckTextureIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_FindTheDifference" },
		{ "ModuleRelativePath", "Public/MiniGame_FindTheDifference.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_DebugCheckTextureIndex = { "DebugCheckTextureIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_FindTheDifference, DebugCheckTextureIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_DebugCheckTextureIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_DebugCheckTextureIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugDispCorrect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_bIsDebugCheckTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::NewProp_DebugCheckTextureIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_FindTheDifference",
		sizeof(FMiniGame_FindTheDifference),
		alignof(FMiniGame_FindTheDifference),
		Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_FindTheDifference()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_FindTheDifference"), sizeof(FMiniGame_FindTheDifference), Get_Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_FindTheDifference_Hash() { return 268192862U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
