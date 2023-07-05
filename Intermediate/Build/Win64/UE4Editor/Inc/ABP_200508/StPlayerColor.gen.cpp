// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPlayerColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPlayerColor() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPlayerColor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References

static_assert(std::is_polymorphic<FStPlayerColor>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPlayerColor cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPlayerColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPlayerColor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPlayerColor, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPlayerColor"), sizeof(FStPlayerColor), Get_Z_Construct_UScriptStruct_FStPlayerColor_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPlayerColor>()
{
	return FStPlayerColor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPlayerColor(FStPlayerColor::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPlayerColor"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPlayerColor
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPlayerColor()
	{
		UScriptStruct::DeferCppStructOps<FStPlayerColor>(FName(TEXT("StPlayerColor")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPlayerColor;
	struct Z_Construct_UScriptStruct_FStPlayerColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPlayerColor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPlayerColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_DebugString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPlayerColor" },
		{ "ModuleRelativePath", "Public/StPlayerColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_DebugString = { "DebugString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPlayerColor, DebugString), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_DebugString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_DebugString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_PlayerColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPlayerColor" },
		{ "ModuleRelativePath", "Public/StPlayerColor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_PlayerColor = { "PlayerColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPlayerColor, PlayerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_PlayerColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_PlayerColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPlayerColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_DebugString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPlayerColor_Statics::NewProp_PlayerColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPlayerColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPlayerColor",
		sizeof(FStPlayerColor),
		alignof(FStPlayerColor),
		Z_Construct_UScriptStruct_FStPlayerColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPlayerColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPlayerColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPlayerColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPlayerColor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPlayerColor"), sizeof(FStPlayerColor), Get_Z_Construct_UScriptStruct_FStPlayerColor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPlayerColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPlayerColor_Hash() { return 1024490714U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
