// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ColorParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorParameter() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameter();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FColorParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FColorParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorParameter, Z_Construct_UPackage__Script_Creation(), TEXT("ColorParameter"), sizeof(FColorParameter), Get_Z_Construct_UScriptStruct_FColorParameter_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FColorParameter>()
{
	return FColorParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FColorParameter(FColorParameter::StaticStruct, TEXT("/Script/Creation"), TEXT("ColorParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFColorParameter
{
	FScriptStruct_Creation_StaticRegisterNativesFColorParameter()
	{
		UScriptStruct::DeferCppStructOps<FColorParameter>(FName(TEXT("ColorParameter")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFColorParameter;
	struct Z_Construct_UScriptStruct_FColorParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ColorParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorParameter" },
		{ "ModuleRelativePath", "Public/ColorParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameter, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ColorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ColorParameter" },
		{ "ModuleRelativePath", "Public/ColorParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ColorID = { "ColorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FColorParameter, ColorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ColorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ColorID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorParameter_Statics::NewProp_ColorID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"ColorParameter",
		sizeof(FColorParameter),
		alignof(FColorParameter),
		Z_Construct_UScriptStruct_FColorParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FColorParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ColorParameter"), sizeof(FColorParameter), Get_Z_Construct_UScriptStruct_FColorParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FColorParameter_Hash() { return 2110538347U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
