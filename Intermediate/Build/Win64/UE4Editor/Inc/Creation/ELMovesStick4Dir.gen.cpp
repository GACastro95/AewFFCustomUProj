// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesStick4Dir.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesStick4Dir() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStick4Dir();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesStick4Dir>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesStick4Dir cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesStick4Dir::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesStick4Dir_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesStick4Dir, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesStick4Dir"), sizeof(FELMovesStick4Dir), Get_Z_Construct_UScriptStruct_FELMovesStick4Dir_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesStick4Dir>()
{
	return FELMovesStick4Dir::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesStick4Dir(FELMovesStick4Dir::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesStick4Dir"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesStick4Dir
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesStick4Dir()
	{
		UScriptStruct::DeferCppStructOps<FELMovesStick4Dir>(FName(TEXT("ELMovesStick4Dir")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesStick4Dir;
	struct Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lever_Neutral_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lever_Neutral;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lever_Upward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lever_Upward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lever_Downward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lever_Downward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lever_Left_Right_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lever_Left_Right_Direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesStick4Dir.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesStick4Dir>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Neutral_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStick4Dir" },
		{ "ModuleRelativePath", "Public/ELMovesStick4Dir.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Neutral = { "Lever_Neutral", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStick4Dir, Lever_Neutral), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Neutral_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Neutral_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Upward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStick4Dir" },
		{ "ModuleRelativePath", "Public/ELMovesStick4Dir.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Upward = { "Lever_Upward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStick4Dir, Lever_Upward), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Upward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Upward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Downward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStick4Dir" },
		{ "ModuleRelativePath", "Public/ELMovesStick4Dir.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Downward = { "Lever_Downward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStick4Dir, Lever_Downward), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Downward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Downward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Left_Right_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStick4Dir" },
		{ "ModuleRelativePath", "Public/ELMovesStick4Dir.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Left_Right_Direction = { "Lever_Left_Right_Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStick4Dir, Lever_Left_Right_Direction), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Left_Right_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Left_Right_Direction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Neutral,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Upward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Downward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::NewProp_Lever_Left_Right_Direction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesStick4Dir",
		sizeof(FELMovesStick4Dir),
		alignof(FELMovesStick4Dir),
		Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesStick4Dir()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesStick4Dir_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesStick4Dir"), sizeof(FELMovesStick4Dir), Get_Z_Construct_UScriptStruct_FELMovesStick4Dir_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesStick4Dir_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesStick4Dir_Hash() { return 3249895741U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
