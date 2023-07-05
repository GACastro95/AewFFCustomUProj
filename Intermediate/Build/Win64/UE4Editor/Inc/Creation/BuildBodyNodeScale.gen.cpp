// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/BuildBodyNodeScale.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildBodyNodeScale() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyNodeScale();
	UPackage* Z_Construct_UPackage__Script_Creation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FBuildBodyNodeScale::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FBuildBodyNodeScale_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildBodyNodeScale, Z_Construct_UPackage__Script_Creation(), TEXT("BuildBodyNodeScale"), sizeof(FBuildBodyNodeScale), Get_Z_Construct_UScriptStruct_FBuildBodyNodeScale_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FBuildBodyNodeScale>()
{
	return FBuildBodyNodeScale::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuildBodyNodeScale(FBuildBodyNodeScale::StaticStruct, TEXT("/Script/Creation"), TEXT("BuildBodyNodeScale"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFBuildBodyNodeScale
{
	FScriptStruct_Creation_StaticRegisterNativesFBuildBodyNodeScale()
	{
		UScriptStruct::DeferCppStructOps<FBuildBodyNodeScale>(FName(TEXT("BuildBodyNodeScale")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFBuildBodyNodeScale;
	struct Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeScale.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildBodyNodeScale>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeScale" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeScale.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeScale, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Ratio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeScale" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeScale.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeScale, Ratio), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Collision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BuildBodyNodeScale" },
		{ "ModuleRelativePath", "Public/BuildBodyNodeScale.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuildBodyNodeScale, Collision), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Collision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::NewProp_Collision,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"BuildBodyNodeScale",
		sizeof(FBuildBodyNodeScale),
		alignof(FBuildBodyNodeScale),
		Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuildBodyNodeScale()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuildBodyNodeScale_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuildBodyNodeScale"), sizeof(FBuildBodyNodeScale), Get_Z_Construct_UScriptStruct_FBuildBodyNodeScale_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuildBodyNodeScale_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuildBodyNodeScale_Hash() { return 1352786900U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
