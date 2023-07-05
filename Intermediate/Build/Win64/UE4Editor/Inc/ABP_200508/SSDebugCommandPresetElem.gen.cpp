// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDebugCommandPresetElem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDebugCommandPresetElem() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugCommandPresetElem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSDebugCommandPresetElem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSDebugCommandPresetElem cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSDebugCommandPresetElem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDebugCommandPresetElem"), sizeof(FSSDebugCommandPresetElem), Get_Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDebugCommandPresetElem>()
{
	return FSSDebugCommandPresetElem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDebugCommandPresetElem(FSSDebugCommandPresetElem::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDebugCommandPresetElem"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugCommandPresetElem
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugCommandPresetElem()
	{
		UScriptStruct::DeferCppStructOps<FSSDebugCommandPresetElem>(FName(TEXT("SSDebugCommandPresetElem")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugCommandPresetElem;
	struct Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDebugCommandPresetElem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDebugCommandPresetElem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugCommandPresetElem" },
		{ "ModuleRelativePath", "Public/SSDebugCommandPresetElem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FSSDebugCommandPresetElem*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugCommandPresetElem), &Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Command_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugCommandPresetElem" },
		{ "ModuleRelativePath", "Public/SSDebugCommandPresetElem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugCommandPresetElem, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::NewProp_Command,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSDebugCommandPresetElem",
		sizeof(FSSDebugCommandPresetElem),
		alignof(FSSDebugCommandPresetElem),
		Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDebugCommandPresetElem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDebugCommandPresetElem"), sizeof(FSSDebugCommandPresetElem), Get_Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDebugCommandPresetElem_Hash() { return 198933618U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
