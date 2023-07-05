// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/InGameTagFinisher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameTagFinisher() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FInGameTagFinisher();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTeamMemberInfo();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
// End Cross Module References
class UScriptStruct* FInGameTagFinisher::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FInGameTagFinisher_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInGameTagFinisher, Z_Construct_UPackage__Script_ABP_200508(), TEXT("InGameTagFinisher"), sizeof(FInGameTagFinisher), Get_Z_Construct_UScriptStruct_FInGameTagFinisher_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FInGameTagFinisher>()
{
	return FInGameTagFinisher::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInGameTagFinisher(FInGameTagFinisher::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("InGameTagFinisher"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFInGameTagFinisher
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFInGameTagFinisher()
	{
		UScriptStruct::DeferCppStructOps<FInGameTagFinisher>(FName(TEXT("InGameTagFinisher")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFInGameTagFinisher;
	struct Z_Construct_UScriptStruct_FInGameTagFinisher_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagPartner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagPartner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InGameTagFinisher.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInGameTagFinisher>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_TagPartner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InGameTagFinisher" },
		{ "ModuleRelativePath", "Public/InGameTagFinisher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_TagPartner = { "TagPartner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInGameTagFinisher, TagPartner), Z_Construct_UScriptStruct_FCreateTeamMemberInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_TagPartner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_TagPartner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_Finisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InGameTagFinisher" },
		{ "ModuleRelativePath", "Public/InGameTagFinisher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInGameTagFinisher, Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_Finisher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_TagPartner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::NewProp_Finisher,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"InGameTagFinisher",
		sizeof(FInGameTagFinisher),
		alignof(FInGameTagFinisher),
		Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInGameTagFinisher()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInGameTagFinisher_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InGameTagFinisher"), sizeof(FInGameTagFinisher), Get_Z_Construct_UScriptStruct_FInGameTagFinisher_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInGameTagFinisher_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInGameTagFinisher_Hash() { return 2058801166U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
