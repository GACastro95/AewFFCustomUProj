// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesStandRearStrikePart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesStandRearStrikePart() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStandRearStrikePart();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesStandRearStrikePart>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesStandRearStrikePart cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesStandRearStrikePart::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesStandRearStrikePart"), sizeof(FELMovesStandRearStrikePart), Get_Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesStandRearStrikePart>()
{
	return FELMovesStandRearStrikePart::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesStandRearStrikePart(FELMovesStandRearStrikePart::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesStandRearStrikePart"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesStandRearStrikePart
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesStandRearStrikePart()
	{
		UScriptStruct::DeferCppStructOps<FELMovesStandRearStrikePart>(FName(TEXT("ELMovesStandRearStrikePart")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesStandRearStrikePart;
	struct Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortPress_First_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShortPress_First;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortPress_Second_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShortPress_Second;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortPress_Lever_First_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShortPress_Lever_First;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortPress_Lever_Second_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ShortPress_Lever_Second;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongPress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LongPress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongPress_Lever_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LongPress_Lever;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrikePart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesStandRearStrikePart>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_First_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrikePart" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrikePart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_First = { "ShortPress_First", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrikePart, ShortPress_First), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_First_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_First_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Second_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrikePart" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrikePart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Second = { "ShortPress_Second", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrikePart, ShortPress_Second), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Second_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Second_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_First_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrikePart" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrikePart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_First = { "ShortPress_Lever_First", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrikePart, ShortPress_Lever_First), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_First_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_First_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_Second_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrikePart" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrikePart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_Second = { "ShortPress_Lever_Second", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrikePart, ShortPress_Lever_Second), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_Second_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_Second_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrikePart" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrikePart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress = { "LongPress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrikePart, LongPress), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_Lever_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStandRearStrikePart" },
		{ "ModuleRelativePath", "Public/ELMovesStandRearStrikePart.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_Lever = { "LongPress_Lever", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStandRearStrikePart, LongPress_Lever), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_Lever_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_Lever_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_First,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Second,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_First,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_ShortPress_Lever_Second,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::NewProp_LongPress_Lever,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesStandRearStrikePart",
		sizeof(FELMovesStandRearStrikePart),
		alignof(FELMovesStandRearStrikePart),
		Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesStandRearStrikePart()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesStandRearStrikePart"), sizeof(FELMovesStandRearStrikePart), Get_Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesStandRearStrikePart_Hash() { return 2136710261U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
