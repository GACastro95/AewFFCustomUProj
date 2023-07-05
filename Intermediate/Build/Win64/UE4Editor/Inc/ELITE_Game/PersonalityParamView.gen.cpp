// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/PersonalityParamView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonalityParamView() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParamView();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType();
// End Cross Module References
class UScriptStruct* FPersonalityParamView::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FPersonalityParamView_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersonalityParamView, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("PersonalityParamView"), sizeof(FPersonalityParamView), Get_Z_Construct_UScriptStruct_FPersonalityParamView_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FPersonalityParamView>()
{
	return FPersonalityParamView::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPersonalityParamView(FPersonalityParamView::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("PersonalityParamView"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFPersonalityParamView
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFPersonalityParamView()
	{
		UScriptStruct::DeferCppStructOps<FPersonalityParamView>(FName(TEXT("PersonalityParamView")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFPersonalityParamView;
	struct Z_Construct_UScriptStruct_FPersonalityParamView_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PersonalityType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonalityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PersonalityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BitParam_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BitParam_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_BitParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonalityParamView_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PersonalityParamView.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersonalityParamView>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_PersonalityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_PersonalityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonalityParamView" },
		{ "ModuleRelativePath", "Public/PersonalityParamView.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_PersonalityType = { "PersonalityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonalityParamView, PersonalityType), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_PersonalityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_PersonalityType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam_ElementProp = { "BitParam", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EPersonalityBitParamType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PersonalityParamView" },
		{ "ModuleRelativePath", "Public/PersonalityParamView.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam = { "BitParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPersonalityParamView, BitParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPersonalityParamView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_PersonalityType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_PersonalityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPersonalityParamView_Statics::NewProp_BitParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersonalityParamView_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"PersonalityParamView",
		sizeof(FPersonalityParamView),
		alignof(FPersonalityParamView),
		Z_Construct_UScriptStruct_FPersonalityParamView_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParamView_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPersonalityParamView_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersonalityParamView_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPersonalityParamView()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPersonalityParamView_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PersonalityParamView"), sizeof(FPersonalityParamView), Get_Z_Construct_UScriptStruct_FPersonalityParamView_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPersonalityParamView_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPersonalityParamView_Hash() { return 3314708767U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
