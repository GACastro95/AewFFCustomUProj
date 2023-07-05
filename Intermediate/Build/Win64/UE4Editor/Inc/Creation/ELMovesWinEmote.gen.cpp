// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesWinEmote.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesWinEmote() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesWinEmote();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesWinEmote>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesWinEmote cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesWinEmote::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesWinEmote_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesWinEmote, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesWinEmote"), sizeof(FELMovesWinEmote), Get_Z_Construct_UScriptStruct_FELMovesWinEmote_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesWinEmote>()
{
	return FELMovesWinEmote::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesWinEmote(FELMovesWinEmote::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesWinEmote"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesWinEmote
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesWinEmote()
	{
		UScriptStruct::DeferCppStructOps<FELMovesWinEmote>(FName(TEXT("ELMovesWinEmote")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesWinEmote;
	struct Z_Construct_UScriptStruct_FELMovesWinEmote_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Up;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Down;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesWinEmote.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesWinEmote>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Up_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWinEmote" },
		{ "ModuleRelativePath", "Public/ELMovesWinEmote.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWinEmote, Up), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Up_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Right_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWinEmote" },
		{ "ModuleRelativePath", "Public/ELMovesWinEmote.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWinEmote, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Down_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWinEmote" },
		{ "ModuleRelativePath", "Public/ELMovesWinEmote.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWinEmote, Down), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Down_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Left_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesWinEmote" },
		{ "ModuleRelativePath", "Public/ELMovesWinEmote.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesWinEmote, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Left_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::NewProp_Left,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesWinEmote",
		sizeof(FELMovesWinEmote),
		alignof(FELMovesWinEmote),
		Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesWinEmote()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesWinEmote_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesWinEmote"), sizeof(FELMovesWinEmote), Get_Z_Construct_UScriptStruct_FELMovesWinEmote_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesWinEmote_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesWinEmote_Hash() { return 3273607578U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
