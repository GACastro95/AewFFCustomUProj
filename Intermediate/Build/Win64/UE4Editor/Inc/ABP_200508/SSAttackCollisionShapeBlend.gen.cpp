// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttackCollisionShapeBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttackCollisionShapeBlend() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSAttackShapeParam();
// End Cross Module References
class UScriptStruct* FSSAttackCollisionShapeBlend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttackCollisionShapeBlend"), sizeof(FSSAttackCollisionShapeBlend), Get_Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttackCollisionShapeBlend>()
{
	return FSSAttackCollisionShapeBlend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttackCollisionShapeBlend(FSSAttackCollisionShapeBlend::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttackCollisionShapeBlend"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackCollisionShapeBlend
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackCollisionShapeBlend()
	{
		UScriptStruct::DeferCppStructOps<FSSAttackCollisionShapeBlend>(FName(TEXT("SSAttackCollisionShapeBlend")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackCollisionShapeBlend;
	struct Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTimeMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTimeMax;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartShapes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartShapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartShapes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttackCollisionShapeBlend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttackCollisionShapeBlend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendTimeMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackCollisionShapeBlend" },
		{ "ModuleRelativePath", "Public/SSAttackCollisionShapeBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendTimeMax = { "BlendTimeMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackCollisionShapeBlend, BlendTimeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendTimeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendTimeMax_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_StartShapes_Inner = { "StartShapes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSAttackShapeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_StartShapes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackCollisionShapeBlend" },
		{ "ModuleRelativePath", "Public/SSAttackCollisionShapeBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_StartShapes = { "StartShapes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackCollisionShapeBlend, StartShapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_StartShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_StartShapes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendParams_Inner = { "BlendParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELSSAttackShapeParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackCollisionShapeBlend" },
		{ "ModuleRelativePath", "Public/SSAttackCollisionShapeBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendParams = { "BlendParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackCollisionShapeBlend, BlendParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendTimeMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_StartShapes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_StartShapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::NewProp_BlendParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSAttackCollisionShapeBlend",
		sizeof(FSSAttackCollisionShapeBlend),
		alignof(FSSAttackCollisionShapeBlend),
		Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttackCollisionShapeBlend"), sizeof(FSSAttackCollisionShapeBlend), Get_Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttackCollisionShapeBlend_Hash() { return 2088596585U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
