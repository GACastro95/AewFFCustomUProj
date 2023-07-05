// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesDiving.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesDiving() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesDiving();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesDiving>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesDiving cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesDiving::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesDiving_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesDiving, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesDiving"), sizeof(FELMovesDiving), Get_Z_Construct_UScriptStruct_FELMovesDiving_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesDiving>()
{
	return FELMovesDiving::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesDiving(FELMovesDiving::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesDiving"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesDiving
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesDiving()
	{
		UScriptStruct::DeferCppStructOps<FELMovesDiving>(FName(TEXT("ELMovesDiving")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesDiving;
	struct Z_Construct_UScriptStruct_FELMovesDiving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_Standing_Front_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Diving_Standing_Front_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_Standing_Front_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Diving_Standing_Front_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_Standing_Front_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Diving_Standing_Front_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_Down_FaceUp_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Diving_Down_FaceUp_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_Down_FaceUp_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Diving_Down_FaceUp_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Diving_Down_FaceUp_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Diving_Down_FaceUp_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDiving_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesDiving.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesDiving>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDiving" },
		{ "ModuleRelativePath", "Public/ELMovesDiving.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Punch = { "Diving_Standing_Front_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDiving, Diving_Standing_Front_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDiving" },
		{ "ModuleRelativePath", "Public/ELMovesDiving.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Kick = { "Diving_Standing_Front_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDiving, Diving_Standing_Front_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDiving" },
		{ "ModuleRelativePath", "Public/ELMovesDiving.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Grapple = { "Diving_Standing_Front_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDiving, Diving_Standing_Front_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDiving" },
		{ "ModuleRelativePath", "Public/ELMovesDiving.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Punch = { "Diving_Down_FaceUp_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDiving, Diving_Down_FaceUp_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDiving" },
		{ "ModuleRelativePath", "Public/ELMovesDiving.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Kick = { "Diving_Down_FaceUp_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDiving, Diving_Down_FaceUp_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesDiving" },
		{ "ModuleRelativePath", "Public/ELMovesDiving.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Grapple = { "Diving_Down_FaceUp_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesDiving, Diving_Down_FaceUp_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesDiving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Standing_Front_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesDiving_Statics::NewProp_Diving_Down_FaceUp_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesDiving_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesDiving",
		sizeof(FELMovesDiving),
		alignof(FELMovesDiving),
		Z_Construct_UScriptStruct_FELMovesDiving_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesDiving_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesDiving_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesDiving()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesDiving_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesDiving"), sizeof(FELMovesDiving), Get_Z_Construct_UScriptStruct_FELMovesDiving_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesDiving_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesDiving_Hash() { return 1016167167U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
