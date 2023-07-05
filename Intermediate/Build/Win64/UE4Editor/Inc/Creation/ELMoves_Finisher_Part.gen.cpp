// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMoves_Finisher_Part.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMoves_Finisher_Part() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher_Part();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFinisher_Type();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFinisher_RS_Direction();
// End Cross Module References

static_assert(std::is_polymorphic<FELMoves_Finisher_Part>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMoves_Finisher_Part cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMoves_Finisher_Part::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMoves_Finisher_Part, Z_Construct_UPackage__Script_Creation(), TEXT("ELMoves_Finisher_Part"), sizeof(FELMoves_Finisher_Part), Get_Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMoves_Finisher_Part>()
{
	return FELMoves_Finisher_Part::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMoves_Finisher_Part(FELMoves_Finisher_Part::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMoves_Finisher_Part"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMoves_Finisher_Part
{
	FScriptStruct_Creation_StaticRegisterNativesFELMoves_Finisher_Part()
	{
		UScriptStruct::DeferCppStructOps<FELMoves_Finisher_Part>(FName(TEXT("ELMoves_Finisher_Part")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMoves_Finisher_Part;
	struct Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RSDir_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RSDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RSDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMoves_Finisher_Part.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMoves_Finisher_Part>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves_Finisher_Part" },
		{ "ModuleRelativePath", "Public/ELMoves_Finisher_Part.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves_Finisher_Part, Type), Z_Construct_UEnum_Creation_EFinisher_Type, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_RSDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_RSDir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves_Finisher_Part" },
		{ "ModuleRelativePath", "Public/ELMoves_Finisher_Part.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_RSDir = { "RSDir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves_Finisher_Part, RSDir), Z_Construct_UEnum_Creation_EFinisher_RS_Direction, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_RSDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_RSDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_MovesIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves_Finisher_Part" },
		{ "ModuleRelativePath", "Public/ELMoves_Finisher_Part.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_MovesIndex = { "MovesIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves_Finisher_Part, MovesIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_MovesIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_MovesIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_RSDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_RSDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::NewProp_MovesIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMoves_Finisher_Part",
		sizeof(FELMoves_Finisher_Part),
		alignof(FELMoves_Finisher_Part),
		Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher_Part()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMoves_Finisher_Part"), sizeof(FELMoves_Finisher_Part), Get_Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMoves_Finisher_Part_Hash() { return 1955870574U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
