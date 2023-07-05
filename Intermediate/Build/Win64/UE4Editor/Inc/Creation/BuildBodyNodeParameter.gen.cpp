// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BuildBodyNodeParameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildBodyNodeParameter() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyNodeParameter();
	UPackage* Z_Construct_UPackage__Script_Creation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyNodeTS();
// End Cross Module References
class UScriptStruct* FBuildBodyNodeParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildBodyNodeParameter, Z_Construct_UPackage__Script_Creation(), TEXT("BuildBodyNodeParameter"), sizeof(FBuildBodyNodeParameter), Get_Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBuildBodyNodeParameter>()
{
	return FBuildBodyNodeParameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildBodyNodeParameter(FBuildBodyNodeParameter::StaticStruct, TEXT("/Script/Creation"), TEXT("BuildBodyNodeParameter"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBuildBodyNodeParameter
{
	FScriptStruct_Creation_StaticRegisterNativesFBuildBodyNodeParameter()
	{
		UScriptStruct::DeferCppStructOps<FBuildBodyNodeParameter>(FName(TEXT("BuildBodyNodeParameter")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBuildBodyNodeParameter;
	struct Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidthScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Collision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildBodyNodeParameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_XOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeParameter" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_XOffset = { "XOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeParameter, XOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_XOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_XOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_DepthScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeParameter" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_DepthScale = { "DepthScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeParameter, DepthScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_DepthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_DepthScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_WidthScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeParameter" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_WidthScale = { "WidthScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeParameter, WidthScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_WidthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_WidthScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Ratio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeParameter" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeParameter, Ratio), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Collision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeParameter" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeParameter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeParameter, Collision), Z_Construct_UScriptStruct_FBuildBodyNodeTS, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Collision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_XOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_DepthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_WidthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::NewProp_Collision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"BuildBodyNodeParameter",
		sizeof(FBuildBodyNodeParameter),
		alignof(FBuildBodyNodeParameter),
		Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyNodeParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildBodyNodeParameter"), sizeof(FBuildBodyNodeParameter), Get_Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildBodyNodeParameter_Hash() { return 1216276042U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
